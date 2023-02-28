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
#include "common.hpp"
#include "debug.hpp"
#include "easylogging++.h"
INITIALIZE_EASYLOGGINGPP

void init_monitor(int, char *[]);
int is_exit_status_bad();
extern void sdb_mainloop();

int main(int argc, char *argv[]) {
    /* Initialize the monitor. */
    init_monitor(argc, argv);

    /* Start engine. */
    sdb_mainloop();

    return is_exit_status_bad();
}
