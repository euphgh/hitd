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

#include "fmt/core.h"
#include "isa/cp0.hpp"
#include "nemu/isa.hpp"
#include <exception>

#ifdef CONFIG_ETRACE
            const char *e_msg[16] = {
                "INTERRUPT(Int:0x0)",
                "(0x1)", 
                "(0x2)", 
                "(0x3)",
                "(AdEL:0x4)",
                "(AdES:0x5)",
                "(0x6)", 
                "(0x7)",
                "(Sys:0x8)",
                "(Bp:0x9)",
                "(RI:0xa)",
                "(CpU:0xb)",
                "(Ov:0xc)",
                "(0xd)", 
                "(0xe)", 
                "(0xf)"
            };
#endif
#define EXPT_VECTOR 0xbfc00380
void mips32_CPU_state::isa_raise_intr(word_t NO, vaddr_t badva, bool refill) {/*{{{*/
    if (e_protect) { throw 0;}
    word_t trap_base = (cp0.status.bev ? 0xbfc00200u : (cp0.ebase.eptbase<<12|0x80000000));
    word_t trap_offs = 0x180;
    if (!cp0.status.exl){
        bool bd = inst_state.is_delay_slot;
        cp0.epc.all = bd ? (inst_state.pc-4) : inst_state.pc;
        cp0.cause.bd = bd;
        trap_offs = ((NO == EC_TLBS || NO == EC_TLBL) && refill)
                        ? 0x0
                        : ((NO == EC_Int && cp0.cause.iv) ? 0x200 : 0x180);
    }
    cp0.cause.exccode = NO;
    cp0.status.exl = 1;
    inst_state.dnpc = trap_base + trap_offs;
    IFDEF(CONFIG_ETRACE,
          log_pt->trace(fmt::format("[E] exception {} trigger to " HEX_WORD,
                                    e_msg[NO], inst_state.dnpc)));
    switch (NO) {
        case EC_TLBL:
        case EC_TLBS:
        case EC_Mod:
            cp0.context.badvpn2 = BITS(badva, 31, 13);
            cp0.entryhi.vpn2 = BITS(badva, 31, 13);
            /* fall through */
        case EC_AdEL:
        case EC_AdES:
            cp0.badvaddr.all = badva;
            break;
        default:break;
    }
#ifdef CONFIG_NSC_DIFF
    if (NO == EC_Sys || NO == EC_Tr || NO == EC_Bp || NO == EC_Int)
            throw false;
    else
            throw true;
#endif
#ifdef CONFIG_NSC_NEMU
    throw false;
#endif
}/*}}}*/

bool mips32_CPU_state::isa_query_intr() {/*{{{*/
            uint8_t int_signal = cp0.cause.ip_h<<2 | cp0.cause.ip_s;
            uint8_t int_mask = cp0.status.im;
            bool allow = ((int_signal & int_mask) !=0) && !cp0.status.exl && cp0.status.ie;
            return allow;
}/*}}}*/
