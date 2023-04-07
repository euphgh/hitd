#include "common.hpp"
#include "elf/elf++.hh"
#include "dwarf/dwarf++.hh"
#include "fmt/core.h"
#include <array>
#include <fcntl.h>
#include <fstream>
#include <sstream>
#include <tuple>
#include <vector>
#include "nemu/Debugger.hpp"

Debugger::Debugger (const std::string& elf_name) {/*{{{*/
    int fd = open(elf_name.c_str(), O_RDONLY);
    m_elf = elf::elf{elf::create_mmap_loader(fd)};
    m_dwarf = dwarf::dwarf{dwarf::elf::create_loader(m_elf)};
}/*}}}*/

dwarf::die Debugger::get_function_from_pc(uint32_t pc){/*{{{*/
    for (auto &cu : m_dwarf.compilation_units()) {
        auto root_die = cu.root();
        if (root_die.has(dwarf::DW_AT::low_pc)==false &&
                root_die.has(dwarf::DW_AT::ranges)==false) continue;
        if (dwarf::die_pc_range(root_die).contains(pc)) {
            for (const auto& die : cu.root()) {
                try{
                    if (die.tag == dwarf::DW_TAG::subprogram) {
                        auto fun_range = die_pc_range(die);
                        if (fun_range.contains(pc)) {
                            return die;
                        }
                    }
                } catch (std::out_of_range const&){}
            }
        }
    }
    throw std::out_of_range{"Cannot find function"};
}/*}}}*/

dwarf::line_table::iterator Debugger::get_line_entry_from_pc(word_t pc){/*{{{*/
    for (auto &cu : m_dwarf.compilation_units()) {
        try{
            if (die_pc_range(cu.root()).contains(pc)) {
                auto &lt = cu.get_line_table();
                auto it = lt.find_address(pc);
                if (it == lt.end()) 
                    throw std::out_of_range{"Cannot find line entry"};
                else return it;
            }
        } catch (std::out_of_range const&){}
    }
    throw std::out_of_range{"Cannot find line entry"};
}/*}}}*/

void Debugger::print_src_blk_at(word_t pc, unsigned up, unsigned down){/*{{{*/
    auto line_entry = get_line_entry_from_pc(pc);
    std::string file_name = line_entry->file->path;
    unsigned line = line_entry->line;
    std::ifstream file {file_name};
    if (file.is_open()==false){
        fmt::print("not find {}\n", file_name);
        return;
    }
    unsigned start_line = (line <= up) ? 1 : line - up;
    unsigned end_line = line + down;
    //Work out a window around the desired line
    auto current_line = 1u;
    //Skip lines up until start_line
    std::array<char, 256> buffer;
    while (current_line != start_line && file.good()) {
        file.getline(buffer.data(),buffer.size());
        ++current_line;
    }
    while (current_line <= end_line && file.good()){
        file.getline(buffer.data(),buffer.size());
        if (current_line==line) 
            fmt::print("> {}\n", buffer.data());
        else
            fmt::print("  {}\n", buffer.data());
        ++current_line;
    }
}/*}}}*/

void Debugger::print_src_line(const std::string& file_name, unsigned line){/*{{{*/
    std::ifstream file {file_name};
    if (file.is_open()==false){
        fmt::print("not find {}\n", file_name);
        return;
    }

    //Work out a window around the desired line
    auto current_line = 1u;
    //Skip lines up until start_line
    std::array<char, 256> buffer;
    while (current_line != line && file.good()) {
        file.getline(buffer.data(),buffer.size());
        ++current_line;
    }
    if (file.good())
        file.getline(buffer.data(),buffer.size());
    fmt::print("{}\n", buffer.data());
}/*}}}*/

void Debugger::print_src_line_at(word_t pc){/*{{{*/
    auto line_entry = get_line_entry_from_pc(pc);
    std::string file_name = line_entry->file->path;
    unsigned line = line_entry->line;
    print_src_line(file_name, line);
}/*}}}*/

uint32_t Debugger::pc_at_func(const std::string& name) {/*{{{*/
    for (const auto& cu : m_dwarf.compilation_units()) {
        for (const auto& die : cu.root()) {
            if (die.has(dwarf::DW_AT::name) && at_name(die) == name) {
                auto low_pc = at_low_pc(die);
                auto entry = get_line_entry_from_pc(low_pc);
                ++entry; //skip prologue
                return entry->address;
            }
        }
    }
    throw std::out_of_range{"Cannot find function"};
}/*}}}*/

bool Debugger::is_same_src(word_t old_pc, word_t new_pc){/*{{{*/
    return get_line_entry_from_pc(old_pc)==get_line_entry_from_pc(new_pc);
}/*}}}*/

std::string Debugger::get_func_name(word_t pc){/*{{{*/
    return dwarf::at_name(get_function_from_pc(pc));
}/*}}}*/

std::vector<word_t> Debugger::get_next_stop_pc(word_t pc){/*{{{*/
    std::vector<word_t> res{0};
    dwarf::die func ;
    try{ func = get_function_from_pc(pc); } 
    catch (std::out_of_range const&){ return res; }
    auto func_entry = at_low_pc(func);
    auto func_end = at_high_pc(func);

    auto line = get_line_entry_from_pc(func_entry);
    auto start_line = get_line_entry_from_pc(pc);
    std::string file_name = start_line->file->path;

    while (line->address < func_end) {
        auto load_address = line->address;
        if (line->address != start_line->address &&
                line->file->path == file_name &&
                line->line != start_line->line){
            res.push_back(load_address);
        }
        ++line;
    }
    return res;
}/*}}}*/

std::tuple<std::string, unsigned> Debugger::get_local(word_t pc){
    std::string file_name = "??";
    word_t line = 0;
    try{
        auto entry = get_line_entry_from_pc(pc);
        file_name = entry->file->path;
        line = entry->line;
    } catch(std::out_of_range const&) {}
    return std::make_tuple(file_name,line);
}

bool is_suffix(const std::string& s, const std::string& of) {
    if (s.size() > of.size()) return false;
    auto diff = of.size() - s.size();
    return std::equal(s.begin(), s.end(), of.begin() + diff);
}

word_t Debugger::get_pc_at_src_line(const std::string& file, unsigned line) {
    for (const auto& cu : m_dwarf.compilation_units()) {
        if (is_suffix(file, at_name(cu.root()))) {
            const auto& lt = cu.get_line_table();
            for (const auto& entry : lt) {
                if (entry.is_stmt && entry.line == line) {
                    return entry.address;
                }
            }
        }
    }
    throw std::out_of_range{"Cannot find file and line"};
}

IFDEF(CONFIG_DWARF, Debugger mips_dwarf(__TEST_ELF__));
