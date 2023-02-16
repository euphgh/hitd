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
#include <memory>

// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
#ifndef CONFIG_NSC_DIFF
static const uint32_t img [] = {
  0x3c048000,  // lui a0, 0x8000
  0xac800000,  // sw  zero, 0(a0)
  0x8c820000,  // lw  v0,0(a0)
  0x7000003f,  // sdbbp (used as nemu_trap)
};
#endif /* !CONFIG_NSC_DIFF */
std::unique_ptr<CPU_state> nemu;
void CPU_state::reset() {/*{{{*/
    arch_state.pc = 0xbfc00000;
    arch_state.gpr[0] = 0;
    cp0_init(&cp0);
}/*}}}*/

CPU_state::mips32_CPU_state(std::shared_ptr<PaddrTop> ptop_input): 
    log_pt(ptop_input->log_pt), 
    paddr_top(ptop_input) {
        extern void init_disasm(const char *triple);
        IFDEF(CONFIG_ITRACE, init_disasm("mipsel-pc-linux-gnu"));
    };

void init_isa(std::shared_ptr<PaddrTop> ptop_input) {
    nemu.reset(new CPU_state(ptop_input));
    /* Load built-in image. */
    IFNDEF(CONFIG_NSC_DIFF,memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img)));
    /* Initialize this virtual computer system. */
}
