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

void init_rand();
void init_sdb();

static void welcome() {
    printf(ANSI_FMT("Welcome to %s-NEMU!\n", ANSI_FG_BLUE), ANSI_FMT(nemu_str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
    printf(ANSI_FMT("For help, type \"help\"\n",ANSI_FG_BLUE));
}

uint64_t ticks = 0;
uint32_t log_pc = 0xbfc00000;
el::Logger* nemu_log = nullptr;
extern int parse_args(int argc, char *argv[]);
extern el::Logger* logger_init(std::string name);
extern int arg_img_code;
extern bool arg_batch_mode;

void init_monitor(int argc, char *argv[]) {
  /* Perform some global initialization. */

  /* Parse arguments. */
  parse_args(argc, argv);

  /* Set random seed. */
  init_rand();

  /* Open the log file. */
  nemu_log = logger_init("NJemu");

  /* Initialize memory. */
  basic_soc soc(arg_img_code);
  PaddrTop* nemu_paddr = soc.get_paddr(basic_soc::SOC_DUT);
  nemu_paddr->set_logger(nemu_log);

  /* Perform ISA dependent initialization. */
  init_isa(nemu_paddr);

  /* Initialize differential testing. */
  // init_difftest(diff_so_file, img_size, difftest_port);

  /* Initialize the simple debugger. */
  init_sdb();

  /* Display welcome message. */
  welcome();
}
