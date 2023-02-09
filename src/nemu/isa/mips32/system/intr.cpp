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

#include "cp0.h"
#include "debug.h"
#include "utils.h"
#include <isa.h>

#define EXPT_VECTOR MUXDEF(CONFIG_NSC_MODE,0xbfc00380,0x80000180)
#ifdef CONFIG_ETRACE
char *e_msg[16] = {
    [Int] = "INTERRUPT(Int:0x0)",
    [AdEL] = "READ address(AdEL:0x4)",
    [AdES] = "WRITE ADDRESS(AdES:0x5)",
    [Sys] = "SYSTEM CALL(Sys:0x8)",
    [Bp] = "BREAK POINT(Bp:0x9)",
    [RI] = "RESERVED INSTRUCTION(RI:0xa)",
    [Ov] = "INTEGET OVERFLOW(Ov:0xc)",
};
#endif
#include <signal.h>
word_t isa_raise_intr(word_t NO, vaddr_t epc) {
    // if (epc==0xbfc4c9c4) raise(SIGINT);
    IFDEF(CONFIG_ETRACE,log_write("ETRACE:\texception [%s] trigger at " FMT_PADDR "\n",e_msg[NO], epc));
    Assert(cpu.cp0.status.exl==0, "exception can not raise at " FMT_WORD_X "for Status.EXL is set",epc);
    bool is_delay_slot = cpu.is_delay_slot;
    cpu.cp0.epc.all = is_delay_slot ? epc-4 : epc;
    cpu.cp0.cause.bd = is_delay_slot;
    cpu.cp0.status.exl = 1;
    cpu.cp0.cause.exccode = NO;
    return EXPT_VECTOR;
}

bool isa_query_intr() {
    uint8_t int_signal = cpu.cp0.cause.ip_h<<2 | cpu.cp0.cause.ip_s;
    uint8_t int_mask = cpu.cp0.status.im;
    bool allow = ((int_signal & int_mask) !=0) && !cpu.cp0.status.exl && cpu.cp0.status.ie;
    return allow;
}
