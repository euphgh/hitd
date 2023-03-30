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

static std::map<int, const char*> name_to_elf = {
    std::make_pair(TEST_NAME_FUNC, __FUNC_DIR__ "main.elf"),
    std::make_pair(TEST_NAME_PERF, __PERF_DIR__ "main.elf"),
    std::make_pair(TEST_NAME_SYST, __SYST_DIR__ "kernel.elf"),
    std::make_pair(TEST_NAME_UBOOT, __UBOOT_DIR__ "u-boot"),
    std::make_pair(TEST_NAME_LINUX, __LINUX_DIR__ "vmlinux"),
    // std::make_pair(TEST_NAME_UCORE, __UCORE_DIR__ ),
};

std::unique_ptr<CPU_state> nemu;
void CPU_state::reset(word_t reset_pc) {/*{{{*/
    arch_state.pc = reset_pc;
    arch_state.llbit = 0;
    raise_ex = false;
    cp0.clock_tick = 0;
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
    paddr_top(ptop_input),
    mips_ftracer(__TEST_ELF__, ptop_input->log_pt) 
{
    Assert(IS_2_POW(CONFIG_TLB_NR), "TLB entry number is not power of 2");
    extern void init_disasm(const char *triple);
    init_disasm("mipsel-pc-linux-gnu");
};

void init_isa(PaddrTop* ptop_input) {
    nemu.reset(new CPU_state(ptop_input));
    nemu->reset(CONFIG_RESET_PC);
}
