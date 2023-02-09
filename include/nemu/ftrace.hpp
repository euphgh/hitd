#ifndef __FTRACE_H__
#define __FTRACE_H__
#include <elf.h>
#include <common.h>
char* search_ftable(uint64_t addr);
void print_ftable();
typedef enum {
    push = 0x1,
    pop  
} Action;
void set_level(Action act);
int get_level();
void init_ftrace(const char* filename);
#endif /* !__FTRACE_H__ */
