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

#ifndef __ISA_H__
#define __ISA_H__

#define CONFIG_ISA_mips32

#if defined(CONFIG_ISA_mips32)
#define ISA_QEMU_BIN "qemu-system-mipsel"
#define ISA_QEMU_ARGS "-machine", "mipssim", "-kernel", \
  HITD_HOME "/resource/mips-elf/mips.dummy",
#elif defined(CONFIG_ISA_riscv32)
#define ISA_QEMU_BIN "qemu-system-riscv32"
#define ISA_QEMU_ARGS "-bios", "none",
#elif defined(CONFIG_ISA_riscv64)
#define ISA_QEMU_BIN "qemu-system-riscv64"
#define ISA_QEMU_ARGS 
#elif defined(CONFIG_ISA_x86)
#define ISA_QEMU_BIN "qemu-system-i386"
#define ISA_QEMU_ARGS
#else
#error Unsupport ISA
#endif

#include <stdint.h>

union isa_gdb_regs {
    struct {
        uint32_t gpr[32];
        uint32_t status;
        uint32_t lo, hi; 
        uint32_t badvaddr, cause; 
        uint32_t pc;
    };
    uint32_t array[38];
};
typedef struct {
    struct{
        uint32_t gpr[32];
        uint32_t lo, hi, pc;
    };
    uint32_t array[35];
} diff_state;

#endif
