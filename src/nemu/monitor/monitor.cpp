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
#include "soc.hpp"
#include "utils.hpp"
#include "nemu/cpu/difftest.hpp"
#include <memory>
extern uint64_t ticks ;
extern uint32_t log_pc ;
extern el::Logger* nemu_log ;
extern el::Logger* cemu_log ;

void init_rand();
void init_sdb();

static void welcome() {
    extern bool arg_batch_mode ;
    if (!arg_batch_mode) {
        printf(ANSI_FMT("Welcome to %s-NEMU ", ANSI_FG_BLUE), ANSI_FMT(nemu_str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
        printf(ANSI_FMT("with simple debugger\n",ANSI_FG_BLUE));
        printf(ANSI_FMT("For help, type \"help\"\n",ANSI_FG_BLUE));
    }
    else {
        printf(ANSI_FMT("Welcome to %s-NEMU! ", ANSI_FG_BLUE), ANSI_FMT(nemu_str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
        printf(ANSI_FMT("on batch mode\n",ANSI_FG_BLUE));
    }
}

extern int parse_args(int argc, char *argv[]);
extern el::Logger* logger_init(std::string name);
extern bool arg_batch_mode;
std::unique_ptr<dual_soc> soc;

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  nemu_log = logger_init("NJemu");
  cemu_log = logger_init("CHemu");

  /* Initialize memory. */
  soc.reset(new dual_soc());
  PaddrTop* nemu_paddr = soc->get_dut_soc();
  PaddrTop* cemu_paddr = soc->get_ref_soc();
  nemu_paddr->set_logger(nemu_log);
  cemu_paddr->set_logger(cemu_log);
  soc->set_switch(0);


  /* Perform ISA dependent initialization. */
  init_isa(nemu_paddr);

  /* Initialize differential testing. */
  IFDEF(CONFIG_DIFFTEST, init_difftest(cemu_paddr));

  /* Initialize the simple debugger. */
  init_sdb();

  /* Display welcome message. */
  welcome();
}
