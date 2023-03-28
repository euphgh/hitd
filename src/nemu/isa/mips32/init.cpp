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

#include "nemu/isa.hpp"
#include "utils.hpp"
#include "macro.hpp"
#include <memory>

std::unique_ptr<CPU_state> nemu;
void CPU_state::reset(word_t reset_pc) {/*{{{*/
    arch_state.pc = reset_pc;
    arch_state.llbit = 0;
    raise_ex = false;
    nemu_state.state = NEMU_RUNNING;
    next_is_delay_slot = false;
    nemu->int_delay = 0;
    nemu->hilo_valid = false;
    for (int i = 0; i < 32; i++) {
        arch_state.gpr[i] = 0;
    }
    analysis = false;
    cp0.reset();
}/*}}}*/
CPU_state::mips32_CPU_state(PaddrTop* ptop_input): 
    log_pt(ptop_input->log_pt), 
    paddr_top(ptop_input) {
        Assert(IS_2_POW(CONFIG_TLB_NR), "TLB entry number is not power of 2");
        extern void init_disasm(const char *triple);
        IFDEF(CONFIG_ITRACE, init_disasm("mipsel-pc-linux-gnu"));
    };

void init_isa(PaddrTop* ptop_input) {
    nemu.reset(new CPU_state(ptop_input));
    nemu->reset(CONFIG_RESET_PC);
}
