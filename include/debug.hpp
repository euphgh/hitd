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

#include <utils.h>

#define Log(format, ...) \
    _Log(ANSI_FMT("[" \
                IFDEF(__NEMU_PROJ__,"$NEMU/") \
                "%s:%d %s] " format, \
                MUXDEF(__NEMU_PROJ__, ANSI_FG_BLUE, ANSI_FG_CYAN) \
                ) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)

#define Warn(format, ...) \
    _Log(ANSI_FMT("[" \
                IFDEF(__NEMU_PROJ__,"$NEMU/") \
                "%s:%d %s] " format, \
                MUXDEF(__NEMU_PROJ__, ANSI_FG_YELLOW, ANSI_FG_B_YELLOW) \
                ) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)

#define Error(format, ...) \
    _Log(ANSI_FMT("["\
                IFDEF(__NEMU_PROJ__,"$NEMU/") \
                "%s:%d %s] " format, \
                MUXDEF(__NEMU_PROJ__, ANSI_FG_RED, ANSI_FG_B_RED) \
                ) "\n", \
        __FILE__, __LINE__, __func__, ## __VA_ARGS__)

#ifdef __NEMU_PROJ__
#ifdef __cplusplus
extern "C" void assert_fail_msg();
#else
extern void assert_fail_msg();
#endif

#define Assert(cond, format, ...) \
  do { \
    if (!(cond)) { \
      MUXDEF(CONFIG_TARGET_AM, printf(ANSI_FMT(format, ANSI_FG_RED) "\n", ## __VA_ARGS__), \
        (fflush(stdout), fprintf(stderr, ANSI_FMT(format, ANSI_FG_RED) "\n", ##  __VA_ARGS__))); \
      IFNDEF(CONFIG_TARGET_AM, extern FILE* log_fp; fflush(log_fp)); \
      assert_fail_msg(); \
      assert(cond); \
    } \
  } while (0)
#endif // __NEMU_PROJ__

#define panic(format, ...) Assert(0, format, ## __VA_ARGS__)

#define TODO() panic("please implement me")

#endif
