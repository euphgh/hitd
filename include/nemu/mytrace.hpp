#ifndef __MYTRACE_H__
#define __MYTRACE_H__

#include <elf.h>
#include <common.hpp>
#include "testbench/difftest/struct.hpp"
char* search_ftable(uint64_t addr);
void print_ftable();
typedef enum {
    push = 0x1,
    pop  
} Action;
void set_level(Action act);
int get_level();
void init_ftrace(const char* filename);

//NOTE:buf length must greater than 8*5 = 40
void hex_display(int len, word_t data, char* buf);

void read_dtrace(int len, paddr_t addr, const char* name, word_t value);
void write_dtrace(int len, paddr_t addr, const char* name, word_t value);

void read_mtrace(wen_t info, paddr_t addr, word_t value);
void write_mtrace(wen_t info, paddr_t addr, word_t value);
#endif
