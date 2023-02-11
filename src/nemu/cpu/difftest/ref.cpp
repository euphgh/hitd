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

void* nemu_paddr_top;
Decode last_inst;
void ref_init(void* paddr_top) {
    /* Set the initial program counter. */
    cpu.pc = 0xbfc00000;
    /* The zero register is always 0. */
    cpu.gpr[0] = 0;
    /* assign cp0 initial value*/
    cp0_init(&cpu.cp0);
    /* mem and device is initialized in c++ */
    nemu_paddr_top = paddr_top;
    nemu_state.state = NEMU_RUNNING;

    void init_disasm(const char *triple);
    IFDEF(CONFIG_ITRACE, init_disasm(
                MUXDEF(CONFIG_ISA_x86,     "i686",
                    MUXDEF(CONFIG_ISA_mips32,  "mipsel",
                        MUXDEF(CONFIG_ISA_riscv33, "riscv32",
                            MUXDEF(CONFIG_ISA_riscv64, "riscv64", "bad")))) "-pc-linux-gnu"
                ));
}

void ref_tick_int(uint8_t ext_int){
    // only ext_int[5:0] is valid
    cpu.cp0.cause.ip_h = ext_int | (cpu.cp0.cause.ti<<5);
    clock_tick = 1 - clock_tick;
    cpu.cp0.count.all += clock_tick;
    if (cpu.cp0.count.all==cpu.cp0.compare.all) cpu.cp0.cause.ti = 1;
}

bool ref_exec_once(bool except) {
    return nsc_exec(except,&last_inst);
}

void ref_hilo_set(word_t hi, word_t lo){
    cpu.hi = hi;
    cpu.lo = lo;
}

void ref_gpr_set(word_t data, uint8_t wnum){
    cpu.gpr[wnum] = data;
}

void ref_get_state(diff_state *dut){
    dut->pc = last_inst.pc;
    memcpy(&dut->gpr, &cpu.gpr, sizeof(cpu.gpr));
    dut->hi= cpu.hi;
    dut->hi= cpu.hi;
}

void ref_get_debug_info(debug_info_t *ref){
    ref->wen = 0xf;
    ref->pc = last_inst.pc;
    ref->wnum = last_inst.wnum;
    ref->wdata = last_inst.wdata;
}
