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
#include "local-include/reg.hpp"
#include <nemu/cpu/cpu.hpp>
#include <nemu/cpu/ifetch.hpp>
#include <nemu/cpu/decode.hpp>
#include "isa-def.hpp"
#include "cp0.hpp"
#include "utils.hpp"
#include <signal.h>

#define R(i) gpr(i)
#define Rw(i,value) do {s->wnum = i; cpu.gpr[i] = value;} while(0)
#define Mr vaddr_read
#define Mw vaddr_write
#define __NOT_DELAY__ __ASSERT_NEMU__(!cpu.is_delay_slot,"this instr can not be delay slot")

enum {
  TYPE_I, // signed extended imm
  TYPE_U, // zero extended imm
  TYPE_B, // branch instr
  TYPE_J, // only J and JAL
  TYPE_S, // only need src1(R(rs)) and rd
  TYPE_R, // three registers instr include JR and JALR
  TYPE_N, // none
};

#define src1R() do { *src1 = R(rs); } while (0)
#define src2R() do { *src2 = R(rt); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 15, 0), 16); } while(0)
#define immU() do { *imm = BITS(i, 15, 0); } while(0)
#define immB() do { *imm = SEXT(BITS(i, 15, 0), 16)<<2;} while(0)
#define immJ() do { *imm = BITS(i, 25, 0) << 2; } while(0)

#ifdef CONFIG_FTRACE
static void check_link(int rs ,Decode *s){/*{{{*/
    uint8_t opcode = BITS(s->isa.inst.val,31,26);
    //NOTE:jal instr
    if (opcode==0x3) SET_CALL(s->flag); 
    if (opcode==0x0) {
        uint8_t special = BITS(s->isa.inst.val,5,0);
        //NOTE:jalr instr
        if (special==0x9) SET_CALL(s->flag); 
        //NOTE:jr 31 instr
        if (special==0x8 && rs==31) SET_RET(s->flag);
    }
}/*}}}*/
#endif /* CONFIG_FTRACE */
static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst.val;
  int rt = BITS(i, 20, 16);
  int rs = BITS(i, 25, 21);
  *rd = (type == TYPE_U || type == TYPE_I) ? rt : BITS(i, 15, 11);
  switch (type) {
    case TYPE_J: 
        immJ();
        src1R();
        IFDEF(CONFIG_FTRACE,check_link(rs,s));
        break;
    case TYPE_I: src1R();immI(); break;
    case TYPE_U: src1R();immU(); break;
    case TYPE_R: src1R();src2R(); break;
    case TYPE_B: 
        src1R();
        immB(); 
        break;
  }
}

static word_t inst_lwl(word_t addr, word_t src2){/*{{{*/
    word_t memword = Mr(addr & ~(0x3), 4);
    uint8_t byte = addr & 0x3;
    uint8_t low_len = 24-8*byte;
    return (BITS(memword, 7+8*byte, 0) << low_len) | BITS(src2, low_len-1, 0);
}/*}}}*/
static word_t inst_lwr(word_t addr, word_t src2){/*{{{*/
    word_t memword = Mr(addr & ~(0x3), 4);
    uint8_t byte = addr & 0x3;
    uint8_t low_len = 32-8*byte;
    return (BITS(src2, 31, low_len) << low_len) | BITS(memword, 31, 8*byte);
}/*}}}*/
static void inst_swl(word_t addr, word_t src2){/*{{{*/
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
static void inst_swr(word_t addr, word_t src2){/*{{{*/
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
static inline void inst_jump(word_t dest){/*{{{*/
    __NOT_DELAY__; 
    cpu.is_delay_slot = true;
    cpu.delay_slot_npc = dest;
}/*}}}*/
static inline void inst_branch(bool cond, word_t imm, word_t npc){/*{{{*/
    inst_jump(cond ? (imm+npc) : (4+npc));
}/*}}}*/
static inline void inst_eret(Decode *s){/*{{{*/
    s->dnpc = cpu.cp0.epc.all;
    cpu.cp0.status.exl = 0;
    IFDEF(CONFIG_ETRACE,log_write("ETRACE:\texception return at " FMT_PADDR "\n",s->pc));
}/*}}}*/
static inline void inst_add(uint8_t rd, word_t src1, word_t src2, word_t pc, Decode *s){/*{{{*/
    word_t ans = src1 + src2;
    bool sign_src1 = src1 >> 31;
    bool sign_src2 = src2 >> 31;
    bool sign_ans  = ans  >> 31;
    bool overflow = (!sign_src1 && !sign_src2 && sign_ans) || (sign_src1 && sign_src2 && !sign_ans);
    if (overflow) s->dnpc = isa_raise_intr(Ov,pc);
    else Rw(rd, ans);
}/*}}}*/
static inline bool data_addr_ok(word_t addr, uint8_t bytes, Decode *s, uint8_t NO){
    bool res = true;
    if (unlikely((bytes-1) & addr)){
        s->dnpc = isa_raise_intr(NO,s->pc); 
        cpu.cp0.badvaddr.all = addr;
        res = false;
    }
    return res;
}
#define __INST_MULT__(is_signed) \
    MUXONE(is_signed, int64_t, uint64_t) a = (MUXONE(is_signed,signed,uint64_t))src1; \
    MUXONE(is_signed, int64_t, uint64_t) b = (MUXONE(is_signed,signed,uint64_t))src2; \
    MUXONE(is_signed, int64_t, uint64_t) res = a*b;\
    cpu.hi = BITS(res,63,32); \
    cpu.lo = BITS(res,31,0);

static int decode_exec(Decode *s) {
  int rd = 0;
  word_t src1 = 0, src2 = 0, imm = 0;
  bool this_is_delay = cpu.is_delay_slot;
  s->dnpc = this_is_delay ? cpu.delay_slot_npc : s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();

  //R type {{{
  //      opcode  rs      rt      rd  
  //      6       5       5       5
  //      [31:26] [25:21] [20:16] [15:11] [10:6] [5:0]
  INSTPAT("000000 ?????   ?????   ?????   00000  100000", add    , R, inst_add(rd, src1, src2, s->pc, s));
  INSTPAT("000000 ?????   ?????   ?????   00000  100001", addu   , R, Rw(rd, src1 + src2));
  INSTPAT("000000 ?????   ?????   ?????   00000  100010", sub    , R, inst_add(rd, src1, (~src2)+1, s->pc, s));
  INSTPAT("000000 ?????   ?????   ?????   00000  100011", subu   , R, Rw(rd, src1 - src2));

  INSTPAT("000000 ?????   ?????   ?????   00000  100100", and    , R, Rw(rd, src1 & src2));
  INSTPAT("000000 ?????   ?????   ?????   00000  100101", or     , R, Rw(rd, src1 | src2));
  INSTPAT("000000 ?????   ?????   ?????   00000  100110", xor    , R, Rw(rd, src1 ^ src2));
  INSTPAT("000000 ?????   ?????   ?????   00000  100111", nor    , R, Rw(rd, ~(src1 | src2)));

  INSTPAT("000000 ?????   ?????   ?????   00000  101010", slt    , R, Rw(rd, (signed)src1 < (signed)src2));
  INSTPAT("000000 ?????   ?????   ?????   00000  101011", sltu   , R, Rw(rd, src1 < src2));
  INSTPAT("000000 00000   ?????   ?????   ?????  000000", sll    , R, Rw(rd, src2 << BITS(s->isa.inst.val, 10, 6)));
  INSTPAT("000000 00000   ?????   ?????   ?????  000010", srl    , R, Rw(rd, (unsigned)src2 >> BITS(s->isa.inst.val, 10, 6)));
  INSTPAT("000000 00000   ?????   ?????   ?????  000011", sra    , R, Rw(rd, (signed)src2 >> BITS(s->isa.inst.val, 10, 6)));
  INSTPAT("000000 ?????   ?????   ?????   00000  000100", sllv   , R, Rw(rd, src2 << BITS(src1, 4, 0)));
  INSTPAT("000000 ?????   ?????   ?????   00000  000110", srlv   , R, Rw(rd, (unsigned)src2 >> BITS(src1, 4, 0)));
  INSTPAT("000000 ?????   ?????   ?????   00000  000111", srav   , R, Rw(rd, (signed)src2 >> BITS(src1, 4, 0)));

  INSTPAT("000000 ?????   ?????   00000   00000  011000", mult   , R, cpu.hilo_valid=true;__INST_MULT__(1));
  INSTPAT("000000 ?????   ?????   00000   00000  011001", multu  , R, cpu.hilo_valid=true;__INST_MULT__(0));
  INSTPAT("000000 ?????   ?????   00000   00000  011010", div    , R, cpu.hilo_valid=true;cpu.lo = (signed)src1/(signed)src2; cpu.hi = (signed)src1%(signed)src2;);
  INSTPAT("000000 ?????   ?????   00000   00000  011011", divu   , R, cpu.hilo_valid=true;cpu.lo = src1/src2; cpu.hi = src1%src2;);
  INSTPAT("000000 00000   00000   ?????   00000  010000", mfhi   , R, Rw(rd, cpu.hi));
  INSTPAT("000000 00000   00000   ?????   00000  010010", mflo   , R, Rw(rd, cpu.lo));
  /*}}}*/
  //I type {{{
  //      opcode  rs      rt      imm
  //      6       5       5       16
  //      [31:26] [25:21] [20:16] [15:0]
  INSTPAT("001000 ?????   ?????   ????? ????? ??????", addi   , I, inst_add(rd, src1, imm, s->pc, s));
  INSTPAT("001001 ?????   ?????   ????? ????? ??????", addui  , I, Rw(rd, src1 + imm));
  INSTPAT("001010 ?????   ?????   ????? ????? ??????", slti   , I, Rw(rd, (signed)src1 < (signed)imm));
  INSTPAT("001011 ?????   ?????   ????? ????? ??????", sltiu  , I, Rw(rd, (unsigned)src1 < (unsigned)imm));

  INSTPAT("100000 ?????   ?????   ????? ????? ??????", lb     , I, Rw(rd, SEXT(Mr(src1 + imm, 1),8)));
  INSTPAT("100010 ?????   ?????   ????? ????? ??????", lwl    , I, Rw(rd, inst_lwl(src1 + imm, R(rd))));
  INSTPAT("100100 ?????   ?????   ????? ????? ??????", lbu    , I, Rw(rd, BITS(Mr(src1 + imm, 1),7,0))); 
  INSTPAT("100110 ?????   ?????   ????? ????? ??????", lwr    , I, Rw(rd, inst_lwr(src1 + imm, R(rd))));
  INSTPAT("100001 ?????   ?????   ????? ????? ??????", lh     , I, word_t addr = src1 + imm; if (data_addr_ok(addr, 2, s, AdEL)) Rw(rd, SEXT(Mr(addr, 2),16)));
  INSTPAT("100011 ?????   ?????   ????? ????? ??????", lw     , I, word_t addr = src1 + imm; if (data_addr_ok(addr, 4, s, AdEL)) Rw(rd, Mr(addr, 4))); 
  INSTPAT("100101 ?????   ?????   ????? ????? ??????", lhu    , I, word_t addr = src1 + imm; if (data_addr_ok(addr, 2, s, AdEL)) Rw(rd, BITS(Mr(addr, 2),15,0)));

  INSTPAT("101000 ?????   ?????   ????? ????? ??????", sb     , I, Mw(src1 + imm, 1, R(rd)));
  INSTPAT("101001 ?????   ?????   ????? ????? ??????", sh     , I, word_t addr = src1 + imm; if (data_addr_ok(addr, 2, s, AdES)) Mw(addr, 2, R(rd)));
  INSTPAT("101010 ?????   ?????   ????? ????? ??????", swl    , I, inst_swl(src1 + imm, R(rd)));
  INSTPAT("101011 ?????   ?????   ????? ????? ??????", sw     , I, word_t addr = src1 + imm; if (data_addr_ok(addr, 4, s, AdES)) Mw(addr, 0xf4, R(rd)));
  INSTPAT("101110 ?????   ?????   ????? ????? ??????", swr    , I, inst_swr(src1 + imm, R(rd)));
  /*}}}*/
  //U type {{{
  //      opcode  rs      rt      imm
  //      6       5       5       16
  //      [31:26] [25:21] [20:16] [15:0]
  INSTPAT("001100 ?????   ?????   ????? ????? ??????", addi   , U, Rw(rd, imm & src1));
  INSTPAT("001101 ?????   ?????   ????? ????? ??????", ori    , U, Rw(rd, imm | src1));
  INSTPAT("001110 ?????   ?????   ????? ????? ??????", xori   , U, Rw(rd, imm ^ src1));
  INSTPAT("001111 00000   ?????   ????? ????? ??????", lui    , U, Rw(rd, imm << 16)); 
  INSTPAT("000000 ?????   00000   00000 00000 010001", mthi   , U, cpu.hilo_valid=true;cpu.hi = src1);
  INSTPAT("000000 ?????   00000   00000 00000 010011", mtlo   , U, cpu.hilo_valid=true;cpu.lo = src1);
  INSTPAT("010000 00000   ?????   ????? 00000 000???", mfc0   , U, Rw(rd, cp0_read(&cpu.cp0, (imm | imm>>8)))); 
  INSTPAT("010000 00100   ?????   ????? 00000 000???", mtc0   , U, cp0_write(&cpu.cp0, (imm | imm>>8), R(rd)));/*}}}*/

  INSTPAT("000000 ?????   ?????   ????? ????? 001101", break  , N, s->dnpc = isa_raise_intr(Bp,s->pc));
  INSTPAT("000000 ?????   ?????   ????? ????? 001100", syscall, N, s->dnpc = isa_raise_intr(Sys,s->pc));
  INSTPAT("010000 10000   00000   00000 00000 011000", eret   , N, inst_eret(s));/*}}}*/

  //B type {{{
  //      opcode  rs      rt      imm
  //      6       5       5       16
  //      [31:26] [25:21] [20:16] [15:0]
  INSTPAT("000100 ?????   ?????   ????? ????? ??????", beq    , B, inst_branch(src1==R(BITS(s->isa.inst.val,20,16)), imm, s->snpc));
  INSTPAT("000101 ?????   ?????   ????? ????? ??????", bne    , B, inst_branch(src1!=R(BITS(s->isa.inst.val,20,16)), imm, s->snpc));
  INSTPAT("000001 ?????   00000   ????? ????? ??????", bltz   , B, inst_branch((signed)src1 <  0, imm, s->snpc));
  INSTPAT("000001 ?????   10000   ????? ????? ??????", bltzal , B, inst_branch((signed)src1 <  0, imm, s->snpc); Rw(31, s->snpc + 4));
  INSTPAT("000001 ?????   00001   ????? ????? ??????", bgez   , B, inst_branch((signed)src1 >= 0, imm, s->snpc));
  INSTPAT("000001 ?????   10001   ????? ????? ??????", bgezal , B, inst_branch((signed)src1 >= 0, imm, s->snpc); Rw(31, s->snpc + 4));
  INSTPAT("000111 ?????   00000   ????? ????? ??????", bgtz   , B, inst_branch((signed)src1 >  0, imm, s->snpc));
  INSTPAT("000110 ?????   00000   ????? ????? ??????", blez   , B, inst_branch((signed)src1 <= 0, imm, s->snpc));
  /*}}}*/
  //J type {{{
  //      opcode  rs      0       rd 
  //      6       5       5       16
  //      [31:26] [25:21] [20:16] [15:11]
  INSTPAT("000010 ?????   ?????   ????? ????? ??????", j      , J, inst_jump((BITS(s->pc, 31, 28)<<28) | imm));
  INSTPAT("000011 ?????   ?????   ????? ????? ??????", jal    , J, inst_jump((BITS(s->pc, 31, 28)<<28) | imm); Rw(31, s->snpc+4));
  INSTPAT("000000 ?????   00000   00000 00000 001000", jr     , J, inst_jump(src1));
  INSTPAT("000000 ?????   00000   ????? 00000 001001", jalr   , J, inst_jump(src1); Rw(rd, s->snpc + 4));
  /*}}}*/
#ifdef CONFIG_MIPS_RLS1
  INSTPAT("011100 ?????   ?????   ?????   00000  000010", mul    , R, cpu.hilo_valid=false;R(rd) = (signed)src1 * (signed)src2);
  INSTPAT("000000 ?????   ?????   ?????   00000  001011", movn   , R, Rw(rd, (src2!=0) ? src1 : R(rd)));
  INSTPAT("000000 ?????   ?????   ?????   00000  001010", movz   , R, Rw(rd, (src2!=0) ? src1 : R(rd)));
#endif /* CONFIG_MIPS_RLS1 */
  INSTPAT("011??? ?????   ?????   ?????   ?????  ??????", ri_011 , N, s->dnpc = isa_raise_intr(RI, s->pc));
  INSTPAT("0101?? ?????   ?????   ?????   ?????  ??????", ri_bl  , N, s->dnpc = isa_raise_intr(RI, s->pc));
  INSTPAT("010001 01110   11111   00000   00011  100000", ri_ft  , N, s->dnpc = isa_raise_intr(MUXDEF(CONFIG_NSC_FUNC,RI,CpU), s->pc));// only func test need RI else is 
  INSTPAT("010??? ?????   ?????   ?????   ?????  ??????", ri_cop , N, s->dnpc = isa_raise_intr(RI, s->pc));
  INSTPAT("100111 ?????   ?????   ?????   ?????  ??????", ri_47  , N, s->dnpc = isa_raise_intr(RI, s->pc));
  INSTPAT("10110? ?????   ?????   ?????   ?????  ??????", ri_101 , N, s->dnpc = isa_raise_intr(RI, s->pc));
  INSTPAT("11???? ?????   ?????   ?????   ?????  ??????", ri_11  , N, s->dnpc = isa_raise_intr(RI, s->pc));

  INSTPAT("011100 ????? ????? ????? ????? 111111", sdbbp  , N, NEMUTRAP(s->pc, R(2))); // R(2) is $v0;
  INSTPAT("?????? ????? ????? ????? ????? ??????", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0
  s->wdata = R(s->wnum);
  if (this_is_delay) cpu.is_delay_slot = false;
  return 0;
}

#include <signal.h>
int isa_exec_once(Decode *s) {
    s->wnum = 0;
    s->flag = 0;
#ifdef CONFIG_ITRACE
    char *p = s->logbuf;
    p += snprintf(p, sizeof(s->logbuf), FMT_WORD_X ":", s->pc);
#endif
    word_t this_pc = s->snpc;
    // if (this_pc==0xbfc4c9c4) raise(SIGINT);
    if (unlikely(this_pc & 0x3)){
        s->dnpc = isa_raise_intr(AdEL,this_pc); 
        cpu.cp0.badvaddr.all = this_pc;
    }
    else {
        s->isa.inst.val = inst_fetch(&s->snpc, 4);
#ifdef CONFIG_ITRACE
        int ilen = s->snpc - s->pc;
        int i;
        uint8_t *inst = (uint8_t *)&s->isa.inst.val;
        for (i = ilen - 1; i >= 0; i --) {
            p += snprintf(p, 4, " %02x", inst[i]);
        }
        int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
        int space_len = ilen_max - ilen;
        if (space_len < 0) space_len = 0;
        space_len = space_len * 3 + 1;
        memset(p, ' ', space_len);
        p += space_len;

        void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
        disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
                MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
#endif
        // if (s->pc==0xbfc4c9c4){
        //     raise(SIGTRAP);
        // }

        if (isa_query_intr()) s->dnpc = isa_raise_intr(Int, s->pc);
        else decode_exec(s);
    }
    return 0;
}
