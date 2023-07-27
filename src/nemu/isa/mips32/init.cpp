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

#include "disassemble.hpp"
#include "nemu/isa.hpp"
#include "utils.hpp"
#include "macro.hpp"
#include "path.hh"
#include <memory>

static std::map<int, const char*> name_to_elf = {
    std::make_pair(TEST_NAME_FUNC, __FUNC_DIR__ "main.elf"),
    std::make_pair(TEST_NAME_PERF, __PERF_DIR__ "main.elf"),
    std::make_pair(TEST_NAME_SYST, __SYST_DIR__ "kernel.elf"),
    std::make_pair(TEST_NAME_UBOOT, __UBOOT_DIR__ "u-boot"),
    std::make_pair(TEST_NAME_LINUX, __LINUX_DIR__ "vmlinux"),
    // std::make_pair(TEST_NAME_UCORE, __UCORE_DIR__ ),
};

mips32_CPU_state* nemu;
void CPU_state::reset(word_t reset_pc) {/*{{{*/
    arch_state.pc = reset_pc;
    arch_state.llbit = 0;
    raise_ex = false;
    e_protect = false;
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
CPU_state::mips32_CPU_state(PaddrTop *ptop_input)
    : log_pt(ptop_input->log_pt), paddr_top(ptop_input), inst_number(0),
      branchNum(0), jumpNum(0),
      mips_ftracer(__TEST_ELF__, ptop_input->log_pt, CONFIG_RESET_PC) {
    Assert(IS_2_POW(CONFIG_TLB_NR), "TLB entry number is not power of 2");

#ifdef CONFIG_GOLDEN_TRACE
    auto name = "golden_trace";
    el::Configurations log_conf;
    log_conf.setToDefault();
    log_conf.setGlobally(el::ConfigurationType::Enabled, "true");
    log_conf.setGlobally(el::ConfigurationType::Format, "%msg");
    log_conf.setGlobally(el::ConfigurationType::ToFile,
                         MUXDEF(CONFIG_TRACE, "true", "false"));
    log_conf.setGlobally(el::ConfigurationType::MaxLogFileSize, "0");
    log_conf.setGlobally(el::ConfigurationType::Filename,
                         HITD_HOME "/golden_trace.txt");
    log_conf.set(el::Level::Trace, el::ConfigurationType::ToStandardOutput,
                 "false");
    gt_log_pt = el::Loggers::getLogger(name);
    gt_log_pt->configure(log_conf);
    LOG(INFO) << "Init logger with name:" << name;
#endif
};

void init_isa(PaddrTop* ptop_input) {
    nemu = new CPU_state(ptop_input);
    nemu->reset(CONFIG_RESET_PC);
    llvm_disasm_init();
}
