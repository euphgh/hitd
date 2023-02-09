
#include <cpu/cpu.h>
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
    cpu.is_delay_slot = ds_prev; 
    cpu.delay_slot_npc = dest;
}/*}}}*/
static inline void inst_branch(bool cond, word_t imm, word_t npc){/*{{{*/
    inst_jump(cond ? (imm+npc) : (4+npc));
}/*}}}*/
