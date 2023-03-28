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

#include "debug.hpp"
#include "utils.hpp"
#include "nemu/cpu/ifetch.hpp"
#include "nemu/isa.hpp"
#include "nemu/cpu/difftest.hpp"

void set_nemu_state(int state, vaddr_t pc, int halt_ret) {
    difftest_skip_ref();
    nemu_state.state = state;
    nemu_state.halt_pc = pc;
    nemu_state.halt_ret = halt_ret;
}

__attribute__((noinline))
void invalid_inst(word_t inst_value) {
    uint8_t *p = (uint8_t *)&inst_value;
    printf("invalid opcode:\n"
            "\t%02x %02x %02x %02x ...\n"
            "\t%08x ...\n", p[0], p[1], p[2], p[3], inst_value);

    printf("There are two cases which will trigger this unexpected exception:\n"
            "1. The instruction is not implemented.\n"
            "2. Something is implemented incorrectly.\n");
    printf("Find this in the disassembling result to distinguish which case it is.\n\n");
    printf(ANSI_FMT("If it is the first case, see\n%s\nfor more details.\n\n"
                "If it is the second case, remember:\n"
                "* The machine is always right!\n"
                "* Every line of untested code is always wrong!\n\n", ANSI_FG_RED), isa_logo);
    nemu_state.state = NEMU_ABORT;
}
