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

#ifndef __DEBUG_H__
#define __DEBUG_H__

#include <utils.hpp>

#define __ASSERT_NEMU__(cond, format, ...) \
    do { \
        if (!(cond)) { \
            printf(ANSI_FMT(format, ANSI_FG_RED) "\n", ##  __VA_ARGS__); \
            nemu_state.state = NEMU_ABORT; \
        } \
  } while (0)

#define Assert(cond, format, ...) \
    do { \
        if (!(cond)) { \
            fflush(stdout);\
            fprintf(stderr, ANSI_FMT(format, ANSI_FG_RED) "\n", ##  __VA_ARGS__);\
            assert(cond);\
        } \
    } while (0)

#define TODO() Assert(0,"please implement me")

#endif
