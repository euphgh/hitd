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

#include "cp0.hpp"
#include "debug.hpp"
#include "utils.hpp"
#include "nemu/isa.hpp"
#include "fmt/core.h"
#include <signal.h>

#ifdef CONFIG_ETRACE
            const char *e_msg[16] = {
                "INTERRUPT(Int:0x0)",
                "(0x1)", "(0x2)", "(0x3)",
                "(AdEL:0x4)",
                "(AdES:0x5)",
                "(0x6)", "(0x7)",
                "(Sys:0x8)",
                "(Bp:0x9)",
                "(RI:0xa)",
                "(CpU:0xb)",
                "(Ov:0xc)",
                "(0xd)", "(0xe)", "(0xf)"
            };
#endif
#define EXPT_VECTOR 0xbfc00380
word_t mips32_CPU_state::isa_raise_intr(word_t NO, vaddr_t epc) {/*{{{*/
            IFDEF(CONFIG_ETRACE,log_pt->trace("[E] exception %v trigger",e_msg[NO]));
            __ASSERT_NEMU__(cp0.status.exl==0, "exception can not raise at " FMT_WORD_X "for Status.EXL is set",epc);
            bool bd = is_delay_slot;
            cp0.epc.all = bd ? epc-4 : epc;
            cp0.cause.bd = bd;
            cp0.status.exl = 1;
            cp0.cause.exccode = NO;
            return EXPT_VECTOR;
}/*}}}*/

bool mips32_CPU_state::isa_query_intr() {/*{{{*/
            uint8_t int_signal = cp0.cause.ip_h<<2 | cp0.cause.ip_s;
            uint8_t int_mask = cp0.status.im;
            bool allow = ((int_signal & int_mask) !=0) && !cp0.status.exl && cp0.status.ie;
            return allow;
}/*}}}*/
