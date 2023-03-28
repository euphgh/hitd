#ifndef __DIFF_STRUCT__
#define __DIFF_STRUCT__

#include "common.hpp"

typedef struct{
    word_t pc;
    unsigned char wen;
    unsigned char wnum;
    word_t wdata;
} debug_info_t;

typedef struct {
    word_t gpr[32];
    word_t lo,hi;
    word_t pc;
    bool llbit;
} diff_state;

typedef struct {
    unsigned char size: 4;
    unsigned char wstrb:4;
} wen_t;

#endif//
