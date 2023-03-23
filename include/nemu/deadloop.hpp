#ifndef __DEADLOOP_H__
#define __DEADLOOP_H__
#include "common.hpp"
#define PC_FIFO_NR 256
#define LOOP_MAX (1<<10)
// #define LOOP_MAX (1<<16)
typedef struct{
    word_t item[PC_FIFO_NR];
    int head,tail;
} PC_FIFO;
word_t get_pc_before_deadloop();
bool detect_deadloop(word_t pc);
#endif
