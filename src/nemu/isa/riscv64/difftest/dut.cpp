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

#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"
#include "utils.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
    bool ans = ref_r->pc==cpu.pc;
    for (size_t i = 0; i < ARRLEN(ref_r->gpr); i++) {
        ans &= (ref_r->gpr[i]==cpu.gpr[i]);
    }
    return ans;
}
void isa_difftest_log_error(CPU_state* ref_r){
    Log("Difftest FAIL for " ANSI_FMT("reference",ANSI_FG_GREEN) " is different from " ANSI_FMT("nemu",ANSI_FG_RED));

    for (size_t i = 0; i < ARRLEN(ref_r->gpr); i++) {
        bool error = ref_r->gpr[i]!=gpr(i);
        char *my_fmt = error ? ANSI_FMT(FMT_REG, ANSI_FG_RED) : FMT_REG;
        printf(my_fmt,reg_name(i),gpr(i),gpr(i));
        if (error) printf(ANSI_FMT(FMT_REG, ANSI_FG_GREEN),
            reg_name(i),ref_r->gpr[i],ref_r->gpr[i]);
    }
    bool error = ref_r->pc!=cpu.pc;
    char *my_fmt = error ? ANSI_FMT(FMT_REG, ANSI_FG_RED) : FMT_REG;
    printf(my_fmt,"pc",cpu.pc,cpu.pc);
    if (error) printf(ANSI_FMT(FMT_REG, ANSI_FG_GREEN),
            "pc",ref_r->pc,ref_r->pc);
}
void isa_difftest_attach() {
}
