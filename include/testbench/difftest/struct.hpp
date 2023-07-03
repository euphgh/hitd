#ifndef __DIFF_STRUCT__
#define __DIFF_STRUCT__

#include "common.hpp"
#include "isa/cp0.hpp"

typedef struct{
    word_t pc;
    unsigned char wen;
    unsigned char wnum;
    word_t wdata;
} debug_info_t;

typedef struct {
    uint8_t commitNum;
    uint8_t interruptSeq; // start from 0, eq to commitNum is no
    word_t lastPC;
    word_t gpr[32];
    word_t lo,hi;
    word_t pc;
    bool llbit;
    std::unique_ptr<CP0_t> ArchCop;
} diff_state;

typedef struct {
    unsigned char size: 4;
    unsigned char wstrb:4;
} wen_t;

#endif//
