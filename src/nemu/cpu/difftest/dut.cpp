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
#include "nemu/difftest-def.hpp"
#include "nemu/cpu/difftest.hpp"
#include "nemu/isa.hpp"
#include "testbench/difftest/struct.hpp"
#include "cemu/mips_core.hpp"
#include "utils.hpp"
#include <memory>

#ifdef CONFIG_DIFFTEST

std::unique_ptr<mips_core> cemu;

void difftest_skip_ref(){}

void difftest_skip_dut(int nr_ref, int nr_dut){}

void init_difftest(PaddrTop* paddr_top){/*{{{*/
    cemu.reset(new mips_core(paddr_top));
    cemu->reset();
}/*}}}*/

void difftest_step(int ext_int){
    cemu->step(ext_int);
    diff_state cemu_state = {
        .lo = cemu->lo,
        .hi = cemu->hi,
        .pc = cemu->pc,
    };
    for (size_t i = 0; i < 32; i++)
        cemu_state.gpr[i] = cemu->GPR[i];

    if (!nemu->isa_difftest_checkregs(&cemu_state)){
        nemu->log_pt->error("Nemu and Cemu is different!!!");
        nemu->isa_difftest_log_error(&cemu_state);
        nemu_state.state = NEMU_STOP;
    }
}

#endif
