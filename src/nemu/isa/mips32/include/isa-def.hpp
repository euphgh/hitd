/***************************************************************************************
 * Copyright (c) 2014-2022 Zihao Yu, Nanjing University
 *
 * NEMU is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan
 *PSL v2. You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY
 *KIND, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO
 *NON-INFRINGEMENT, MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 *
 * See the Mulan PSL v2 for more details.
 ***************************************************************************************/

#ifndef __ISA_MIPS32_H__
#define __ISA_MIPS32_H__

#include "common.hpp"
#include "disassemble.hpp"
#include "easylogging++.h"
#include "isa/cp0.hpp"
#include "isa/mmu.hpp"
#include "macro.hpp"
#include "nemu/cpu/decode.hpp"
#include "nemu/memory/vaddr.hpp"
#include "nemu/mytrace.hpp"
#include "paddr/paddr_interface.hpp"
#include <fmt/core.h>
#include <memory>
#include <string>

class mips32_CPU_state {
public:
  // Arch registers
  diff_state arch_state; // pc in it is execute completed pc
  CP0_t cp0;

  bool hilo_valid;
  word_t delay_slot_npc;
  bool next_is_delay_slot;
  el::Logger *log_pt;
  bool raise_ex;
  std::shared_ptr<PaddrTop> paddr_top;
  Decode inst_state;
  bool analysis;
  bool e_protect;

  mips32_CPU_state(PaddrTop *ptop_input);
  void exec_once();
  void reset(word_t reset_pc = CONFIG_RESET_PC);

  // nemu difftest ref api{{{
  void ref_tick_and_int(uint8_t ext_int);
  bool ref_exec_once(bool except); // use in difftest ref
  void ref_set_hilo(word_t hi, word_t lo);
  void ref_set_gpr(word_t data, uint8_t wnum);
  void ref_get_state(diff_state *dut);
  bool ref_checkregs(diff_state *mycpu);
  void ref_log_error(diff_state *mycpu);
  void ref_get_debug_info(debug_info_t *ref);
  // }}}

  // nemu difftest utils api{{{
  bool isa_difftest_checkregs(diff_state *ref_r);
  void isa_difftest_log_error(diff_state *ref_r);
  int isa_exec_once(bool has_int);
  diff_state *isa_diff_state() { return &arch_state; }
  /*}}}*/

  // regs{{{
  void isa_reg_display();
  word_t isa_reg_str2val(const char *s, bool *success);
  // }}}
  word_t isa_vaddr_read(vaddr_t addr, int len) { return vaddr_read(addr, len); }
  const std::string &isa_disasm_inst() {
    return llvm_disassemble(inst_state.pc, inst_state.inst);
  }

private:
  // Instruct execute method{{{
#define R(i) arch_state.gpr[i]
#define Rw(i, value)                                                           \
  do {                                                                         \
    inst_state.wnum = i;                                                       \
    arch_state.gpr[i] = value;                                                 \
  } while (0)
#define Mr vaddr_read
#define Mw vaddr_write
#define __NOT_DELAY__                                                          \
  __ASSERT_NEMU__(!is_delay_slot, "this instr can not be delay slot")
  int decode_exec();
  void decode_operand(int *rd, word_t *src1, word_t *src2, word_t *imm,
                      int type);
  void check_link(int rs);
  word_t inst_lwl(word_t addr, word_t src2) { /*{{{*/
    word_t memword = Mr(addr & ~(0x3), 4);
    uint8_t byte = addr & 0x3;
    uint8_t low_len = 24 - 8 * byte;
    return (BITS(memword, 7 + 8 * byte, 0) << low_len) |
           BITS(src2, low_len - 1, 0);
  }                                           /*}}}*/
  word_t inst_lwr(word_t addr, word_t src2) { /*{{{*/
    word_t memword = Mr(addr & ~(0x3), 4);
    uint8_t byte = addr & 0x3;
    uint8_t low_len = 32 - 8 * byte;
    return (BITS(src2, 31, low_len) << low_len) | BITS(memword, 31, 8 * byte);
  }                                         /*}}}*/
  void inst_swl(word_t addr, word_t src2) { /*{{{*/
    const int swl_len[8] = {
        0x14,
        0x34,
        0x74,
        0xf4,
    };
    uint8_t byte = addr & 0x3;
    word_t data = BITS(src2, 31, 24 - 8 * byte);
    Mw(addr & ~(0x3), swl_len[byte], data);
  }                                         /*}}}*/
  void inst_swr(word_t addr, word_t src2) { /*{{{*/
    const int swr_len[8] = {
        0xf4,
        0xe4,
        0xc4,
        0x84,
    };
    uint8_t byte = addr & 0x3;
    word_t data = BITS(src2, 31 - 8 * byte, 0) << (8 * byte);
    Mw(addr & ~(0x3), swr_len[byte], data);
  }                                    /*}}}*/
  inline void inst_jump(word_t dest) { /*{{{*/
    next_is_delay_slot = true;
    delay_slot_npc = dest;
  }                                                            /*}}}*/
  inline void inst_branch(bool cond, word_t imm, word_t npc) { /*{{{*/
    inst_jump(cond ? (imm + npc) : (4 + npc));
  }                         /*}}}*/
  inline void inst_eret() { /*{{{*/
    inst_state.dnpc = cp0.epc.all;
    cp0.status.exl = 0;
    arch_state.llbit = 0;
    IFDEF(CONFIG_ETRACE,
          log_pt->trace(fmt::format("[E] exception return to " HEX_WORD,
                                    inst_state.dnpc)));
  }                                           /*}}}*/
  inline void inst_mfc0(word_t imm, int rd) { /*{{{*/
    word_t tmp;
    uint8_t pos = imm | imm >> 8;
    if (cp0.read(pos, tmp) == false) {
      nemu_state.state = NEMU_ABORT;
      log_pt->error(fmt::format("read not unimplemented CP0 {}({},{})",
                                cp0.find_name(pos), (pos & 0xff) >> 3,
                                pos & 0x7));
    }
    Rw(rd, tmp);
    if (pos == (9 << 3) || pos == (1 << 3)) {
      inst_state.skip = true;
    }
  }                                           /*}}}*/
  inline void inst_mtc0(word_t imm, int rd) { /*{{{*/
    uint8_t pos = imm | imm >> 8;
    if (cp0.write(pos, R(rd)) == false) {
      nemu_state.state = NEMU_ABORT;
      log_pt->error(fmt::format("write not unimplemented CP0 {}({},{})",
                                cp0.find_name(pos), (pos & 0xff) >> 3,
                                pos & 0x7));
    }
  }                                                            /*}}}*/
  inline void inst_add(uint8_t rd, word_t src1, word_t src2) { /*{{{*/
    word_t ans = src1 + src2;
    bool sign_src1 = src1 >> 31;
    bool sign_src2 = src2 >> 31;
    bool sign_ans = ans >> 31;
    if ((!sign_src1 && !sign_src2 && sign_ans) ||
        (sign_src1 && sign_src2 && !sign_ans))
      isa_raise_intr(EC_Ov);
    Rw(rd, ans);
  } /*}}}*/
  inline word_t align_check(word_t addr, word_t mask,
                            ExcCode_t eccode) { /*{{{*/
    if (unlikely(mask & addr))
      isa_raise_intr(eccode, addr);
    return addr;
  }                                          /*}}}*/
  void inst_madd(word_t src1, word_t src2) { /*{{{*/
    int64_t ans = ((uint64_t)arch_state.hi) << 32 | arch_state.lo;
    int64_t s1 = (signed)src1;
    int64_t s2 = (signed)src2;
    ans += s1 * s2;
    arch_state.lo = BITS(ans, 31, 0);
    arch_state.hi = BITS(ans, 63, 32);
  }                                          /*}}}*/
  void inst_msub(word_t src1, word_t src2) { /*{{{*/
    int64_t ans = ((uint64_t)arch_state.hi) << 32 | arch_state.lo;
    int64_t s1 = (signed)src1;
    int64_t s2 = (signed)src2;
    ans -= s1 * s2;
    arch_state.lo = BITS(ans, 31, 0);
    arch_state.hi = BITS(ans, 63, 32);
  }                                           /*}}}*/
  void inst_maddu(word_t src1, word_t src2) { /*{{{*/
    uint64_t ans = ((uint64_t)arch_state.hi) << 32 | arch_state.lo;
    ans += (uint64_t)src1 * (uint64_t)src2;
    arch_state.lo = BITS(ans, 31, 0);
    arch_state.hi = BITS(ans, 63, 32);
  } /*}}}*/
  void tlbp();
  void tlbr();
  void tlbwi();
  void tlbwr();
  void inst_sc(int rd, word_t addr) { /*{{{*/
    align_check(addr, 0x3, EC_AdES);
    bool llbit = arch_state.llbit;
    vaddr_sc(addr, llbit, R(rd));
    Rw(rd, llbit);
  }                                    /*}}}*/
  void inst_clz(word_t src1, int rd) { /*{{{*/
    uint8_t res = 32;
    for (int i = 31; i >= 0; i--) {
      if (BITS(src1, i, i) == 1) {
        res = 31 - i;
        break;
      }
    }
    Rw(rd, res);
  } /*}}}*/
  // }}}

  // Exception method{{{
  uint32_t int_delay;
  void isa_raise_intr(word_t NO, vaddr_t badva = 0, bool refill = false);
  bool isa_query_intr();
  // }}}
public:
  tlb_entry tlb[CONFIG_TLB_NR];
  enum mode_t {
    USER,
    SPVI,
    KRNL,
  };
  enum mmu_t { MMU_DIRECT, MMU_TRANSLATE, MMU_FAIL };
  enum mem_t { MEM_TYPE_IFETCH, MEM_TYPE_READ, MEM_TYPE_WRITE };
  // enum { MEM_RET_OK, MEM_RET_FAIL, MEM_RET_CROSS_PAGE };
  struct tlb_info {
    bool hit : 8;
    bool dirty : 8;
  };
  inline mode_t machine_mode() { return KRNL; }
  mmu_t mmu_check(vaddr_t vaddr);
  tlb_info mmu_translate(vaddr_t vaddr, paddr_t &paddr, bool &refill);
  tlb_entry *tlb_match(vaddr_t vaddr);
  word_t vaddr_ifetch(vaddr_t addr, int len);
  word_t vaddr_read(vaddr_t addr, int len);
  word_t writeTranslate(vaddr_t vaddr);
  void vaddr_write(vaddr_t addr, int len, word_t data);
  void vaddr_sc(vaddr_t addr, bool llbits, word_t data);
  void printAllTLB() {
    for (int i = 0; i < CONFIG_TLB_NR; i++) {
      tlb[i].print();
    }
  }

private:
  ftracer mips_ftracer;

public:
  // void isa_ftrace();
  // void isa_call_stack();
};

#endif
