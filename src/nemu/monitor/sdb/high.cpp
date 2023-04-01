#include <fmt/core.h>
#include <nemu/isa.hpp>
#include <nemu/cpu/cpu.hpp>
#include <readline/readline.h>
#include <readline/history.h>
#include "common.hpp"
#include "nemu/memory/vaddr.hpp"
#include "sdb.hpp"
#include "utils.hpp"
#include "nemu/addr_map.hpp"
static addr_map mips_map(__TEST_ELF__);
extern ftracer mips_ftr;

/*
 * false for return ??:??
 * */
bool step_once(){
    std::string new_line, old_line;
    bool new_find, old_find;
    do {
        new_find = mips_map.code_is(nemu->inst_state.pc, old_line);
        old_find = mips_map.code_is(nemu->arch_state.pc, new_line);
        if (new_line==old_line && new_find && old_find) 
            cpu_exec(1);
        else break;
    } while (1);
    bool success = old_find && new_find;
    if  (success) fmt::print("{}\n", old_line);
    return success;
}
/*
 * false situation:
 * 1. not find current function end 
 * 2. goto a not find code
 */
bool next_once(){
    std::string new_line, old_line, native_func;
    word_t native_end;
    uint32_t native_line;
    std::string native_file;
    mips_map.code_at(nemu->inst_state.pc, native_file, native_line);
    if (mips_ftr.end_of(nemu->inst_state.pc, native_end)==false || 
            mips_map.code_at(nemu->inst_state.pc, native_file, native_line)==false) return false;

    uint32_t next_line = native_line+1;
    bool is_next_line = false;
    do {
        cpu_exec(1);
        word_t current_line;
        std::string current_file;
        is_next_line = mips_map.code_at(nemu->inst_state.pc, current_file, current_line) 
            &&  current_line == next_line && current_file == native_file;
    } while(nemu->inst_state.pc==native_end || is_next_line);
    return true;
}
int cmd_b(char *args){
    return 0;
}


