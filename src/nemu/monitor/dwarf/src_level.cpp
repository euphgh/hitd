#include <algorithm>
#include <fmt/core.h>
#include <nemu/isa.hpp>
#include <nemu/cpu/cpu.hpp>
#include <readline/readline.h>
#include <readline/history.h>
#include <tuple>
#include <vector>
#include "common.hpp"
#include "nemu/memory/vaddr.hpp"
#include "utils.hpp"
#include "nemu/Debugger.hpp"

static void print_env(word_t pc){/*{{{*/
    std::string file; unsigned line;
    std::string func = "??";
    try {
        func = mips_dwarf.get_func_name(pc);
    } catch (std::out_of_range const&) {}
    std::tie(file,line) = mips_dwarf.get_local(pc);
    fmt::print("finish " HEX_WORD " in {} at {} {}\n", 
            pc, func,
            file,line);
}/*}}}*/

static bool has_ret_addr(word_t pc, word_t&ret_addr, std::string& func_name){/*{{{*/
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

static void statistic(bool once, unsigned num){/*{{{*/
    fmt::print("execute {} instructs\n", num);
    if (once)
        mips_dwarf.print_src_blk_at(nemu->arch_state.pc, 3, 3);
    else 
        mips_dwarf.print_src_line_at(nemu->arch_state.pc);
}/*}}}*/

bool step_once(bool once){/*{{{*/
    print_env(nemu->arch_state.pc);
    std::string old_file_name, cur_file_name;
    word_t old_line, cur_line;
    std::tie(old_file_name, old_line) = mips_dwarf.get_local(nemu->arch_state.pc);
    unsigned num = 0;
    try {
        do {
            ASSERT_RET(cpu_exec(1), "fail for nemu not run");
            std::tie(cur_file_name, cur_line) = mips_dwarf.get_local(nemu->arch_state.pc);
            num++;
        } while (cur_file_name==old_file_name && cur_line==old_line);
    } catch (std::out_of_range const&) {
        ASSERT_RET(0, "fail for out_of_range");
    }
    statistic(once, num);
    print_env(nemu->arch_state.pc);
    return true;
}/*}}}*/

bool next_once(bool once){/*{{{*/
    print_env(nemu->arch_state.pc);
    word_t ret_addr;
    std::string func_name;
    bool find_ret = has_ret_addr(nemu->arch_state.pc, ret_addr, func_name);
    std::vector<word_t> all_brk = mips_dwarf.get_next_stop_pc(nemu->arch_state.pc);
    bool find_brk = all_brk.size() > 0;
    bool not_last_inst, not_next_line = true;
    ASSERT_RET (find_ret && find_brk, 
            "fail for no {}", find_brk ?"return address":"line instructs");
    unsigned num = 0;
    do {
        ASSERT_RET(cpu_exec(1), "fail for nemu not run");
        word_t arch_pc = nemu->arch_state.pc;
        not_last_inst = arch_pc != ret_addr;
        for (word_t stop_pc: all_brk) 
            not_next_line &= stop_pc!=arch_pc;
        num++;
    } while(not_next_line && not_last_inst);
    statistic(once, num);
    print_env(nemu->arch_state.pc);
    return true;
}/*}}}*/

bool step_out(){/*{{{*/
    print_env(nemu->arch_state.pc);
    word_t ret_addr = 0;
    std::string func_name;
    ASSERT_RET(has_ret_addr(nemu->arch_state.pc, ret_addr, func_name),
            "fail for out_of_range");
    do { ASSERT_RET(cpu_exec(1), "fail for nemu not run");
    } while(nemu->inst_state.pc==ret_addr);
    fmt::print("return function {}\n", func_name);
    print_env(nemu->arch_state.pc);
    return true;
}/*}}}*/

void backtrace(){/*{{{*/
    auto copy = mips_dwarf.fstack;
    copy.push(nemu->arch_state.pc);
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
}/*}}}*/
