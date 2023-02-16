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
#include <nemu/cpu/cpu.hpp>
#include "paddr/nemu_paddr.hpp"
#include "nemu/cpu/decode.hpp"

void CPU_state::ref_tick_and_int(uint8_t ext_int){/*{{{*/
    // only ext_int[5:0] is valid
    cp0.cause.ip_h = ext_int | (cp0.cause.ti<<5);
    clock_tick = 1 - clock_tick;
    cp0.count.all += clock_tick;
    if (cp0.count.all==cp0.compare.all) cp0.cause.ti = 1;
}/*}}}*/

extern void trace_and_difftest(Decode *_this);
bool mips32_CPU_state::ref_exec_once(bool except) {/*{{{*/
    if (except) arch_state.pc = isa_raise_intr(Int, arch_state.pc);
    else {
        inst_state.snpc = inst_state.pc = arch_state.pc;
        isa_exec_once();
        arch_state.pc = inst_state.dnpc;
    }
    //TODO:interrupt too long not trigger will set nemu_state=ABORT;
    bool res = nemu_state.state == NEMU_RUNNING;
    if (!res) {  log_pt->error("Fail to execution {}", "my inst"); }
    else trace_and_difftest(&inst_state);
    return res;
}/*}}}*/

void CPU_state::ref_set_hilo(word_t _hi, word_t _lo) { arch_state.hi = _hi; arch_state.lo = _lo; }

void CPU_state::ref_set_gpr(word_t data, uint8_t wnum){ arch_state.gpr[wnum] = data; }

void CPU_state::ref_get_debug_info(debug_info_t *ref){/*{{{*/
    ref->wen = 0xf;
    ref->pc = inst_state.pc;
    ref->wnum = inst_state.wnum;
    ref->wdata = inst_state.wdata;
}/*}}}*/
