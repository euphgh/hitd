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

#include <nemu/isa.hpp>/*{{{*/
#include <nemu/cpu/cpu.hpp>
#include <macro.hpp>
#include <readline/readline.h>
#include <readline/history.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "common.hpp"
#include "nemu/memory/vaddr.hpp"
#include "sdb.hpp"
#include "utils.hpp"
/*}}}*/

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();
word_t expr(char *e, bool *success);
bool new_wp(char* expression);
bool free_wp(int number);
bool is_wp_change();
void print_wp_info();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {/*{{{*/
  static char *line_read = NULL;
  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}/*}}}*/

static int cmd_c(char *args) {/*{{{*/
  cpu_exec(-1);
  return 0;
}/*}}}*/

static void print_description(const char *arg);

static int cmd_si(char *args) {/*{{{*/
    int step = 1;
    bool legal_arg = 1;
    if (args) legal_arg = sscanf(strtok(NULL, " "),"%d",&step)==1;
    // 除step无其他参数 and step>0
    legal_arg &= (strtok(NULL, " ")==NULL) && (step>0);     
    if (legal_arg) cpu_exec(step);
    else print_description("si");
    return 0;
}/*}}}*/

static int cmd_info(char *args) {/*{{{*/
    bool success = (args!=NULL);
    bool is_reg = false;
    bool is_watch = false;
    if (success){
        char c = '\0';
        sscanf(strtok(NULL, " "), "%c", &c);
        is_reg = c=='r';
        is_watch = c=='w';
        success = (is_reg || is_watch) && (strtok(NULL, " ")==NULL);
    }
    if (success){
        if (is_reg) isa_reg_display();
        if (is_watch) print_wp_info();
    }
    else print_description("info");
    return 0;
}/*}}}*/

static bool cal_addr(char *expressions, vaddr_t *addr){/*{{{*/
    bool success = false;
    *addr = expr(expressions, &success);
    return success;
}/*}}}*/

static int cmd_x(char *args) {/*{{{*/
    int size = 0, consumeNum = 0;
    bool has_size = false; if (args) has_size = sscanf(args, "%d %n", &size, &consumeNum);
    bool has_expr = false; if (has_size) has_expr = strlen(args)>consumeNum;
    bool legalExpr = false;
    vaddr_t vAddr;
    if (has_expr){
        char *expressions = (char*)malloc(consumeNum+1);
        strcpy(expressions, &args[consumeNum]);
        legalExpr = cal_addr(expressions, &vAddr);
        free(expressions);
    }
    if (legalExpr) {
        int i = 0;
        int maxRow = ((size-1)>>3)+1;
        while (i<maxRow) {
            printf(FMT_WORD_X ":  ",vAddr+(i<<3));
            for (int j = 0; j < 8; j++) {
                vaddr_t offset = (i<<3)+j;
                bool hasValue = (offset<size);
                if (hasValue){
                    word_t byte = vaddr_read(vAddr+offset, 1);
                    printf( FMT_WORD_X "    ",byte);
                }
                else {
                    printf("\t\t");
                }
            }
            printf("\n");
            i++;
        }
    }
    else print_description("x");
    return 0;
}/*}}}*/

static int cmd_q(char *args) {/*{{{*/
  int res = 0;
  if (nemu_state.state == NEMU_STOP) {
      char input='\0';
      do {
          printf("program is not end, do you want to quit(input \"y\" to quit):");
      } while(scanf(" %c",&input)==0);
          if (input=='y') {
          nemu_state.state = NEMU_QUIT;
          res = -1;
      }
  }
  else {
      nemu_state.state = NEMU_QUIT;
      res = -1;
  }
  return res;
}/*}}}*/

static int cmd_p(char *args) {/*{{{*/
    bool success = false;
    word_t value = expr(args, &success);
    if (success) {
        printf("Decimal    :\t" FMT_WORD_U "\n",value);
        printf("Hexadecimal:\t" FMT_WORD "\n",value);
    }
    else print_description("p");
    return 0;
}/*}}}*/
static int cmd_help(char *args);
static int cmd_w(char *args){/*{{{*/
#ifndef CONFIG_WATCH_POINT
    printf("watchpoint function not enable, please first enable it by \"make memuconfig\"\n");
#else
    bool success = new_wp(args);
    if (!success) print_description("w");
#endif
    return 0;
}/*}}}*/
int cmd_d(char *args){/*{{{*/
    int number = 0;
    bool success = false;
    if (args) {
        success = (sscanf(args,"%u", &number)==1);
        success = free_wp(number);
        print_wp_info();
    }
    if (!success) print_description("d");
    return 0;
}/*}}}*/

static struct {/*{{{*/
  const char *name;
  const char *description;
  int (*handler) (char *);
} /*}}}*/
cmd_table [] = {/*{{{*/
    { "w",    "add watchpoint by \"w [expressions]\"",                      cmd_w   },
    { "d",    "delete watchpoint with number by \"d [number]\"",            cmd_d   },
    { "info", "print registers by \"info r\" and watchpoint by \"info w\"", cmd_info},  
    { "x",    "check memory by \"x [size] [addr]\"",                        cmd_x   },  
    { "c",    "Continue the execution of the program",                      cmd_c   },
    { "p",    "print expressions value",                                    cmd_p   },
    { "q",    "Exit NEMU",                                                  cmd_q   },
    { "si",   "run program with instruction by \"si [step]\"",              cmd_si  },  
    { "help", "Display information about all supported commands",           cmd_help},

};/*}}}*/

#define NR_CMD ARRLEN(cmd_table)

static void print_description(const char *arg){/*{{{*/
    for (int i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0)
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
}/*}}}*/

static int cmd_help(char *args) {/*{{{*/
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}/*}}}*/

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {/*{{{*/
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }
  // dead loop
  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) { return; }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}/*}}}*/

void init_sdb() {/*{{{*/
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}/*}}}*/
