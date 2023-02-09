#ifndef __DIFF_STRUCT__
#define __DIFF_STRUCT__
#include "common.h"
typedef struct{
    word_t pc;
    unsigned char wen;
    unsigned char wnum;
    word_t wdata;
} debug_info_t;
typedef struct {
    word_t pc;
    word_t hi,lo;
    word_t gpr[32];
    //TODO:add cp0 or exception
} diff_state;
typedef struct {
    unsigned char size: 4;
    unsigned char wstrb:4;
} wen_t;
#endif//
