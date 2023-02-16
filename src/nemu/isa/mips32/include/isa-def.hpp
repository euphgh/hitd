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

#include "nemu/cpu/decode.hpp"
#include "common.hpp"
#include "spdlog/logger.h"
#include "cp0.hpp"
#include "paddr/paddr_interface.hpp"
#include "nemu/memory/vaddr.hpp"
#include <memory>

class mips32_CPU_state{
    public:
        diff_state arch_state;
        // Arch registers
        CP0_t cp0;

        bool hilo_valid;
        word_t delay_slot_npc;
        bool is_delay_slot;
        std::shared_ptr<spdlog::logger> log_pt;
        std::shared_ptr<PaddrTop> paddr_top;
        Decode inst_state;

        mips32_CPU_state(std::shared_ptr<PaddrTop> ptop_input);
        void execute(uint64_t n);
        void reset();

        // nscscc difftest api{{{
        void ref_tick_and_int(uint8_t ext_int);
        bool ref_exec_once(bool except); // use in difftest ref
        void ref_set_hilo(word_t hi, word_t lo);
        void ref_set_gpr(word_t data, uint8_t wnum);
        void ref_get_state(diff_state *dut);
        void ref_get_debug_info(debug_info_t *ref);
        // }}}

        // nemu difftest{{{
        bool isa_difftest_checkregs(diff_state *ref_r);
        void isa_difftest_log_error(diff_state *ref_r);/*}}}*/

        // regs{{{
        void isa_reg_display();
        word_t isa_reg_str2val(const char *s, bool *success);
        diff_state* isa_diff_state(){ return &arch_state;}
        // }}}

    public:
        // Instruct execute method{{{
#define R(i) arch_state.gpr[i]
#define Rw(i,value) do {inst_state.wnum = i; arch_state.gpr[i] = value;} while(0)
#define Mr vaddr_read
#define Mw vaddr_write
#define __NOT_DELAY__ __ASSERT_NEMU__(!is_delay_slot,"this instr can not be delay slot")
        int isa_exec_once();
        int decode_exec();
        void decode_operand(int *rd, word_t *src1, word_t *src2, word_t *imm, int type);
        word_t inst_lwl(word_t addr, word_t src2){/*{{{*/
            word_t memword = Mr(addr & ~(0x3), 4);
            uint8_t byte = addr & 0x3;
            uint8_t low_len = 24-8*byte;
            return (BITS(memword, 7+8*byte, 0) << low_len) | BITS(src2, low_len-1, 0);
        }/*}}}*/
        word_t inst_lwr(word_t addr, word_t src2){/*{{{*/
            word_t memword = Mr(addr & ~(0x3), 4);
            uint8_t byte = addr & 0x3;
            uint8_t low_len = 32-8*byte;
            return (BITS(src2, 31, low_len) << low_len) | BITS(memword, 31, 8*byte);
        }/*}}}*/
        void inst_swl(word_t addr, word_t src2){/*{{{*/
            const int swl_len[8] = {
                0x13,
                0x33,
                0x73,
                0xf3,
            };
            uint8_t byte = addr & 0x3;
            word_t data = BITS(src2, 31, 24-8*byte);
            Mw(addr & ~(0x3),swl_len[byte],data);
        }/*}}}*/
        void inst_swr(word_t addr, word_t src2){/*{{{*/
            const int swr_len[8] = {
                0xf3,
                0xe3,
                0xc3,
                0x83,
            };
            uint8_t byte = addr & 0x3;
            word_t data = BITS(src2, 31-8*byte,0)<<(8*byte);
            Mw(addr & ~(0x3),swr_len[byte],data);
        }/*}}}*/
        inline void inst_jump(word_t dest){/*{{{*/
            is_delay_slot = true;
            delay_slot_npc = dest;
        }/*}}}*/
        inline void inst_branch(bool cond, word_t imm, word_t npc){/*{{{*/
            inst_jump(cond ? (imm+npc) : (4+npc));
        }/*}}}*/
        inline void inst_eret(){/*{{{*/
            inst_state.dnpc = cp0.epc.all;
            cp0.status.exl = 0;
            IFDEF(CONFIG_ETRACE,log_pt->trace("[E] exception return"));
        }/*}}}*/
        inline void inst_add(uint8_t rd, word_t src1, word_t src2){/*{{{*/
            word_t ans = src1 + src2;
            bool sign_src1 = src1 >> 31;
            bool sign_src2 = src2 >> 31;
            bool sign_ans  = ans  >> 31;
            bool overflow = (!sign_src1 && !sign_src2 && sign_ans) || (sign_src1 && sign_src2 && !sign_ans);
            if (overflow) inst_state.dnpc = isa_raise_intr(Ov,inst_state.pc);
            else Rw(rd, ans);
        }/*}}}*/
        inline bool data_addr_ok(word_t addr, uint8_t bytes, uint8_t NO){/*{{{*/
            bool res = true;
            if (unlikely((bytes-1) & addr)){
                inst_state.dnpc = isa_raise_intr(NO,inst_state.pc); 
                cp0.badvaddr.all = addr;
                res = false;
            }
            return res;
        }/*}}}*/
        // }}}

        // Exception method{{{
        vaddr_t isa_raise_intr(word_t NO, vaddr_t epc);
        bool isa_query_intr();
        // }}}

};

#endif
