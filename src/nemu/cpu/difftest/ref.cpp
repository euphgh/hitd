/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/
#include <nemu/isa.hpp>
#include "common.hpp"
#include <nemu/cpu/cpu.hpp>
#include "paddr/nemu_paddr.hpp"
#include "nemu/cpu/decode.hpp"
#include "../local-include/reg.hpp"
#include "testbench/sim_state.hpp"

extern void trace_and_difftest(Decode *_this);
extern std::string disassemble(uint64_t pc, uint8_t *code, int nbyte);

void CPU_state::ref_tick_and_int(uint8_t ext_int){/*{{{*/
    // only ext_int[5:0] is valid
    cp0.cause.ip_h = ext_int | (cp0.cause.ti<<5);
    clock_tick = 1 - clock_tick;
    cp0.count.all += clock_tick;
    if (cp0.count.all==cp0.compare.all) cp0.cause.ti = 1;
}/*}}}*/
#include <csignal>
bool mips32_CPU_state::ref_exec_once(bool mycpu_int) {/*{{{*/
    bool nemu_int = isa_query_intr();
    if (mycpu_int == false) {
        inst_state.snpc = inst_state.pc = arch_state.pc;
        isa_exec_once();
        arch_state.pc = inst_state.dnpc;
        int_delay += nemu_int;
        __ASSERT_SIM__(int_delay < 32, "MyCPU not trigger interrupt too long!");
    }
    else {
        if(nemu_int) arch_state.pc = isa_raise_intr(Int, arch_state.pc); 
        else __ASSERT_SIM__(0, "MyCPU trigger interrupt but nemu not find");
    }
    // if (arch_state.pc == 0xbfc7d7d8) std::raise(SIGINT);
    bool normal = nemu_state.state == NEMU_RUNNING;
    if (normal==false) {log_pt->error("Fail to execute " + disassemble(inst_state.pc, (uint8_t*)&(inst_state.inst), 4));}
    else trace_and_difftest(&inst_state);
    return normal;
}/*}}}*/

void CPU_state::ref_set_hilo(word_t _hi, word_t _lo) { arch_state.hi = _hi; arch_state.lo = _lo; }

void CPU_state::ref_set_gpr(word_t data, uint8_t wnum){ arch_state.gpr[wnum] = data; }

bool CPU_state::ref_checkregs(diff_state *mycpu){/*{{{*/
    bool ans = mycpu->pc==inst_state.pc;
    for (size_t i = 0; i < ARRLEN(mycpu->gpr); i++) {
        ans &= (mycpu->gpr[i]==arch_state.gpr[i]);
    }
    // if (hilo_valid){
    //     ans &= mycpu->hi==arch_state.hi;
    //     ans &= mycpu->lo==arch_state.lo;
    // }
    return ans;
}/*}}}*/

void mips32_CPU_state::ref_log_error(diff_state *mycpu){/*{{{*/
    for (uint8_t i = 0; i < 32; i++) {
        char tmp[10] = {0};
        sprintf(tmp, "%s($%d)", reg_name(i), i);
        isa_log_reg(arch_state.gpr[i], mycpu->gpr[i], tmp);
    }
    // if (hilo_valid){
    //     isa_log_reg(arch_state.hi, mycpu->hi, "$hi");
    //     isa_log_reg(arch_state.lo, mycpu->lo, "$lo");
    // }
    isa_log_reg(inst_state.pc, mycpu->pc, "last-pc");
}/*}}}*/

void CPU_state::ref_get_debug_info(debug_info_t *ref){/*{{{*/
    ref->wen = 0xf;
    ref->pc = inst_state.pc;
    ref->wnum = inst_state.wnum;
    ref->wdata = inst_state.wdata;
}/*}}}*/
