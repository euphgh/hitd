#include "common.hpp"
#include "elf/elf++.hh"
#include "dwarf/dwarf++.hh"
#include "fmt/core.h"
#include <array>
#include <fcntl.h>
#include <fstream>
#include <sstream>
#include <tuple>
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
                // ++entry; //skip prologue
                return entry->address;
            }
        }
    }
    throw std::out_of_range{"Cannot find function"};
}/*}}}*/
bool Debugger::is_same_src(word_t old_pc, word_t new_pc){
    return get_line_entry_from_pc(old_pc)==get_line_entry_from_pc(new_pc);
}
bool Debugger::is_func_new_line(word_t old_pc, word_t new_pc){
    bool is_same_func = mips_dwarf.get_func_name(old_pc) == mips_dwarf.get_func_name(new_pc);
    std::string old_file, new_file; 
    unsigned old_line, new_line;
    std::tie(old_file,old_line) = mips_dwarf.get_local(old_pc);
    std::tie(new_file,new_line) = mips_dwarf.get_local(new_pc);
    bool is_diff_line = (old_file==new_file) && (old_line!= new_line);
    return is_same_func && is_diff_line;
}
std::string Debugger::get_func_name(word_t pc){
    return dwarf::at_name(get_function_from_pc(pc));
}
std::tuple<std::string, unsigned> Debugger::get_local(word_t pc){
    auto entry = get_line_entry_from_pc(pc);
    return std::make_tuple(entry->file->path, entry->line);
}

Debugger mips_dwarf(__TEST_ELF__);
