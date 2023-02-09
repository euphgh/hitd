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

#include "debug.h"
#include "local-include/reg.h"
#include "macro.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
#include <stdint.h>

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write
enum {
    TYPE_I, TYPE_U, TYPE_S, TYPE_J, TYPE_B, TYPE_R,
    TYPE_N, // none
};

#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immJ() do { *imm = SEXT((BITS(i, 24, 21)<<1)|(BITS(i,30,25)<<5)|(BITS(i,20,20)<<11)|(BITS(i,19,12)<<12|(BITS(i,31,31)<<20)),21); } while(0)
#define immB() do { *imm = SEXT((BITS(i, 11,  8)<<1)|(BITS(i,30,25)<<5)|(BITS(i, 7, 7)<<11)|(BITS(i,31,31)<<12),13); } while(0)
inline static bool sign_less_then(word_t src1, word_t src2){/*{{{*/
    // bool src1_is_neg = BITS(src1, 63, 63);
    // bool src2_is_neg = BITS(src2, 63, 63);
    // bool sub_res = (int64_t)src1-(int64_t)src2 < 0;
    // return (src1_is_neg ^ src2_is_neg) ? src1_is_neg : sub_res;
    return (int64_t)src1 < (int64_t)src2;
}/*}}}*/
static word_t divu_inst (word_t dividend, word_t divisor){/*{{{*/
    word_t res = ~0;
    if (divisor!=0){
        res = dividend / divisor;
    }
    return res;
}/*}}}*/
static word_t remu_inst (word_t dividend, word_t divisor){/*{{{*/
    word_t res = dividend;
    if (divisor!=0){
        res = dividend % divisor;
    }
    return res;
}/*}}}*/
static word_t div_inst (word_t dividend, word_t divisor){/*{{{*/
    word_t res = ~0;
    bool div_zero = (divisor==0);
    bool overflow = ((int64_t)dividend == INT64_MIN) && ((int64_t)divisor==-1);
    if (div_zero || overflow){
        res = overflow ? INT64_MIN : (~0);
    }
    else {
        res = (int64_t)dividend / (int64_t)divisor;
    }
    return res;
}/*}}}*/
static word_t divw_inst (word_t dividend, word_t divisor){/*{{{*/
    word_t res = ~0;
    bool div_zero = (divisor==0);
    bool overflow = ((int64_t)dividend == INT32_MIN) && ((int64_t)divisor==-1);
    if (div_zero || overflow){
        res = (int64_t)(overflow ? INT32_MIN : (~0));
    }
    else {
        res = (int64_t)dividend / (int64_t)divisor;
    }
    return res;
}/*}}}*/
static word_t rem_inst (word_t dividend, word_t divisor){/*{{{*/
    word_t res = ~0;
    bool div_zero = (divisor==0);
    bool overflow = ((int64_t)dividend == INT64_MIN) && ((int64_t)divisor==-1);
    if (div_zero || overflow){
        res = overflow ? 0 : dividend;
    }
    else {
        res = (int64_t)dividend % (int64_t)divisor;
    }
    return res;
}/*}}}*/
static word_t remw_inst (word_t dividend, word_t divisor){/*{{{*/
    word_t res = ~0;
    bool div_zero = (divisor==0);
    bool overflow = ((int64_t)dividend == INT32_MIN) && ((int64_t)divisor==-1);
    if (div_zero || overflow){
        res = overflow ? 0 : dividend;
    }
    else {
        res = (int64_t)dividend % (int64_t)divisor;
    }
    return res;
}/*}}}*/
#ifdef CONFIG_FTRACE
static void check_link(int rd, int rs ,Decode *s){/*{{{*/
    bool rd_l = (rd & ~0x4)==0x1;
    bool rs_l = (rs & ~0x4)==0x1;
    if (rd_l || rs_l){
        if (!rd_l) SET_RET(s->flag);
        else if (!rs_l) SET_CALL(s->flag);
        else Assert(0, "encount instruct jalr which source and destination is link!");
    }
}/*}}}*/
#endif /* CONFIG_FTRACE */
static void decode_operand(Decode *s, int *dest, word_t *src1, word_t *src2, word_t *imm, int type) {
    uint32_t i = s->isa.inst.val;
    int rd  = BITS(i, 11, 7);
    int rs1 = BITS(i, 19, 15);
    int rs2 = BITS(i, 24, 20);
    *dest = rd;
    switch (type) {
        case TYPE_I: {
                         src1R();          
                         immI(); 
                         IFDEF(CONFIG_FTRACE, if(BITS(i,6,2)==0x19)check_link(rd,rs1,s));
                         break;
                     }
        case TYPE_U: {                  immU(); break;}
        case TYPE_J: {                  
                         immJ(); 
                         IFDEF(CONFIG_FTRACE, if((rd & ~0x4)==0x1)SET_CALL(s->flag)); 
                         break;}
        case TYPE_S: {src1R(); src2R(); immS(); break;}
        case TYPE_B: {src1R(); src2R(); immB(); break;}
        case TYPE_R: {src1R(); src2R();         break;}
        default:break;
    }
}

static int decode_exec(Decode *s) {
    int dest = 0;
    word_t src1 = 0, src2 = 0, imm = 0;
    s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
    decode_operand(s, &dest, &src1, &src2, &imm, concat(TYPE_, type)); \
    __VA_ARGS__ ; \
}

    INSTPAT_START();

    //R type {{{
    //      funct7      rs2     rs1     funct3  rd      opcode
    //      7           5       5       3       5       5       2 
    //      [31:25]     [24:20] [19:15] [14:12] [11:7]  [6:2]   10  
    INSTPAT("0000000    ?????   ?????   000     ?????   01100   11", add     , R, R(dest) = src1 + src2);
    INSTPAT("0100000    ?????   ?????   000     ?????   01100   11", sub     , R, R(dest) = src1 - src2);
    INSTPAT("0000000    ?????   ?????   001     ?????   01100   11", sll     , R, R(dest) = src1 << BITS(src2, 5, 0));
    INSTPAT("0000000    ?????   ?????   010     ?????   01100   11", slt     , R, R(dest) = (sign_less_then(src1, src2)) ? 0x1 : 0x0);
    INSTPAT("0000000    ?????   ?????   011     ?????   01100   11", sltu    , R, R(dest) = (src1 < src2) ? 0x1 : 0x0);
    INSTPAT("0000000    ?????   ?????   100     ?????   01100   11", xor     , R, R(dest) = src1 ^ src2);
    INSTPAT("0000000    ?????   ?????   101     ?????   01100   11", srl     , R, R(dest) = src1 >> BITS(src2, 5, 0));
    INSTPAT("0100000    ?????   ?????   101     ?????   01100   11", sra     , R, R(dest) = (int64_t)src1 >> BITS(src2, 5, 0));
    INSTPAT("0000000    ?????   ?????   110     ?????   01100   11", or      , R, R(dest) = src1 | src2);
    INSTPAT("0000000    ?????   ?????   111     ?????   01100   11", and     , R, R(dest) = src1 & src2);
    /*RV64 only{{{*/ 
    INSTPAT("0000000    ?????   ?????   000     ?????   01110   11", addw    , R, R(dest) = SEXT(SEXT(src1, 32) + SEXT(src2, 32),32));
    INSTPAT("0100000    ?????   ?????   000     ?????   01110   11", subw    , R, R(dest) = SEXT(SEXT(src1, 32) - SEXT(src2, 32),32));
    INSTPAT("0000000    ?????   ?????   001     ?????   01110   11", sllw    , R, R(dest) = SEXT(SEXT(src1, 32) << BITS(src2, 4, 0),32));
    INSTPAT("0000000    ?????   ?????   101     ?????   01110   11", srlw    , R, R(dest) = SEXT(BITS(src1, 31, 0) >> BITS(src2, 4, 0),32));
    INSTPAT("0100000    ?????   ?????   101     ?????   01110   11", sraw    , R, R(dest) = SEXT(((int64_t)SEXT(src1,32)) >> BITS(src2, 4, 0),32));
    /*}}}*/
    /*}}}*/
    //I type {{{
    //      imm[11:0]           rs1     funct3  rd      opcode
    //      7           5       5       3       5       5       2
    //      [31:25]     [24:20] [19:15] [14:12] [11:7]  [6:2]   10
    INSTPAT("???????    ?????   ?????   000     ?????   11001   11", jalr   , I, s->dnpc = (src1 + imm)&(~0x1); R(dest) = s->snpc;);

    INSTPAT("???????    ?????   ?????   000     ?????   00100   11", addi   , I, R(dest) = src1 +  imm);
    INSTPAT("???????    ?????   ?????   010     ?????   00100   11", slti   , I, R(dest) = (sign_less_then(src1, imm)) ? 0x1 : 0x0);
    INSTPAT("???????    ?????   ?????   011     ?????   00100   11", sltiu  , I, R(dest) = (src1 < imm) ? 0x1 : 0x0);
    INSTPAT("???????    ?????   ?????   100     ?????   00100   11", xori   , I, R(dest) = src1 ^ imm);
    INSTPAT("???????    ?????   ?????   110     ?????   00100   11", ori    , I, R(dest) = src1 | imm);
    INSTPAT("???????    ?????   ?????   111     ?????   00100   11", andi   , I, R(dest) = src1 & imm);

    /*RV64 only{{{*/
    INSTPAT("000000?    ?????   ?????   001     ?????   00100   11", slli   , I, R(dest) = src1 << imm);
    INSTPAT("000000?    ?????   ?????   101     ?????   00100   11", srli   , I, R(dest) = src1 >> imm);
    // INSTPAT("010000?  ?????  ?????   101     ?????   00100   11", srai   , I, R(dest) = (((int64_t)src1) > 0 ) ? (src1 >> imm) : ~((~src1) >> imm));
    INSTPAT("010000?    ?????   ?????   101     ?????   00100   11", srai   , I, R(dest) = ((int64_t)src1) >> imm);
    INSTPAT("???????    ?????   ?????   000     ?????   00110   11", addiw  , I, R(dest) = SEXT(SEXT(src1, 32) + SEXT(imm, 32),32));
    
    INSTPAT("0000000    ?????   ?????   001     ?????   00110   11", slliw  , I, R(dest) = SEXT(SEXT(src1, 32) << BITS(imm, 5, 0),32));
    INSTPAT("0000000    ?????   ?????   101     ?????   00110   11", srliw  , I, R(dest) = SEXT(BITS(src1, 31, 0) >> BITS(imm, 5, 0),32));
    INSTPAT("0100000    ?????   ?????   101     ?????   00110   11", sraiw  , I, R(dest) = SEXT(((int64_t)SEXT(src1,32)) >> BITS(imm, 5, 0),32));
    /*}}}*/

    /* load instruct{{{*/
    INSTPAT("???????    ?????   ?????   000     ?????   00000   11", lb     , I, R(dest) = SEXT(Mr(src1 + imm, 1),8));
    INSTPAT("???????    ?????   ?????   001     ?????   00000   11", lh     , I, R(dest) = SEXT(Mr(src1 + imm, 2),16));
    INSTPAT("???????    ?????   ?????   010     ?????   00000   11", lw     , I, R(dest) = SEXT(Mr(src1 + imm, 4),32));
    INSTPAT("???????    ?????   ?????   011     ?????   00000   11", ld     , I, R(dest) = Mr(src1 + imm, 8));
    INSTPAT("???????    ?????   ?????   100     ?????   00000   11", lbu    , I, R(dest) = Mr(src1 + imm, 1));
    INSTPAT("???????    ?????   ?????   101     ?????   00000   11", lhu    , I, R(dest) = Mr(src1 + imm, 2));
    INSTPAT("???????    ?????   ?????   110     ?????   00000   11", lwu    , I, R(dest) = Mr(src1 + imm, 4));/*}}}*/
    /*}}}*/
    //B type {{{
    //      imm         rs2     rs1     funct3  imm     opcode
    //      7           5       5       3       5       5       2
    //      [31:25]     [24:20] [19:15] [14:12] [11:7]  [6:2]   10
    INSTPAT("???????    ?????   ?????   000     ?????   11000   11", beq   , B, if (src1==src2) s->dnpc = s->pc + imm);
    INSTPAT("???????    ?????   ?????   001     ?????   11000   11", bne   , B, if (src1!=src2) s->dnpc = s->pc + imm);
    INSTPAT("???????    ?????   ?????   100     ?????   11000   11", blt   , B, if (sign_less_then(src1, src2)) s->dnpc = s->pc + imm);
    INSTPAT("???????    ?????   ?????   110     ?????   11000   11", bltu  , B, if (src1<src2) s->dnpc = s->pc + imm);
    INSTPAT("???????    ?????   ?????   101     ?????   11000   11", bge   , B, if (!sign_less_then(src1, src2)) s->dnpc = s->pc + imm);
    INSTPAT("???????    ?????   ?????   111     ?????   11000   11", bgeu  , B, if (src1>=src2) s->dnpc = s->pc + imm);
    /*}}}*/
    //S type {{{
    //      imm         rs1     funct3  rd      opcode
    //      7           5       5       3       5       5       2
    //      [31:25]     [24:20] [19:15] [14:12] [11:7]  [6:2]   10
    INSTPAT("???????    ?????   ?????   000     ?????   01000   11", sb     , S, Mw(src1 + imm, 1, src2));
    INSTPAT("???????    ?????   ?????   001     ?????   01000   11", sh     , S, Mw(src1 + imm, 2, src2));
    INSTPAT("???????    ?????   ?????   010     ?????   01000   11", sw     , S, Mw(src1 + imm, 4, src2));
    INSTPAT("???????    ?????   ?????   011     ?????   01000   11", sd     , S, Mw(src1 + imm, 8, src2));
    /*}}}*/
    //U type {{{
    //      imm[31:12]                          rd      opcode
    //      7           5       5       3       5       5       2
    //      [31:25]     [24:20] [19:15] [14:12] [11:7]  [6:2]   10
    INSTPAT("???????    ?????   ?????   ???     ?????   00101   11", auipc  , U, R(dest) = s->pc + imm);
    INSTPAT("???????    ?????   ?????   ???     ?????   01101   11", lui    , U, R(dest) = imm);
    /*}}}*/
    //J type {{{
    //                                                                      end
    //      imm                                 rd      opcode
    //      7           5       5       3       5       5       2
    //      [31:25]     [24:20] [19:15] [14:12] [11:7]  [6:2]   10
    INSTPAT("???????    ?????   ?????   ???     ?????   11011   11", jal   , J, s->dnpc = s->pc + imm; R(dest) = s->snpc;);
    /*}}}*/

    /*M extension{{{*/
    //R type {{{
    //      funct7      rs2     rs1     funct3  rd      opcode
    //      7           5       5       3       5       5       2 
    //      [31:25]     [24:20] [19:15] [14:12] [11:7]  [6:2]   10  
    INSTPAT("0000001    ?????   ?????   000     ?????   01100   11", mul     , R, R(dest) = src1 * src2);
    INSTPAT("0000001    ?????   ?????   100     ?????   01100   11", div     , R, R(dest) = div_inst(src1, src2));
    INSTPAT("0000001    ?????   ?????   101     ?????   01100   11", divu    , R, R(dest) = divu_inst(src1, src2));
    INSTPAT("0000001    ?????   ?????   110     ?????   01100   11", rem     , R, R(dest) = rem_inst(src1, src2));
    INSTPAT("0000001    ?????   ?????   111     ?????   01100   11", remu    , R, R(dest) = remu_inst(src1, src2));

    INSTPAT("0000001    ?????   ?????   000     ?????   01110   11", mulw    , R, R(dest) = SEXT(src1 * src2,32));
    INSTPAT("0000001    ?????   ?????   100     ?????   01110   11", divw    , R, R(dest) = divw_inst(SEXT(src1,32), SEXT(src2,32)));
    INSTPAT("0000001    ?????   ?????   101     ?????   01110   11", divuw   , R, R(dest) = divu_inst(SEXT(src1,32), SEXT(src2,32)));
    INSTPAT("0000001    ?????   ?????   110     ?????   01110   11", remw    , R, R(dest) = remw_inst(SEXT(src1,32), SEXT(src2,32)));
    INSTPAT("0000001    ?????   ?????   111     ?????   01110   11", remuw   , R, R(dest) = remu_inst(SEXT(src1,32), SEXT(src2,32)));
    /*}}}*/
    /*}}}*/
    /*N type{{{*/
    INSTPAT("0000000  00001     00000   000     00000   11100   11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
    INSTPAT("???????  ?????     ?????   ???     ?????   ?????   ??", inv    , N, INV(s->pc));/*}}}*/


    INSTPAT_END();

    R(0) = 0; // reset $zero to 0
    return 0;
    }

int isa_exec_once(Decode *s) {
    s->isa.inst.val = inst_fetch(&s->snpc, 4);
    s->flag = 0;
    return decode_exec(s);
}
