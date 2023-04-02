#include <fmt/core.h>
#include <nemu/isa.hpp>
#include <nemu/cpu/cpu.hpp>
#include <readline/readline.h>
#include <readline/history.h>
#include <tuple>
#include "common.hpp"
#include "nemu/memory/vaddr.hpp"
#include "sdb.hpp"
#include "utils.hpp"
#include "nemu/Debugger.hpp"
/*
 * false for return ??:??
 * */
void print_inst_arch(word_t inst, word_t arch){/*{{{*/
    std::string file; unsigned line;
    std::tie(file,line) = mips_dwarf.get_local(inst);
    fmt::print("finish " HEX_WORD " in {} at {} {}\n", 
            inst, mips_dwarf.get_func_name(inst),
            file,line);

    std::tie(file,line) = mips_dwarf.get_local(arch);
    fmt::print("next   " HEX_WORD " in {} at {} {}\n",
            arch, mips_dwarf.get_func_name(arch),
            file,line);
}/*}}}*/

bool step_once(bool once){/*{{{*/
    bool success = true;
    unsigned num = 0;
    try {
        do {
            cpu_exec(1);
            print_inst_arch(nemu->inst_state.pc, nemu->arch_state.pc);
            num++;
            if (nemu_state.state!=NEMU_RUNNING) {
                fmt::print("fail for nemu not run\n");
                success = false;
                break;
            }
        } while (mips_dwarf.is_same_src(nemu->inst_state.pc, nemu->arch_state.pc));
    } catch (std::out_of_range const&) { 
        fmt::print("fail for out_of_range\n");
        success = false; 
    }
    if  (success) {
        fmt::print("execute {} inst\n", num);
        if (once)
            mips_dwarf.print_src_blk_at(nemu->arch_state.pc, 3, 3);
        else 
            mips_dwarf.print_src_line_at(nemu->arch_state.pc);
    }
    else fmt::print("finish execute " HEX_WORD "\t{}\n", nemu->inst_state.pc, nemu->isa_disasm_inst());
    return success;
}/*}}}*/

bool has_ret_addr(word_t pc, word_t&ret_addr, std::string& func_name){/*{{{*/
    bool find_ret_addr = true;
    try {
        auto func_entry = mips_dwarf.get_function_from_pc(pc);
        func_name = dwarf::at_name(func_entry);
        ret_addr = dwarf::at_low_pc(func_entry); 
    } catch (std::out_of_range const&) { 
        find_ret_addr = false; 
    }
    return find_ret_addr;
}/*}}}*/

bool next_once(bool once){/*{{{*/
    bool success = true;
    unsigned num = 0;
    try {
        do {
            cpu_exec(1);
            print_inst_arch(nemu->inst_state.pc, nemu->arch_state.pc);
            num++;
            if (nemu_state.state!=NEMU_RUNNING) {
                fmt::print("fail for nemu not run\n");
                success = false;
                break;
            }
        } while (!mips_dwarf.is_func_new_line(nemu->inst_state.pc, nemu->arch_state.pc));
    } catch (std::out_of_range const&) { 
        fmt::print("fail for out_of_range\n");
        success = false; 
    }
    if  (success) {
        fmt::print("execute {} inst\n", num);

        if (once)
            mips_dwarf.print_src_blk_at(nemu->arch_state.pc, 3, 3);
        else 
            mips_dwarf.print_src_line_at(nemu->arch_state.pc);
    }
    else fmt::print("finish execute " HEX_WORD "\t{}\n", nemu->inst_state.pc, nemu->isa_disasm_inst());
    return success;
}/*}}}*/

void step_out(){/*{{{*/
    word_t ret_addr = 0;
    std::string func_name;
    if (has_ret_addr(nemu->arch_state.pc, ret_addr, func_name)) {
        bool success = true;
        do {
            if (cpu_exec(1)==false) {
                fmt::print("can not s for nemu not run\n");
                success = false;
                break;
            }
        } while(nemu->inst_state.pc==ret_addr);
        if (success)
            fmt::print("return function {}", func_name);
    }
    else fmt::print("fail for out_of_range");
}/*}}}*/

void backtrace(){
    auto copy = mips_dwarf.fstack;
    copy.push(nemu->inst_state.pc);
    fmt::print("function call stack has {} levels\n", copy.size());
    int level = 0;
    do {
        word_t current_pc = copy.top();
        std::string func_name;
        try{
            func_name = dwarf::at_name(mips_dwarf.get_function_from_pc(current_pc));
        } catch (std::out_of_range const&) { func_name = "??"; }
        std::string srcs_name = "??";
        unsigned srcs_line = 0;
        try{
            auto local_entry = mips_dwarf.get_line_entry_from_pc(current_pc);
            srcs_name = local_entry->file->path;
            srcs_line = local_entry->line;
        } catch (std::out_of_range const&) { 
            srcs_name = "??";
            srcs_line = 0;
        }
        fmt::print("#{:<2d}  " HEX_WORD " in {} at {}:{}\n", 
                level++, current_pc, func_name, srcs_name, srcs_line);
        copy.pop();
    } while(!copy.empty());
}
