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

#ifndef __ISA_MIPS32_H__
#define __ISA_MIPS32_H__

#include <common.hpp>
#include "cp0.h"

#ifdef CONFIG_NSC_MODE
#endif // DEBUG

typedef enum {
    ds_no,
    ds_prev,
    ds_true

} delay_slot_t;


typedef struct {
    word_t gpr[32];
    word_t status_fake;
    word_t lo;
    word_t hi;
    word_t badvaddr_fake, cause_fake;
    vaddr_t pc;

    CP0_t cp0;
    bool hilo_valid;
    word_t delay_slot_npc;
    bool is_delay_slot;

} mips32_CPU_state;

// decode
typedef struct {
  union {
    uint32_t val;
  } inst;
} mips32_ISADecodeInfo;

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
