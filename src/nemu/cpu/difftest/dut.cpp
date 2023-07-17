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
#include "easylogging++.h"
#include "nemu/difftest-def.hpp"
#include "nemu/cpu/difftest.hpp"
#include "nemu/isa.hpp"
#include "testbench/difftest/struct.hpp"
#include "cemu/mips_core.hpp"
#include "utils.hpp"
#include <memory>
#include "utils.hpp"
#include "fmt/core.h"

#ifdef CONFIG_DIFFTEST

mips_core<CONFIG_TLB_NR> *cemu;

void difftest_skip_ref(){}

void difftest_skip_dut(int nr_ref, int nr_dut){}

void init_difftest(PaddrTop* paddr_top){/*{{{*/
    LOG(INFO) << "Enable difftest with cemu";
    cemu = new mips_core<CONFIG_TLB_NR>(paddr_top);
    cemu->reset();
    cemu->jump(CONFIG_RESET_PC);
}/*}}}*/

static bool check_tlb_same(){
    bool same = true;
    for (size_t i = 0; i < CONFIG_TLB_NR; i++) {
      bool error = false;
      const tlb_entry &nemu_entry = nemu->tlb[i];
      const mips_tlb &cemu_entry = cemu->mmu.tlb[i];
      error |= nemu_entry.vpn2 != cemu_entry.VPN2;
      error |= nemu_entry.g != cemu_entry.G;
      error |= nemu_entry.asid != cemu_entry.ASID;
      error |= nemu_entry.pfn0 != cemu_entry.PFN0;
      error |= nemu_entry.v0 != cemu_entry.V0;
      error |= nemu_entry.d0 != cemu_entry.D0;
      error |= nemu_entry.c0 != cemu_entry.C0;
      error |= nemu_entry.pfn1 != cemu_entry.PFN1;
      error |= nemu_entry.v1 != cemu_entry.V1;
      error |= nemu_entry.d1 != cemu_entry.D1;
      error |= nemu_entry.c1 != cemu_entry.C1;
      if (error) {
        fmt::print(ANSI_FMT("TLB entry {} is different\n", ANSI_FG_RED), i);
        nemu_entry.print();
        cemu_entry.print();
        nemu_state.state = NEMU_ABORT;
      }
      same &= (error == false);
    }
    return same;
}

void difftest_step(int ext_int){
    cemu->step(ext_int);
    diff_state cemu_state = {
        .lo = cemu->lo,
        .hi = cemu->hi,
        .pc = cemu->pc,
    };
    for (size_t i = 0; i < 32; i++)
        cemu_state.gpr[i] = cemu->GPR[i];
    check_tlb_same();
    if (nemu->isa_difftest_checkregs(&cemu_state)==false){
        nemu->log_pt->error("Nemu and Cemu is different!!!");
        nemu->isa_difftest_log_error(&cemu_state);
        nemu_state.state = NEMU_ABORT;
    }
}

#endif
