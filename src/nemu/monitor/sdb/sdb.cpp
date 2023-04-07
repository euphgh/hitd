/***************************************************************************************sdb.cpp
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

#include "disassemble.hpp"
#include "sdb.hpp"
#include <cstdlib>
#include <fmt/core.h>
#include <nemu/isa.hpp>
#include <nemu/cpu/cpu.hpp>
#include <readline/readline.h>
#include <readline/history.h>
#include "common.hpp"
#include "macro.hpp"
#include "nemu/memory/vaddr.hpp"
#include "sdb.hpp"
#include "utils.hpp"
#include "nemu/Debugger.hpp"

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

static int cmd_bt(char *args) {/*{{{*/
#ifdef CONFIG_DWARF
    backtrace();
#else 
    printf("C level debugger not enable, please first enable it by \"make memuconfig\"\n");
#endif 
    return 0;
}/*}}}*/

static void print_description(const char *arg);

static int cmd_s(char *args){/*{{{*/
#ifdef CONFIG_DWARF
    int step = 1;
    bool legal_arg = 1;
    if (args) legal_arg = sscanf(strtok(NULL, " "),"%d",&step)==1;
    // 除step无其他参数 and step>0
    legal_arg &= (strtok(NULL, " ")==NULL) && (step>0);     
    if (legal_arg) {
        for (int i = 0; i < step; i++)
            if (step_once(step==1)==false) break;
    }
    else print_description("s");
#else 
    printf("C level debugger not enable, please first enable it by \"make memuconfig\"\n");
#endif 
    return 0;
}/*}}}*/

static int cmd_n(char *args){/*{{{*/
#ifdef CONFIG_DWARF
    int step = 1;
    bool legal_arg = 1;
    if (args) legal_arg = sscanf(strtok(NULL, " "),"%d",&step)==1;
    // 除step无其他参数 and step>0
    legal_arg &= (strtok(NULL, " ")==NULL) && (step>0);     
    if (legal_arg) {
        for (int i = 0; i < step; i++) {
            if (!next_once(step==1)) fmt::print("fail to next for out of range\n");
        }
    }
    else print_description("n");
#else 
    printf("C level debugger not enable, please first enable it by \"make memuconfig\"\n");
#endif 
    return 0;
}/*}}}*/

static int cmd_b(char *args){/*{{{*/
    bool is_addr = false;
    word_t addr = expr(args, &is_addr);
    if (is_addr) {
        new_br(addr, "");
        fmt::print("address break at " HEX_WORD "\n", addr);
    }
    else {
#ifdef CONFIG_DWARF
        bool is_func = true;
        try{
            std::string info = strtok(nullptr, " ");
            auto colon = info.find(':');
            if (colon == std::string::npos)
                addr = mips_dwarf.pc_at_func(info);
            else 
                addr = mips_dwarf.get_pc_at_src_line(info.substr(0,colon),atoi(info.substr(colon+1).c_str()));
        } catch (std::out_of_range const&) { is_func = false; }
        if (is_func) {
            new_br(addr, args);
            fmt::print("function break at " HEX_WORD "\n", addr);
        }
        else {
            fmt::print("{} is not function name or a address expressions\n", args);
            print_description("b");
        }
#else 
        printf("C level debugger not enable, please first enable it by \"make memuconfig\"\n");
#endif 
    }
    return 0;
}/*}}}*/

static int cmd_si(char *args) {/*{{{*/
    int step = 1;
    bool legal_arg = 1;
    if (args) legal_arg = sscanf(strtok(NULL, " "),"%d",&step)==1;
    // 除step无其他参数 and step>0
    legal_arg &= (strtok(NULL, " ")==NULL) && (step>0);     
    extern bool g_si_print;
    g_si_print = step < 8;
    if (legal_arg) cpu_exec(step);
    else print_description("si");
    g_si_print = false;
    return 0;
}/*}}}*/

static int cmd_info(char *args) {/*{{{*/
    bool success = (args!=NULL);
    bool is_reg = false;
    bool is_watch = false;
    bool is_variable = false;
    if (success){
        char c = '\0';
        sscanf(strtok(NULL, " "), "%c", &c);
        is_reg = c=='r';
        is_watch = c=='w';
        is_variable = c=='l';
        success = (is_reg || is_watch || is_variable) && (strtok(NULL, " ")==NULL);
    }
    if (success){
        if (is_reg) nemu->isa_reg_display();
        if (is_watch) print_wp_info();
        // try{
        //     if (is_variable) mips_dwarf.read_variables(nemu->inst_state.pc);
        // } catch(std::exception const& e) {fmt::print("read_variables exception:{}\n",e.what());}
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
    unsigned int size= 0, consumeNum = 0;
    bool has_size = false; if (args) has_size = sscanf(args, "%x %n", &size, &consumeNum);
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
                    uint8_t byte = nemu->isa_vaddr_read(vAddr+offset, 1);
                    printf("%02x(%1c)    ",byte, byte);
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
      write_history ("./.nemu_history");
      res = -1;
  }
  return res;
}/*}}}*/

static int cmd_p(char *args) {/*{{{*/
#ifdef CONFIG_DWARF
    bool success = false;
    word_t value = expr(args, &success);
    if (success) {
        printf("Decimal    :" FMT_WORD_U "\n",value);
        printf("Hexadecimal:" FMT_WORD "\n",value);
    }
    else print_description("p");
#else 
    printf("C level debugger not enable, please first enable it by \"make memuconfig\"\n");
#endif 
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
        success = free_node(number);
        print_wp_info();
    }
    if (!success) print_description("d");
    return 0;
}/*}}}*/

static int cmd_pi(char* args){
    nemu->e_protect = true;
    word_t arch_pc = nemu->arch_state.pc;
    fmt::print("pc:\t" HEX_WORD "\t{}\n", arch_pc, 
            mips_disassemble.get_disassemble(arch_pc,nemu->isa_vaddr_read(arch_pc, 4)));
    nemu->e_protect = false;
    return 0;
}

static int cmd_fin(char* args){
#ifdef CONFIG_DWARF
    step_out();
#else 
    printf("C level debugger not enable, please first enable it by \"make memuconfig\"\n");
#endif 
    return 0;
}

static int cmd_l(char *args){
#ifdef CONFIG_DWARF
    unsigned up = 5, down = 5;
    bool legal_arg = true;
    if (args) legal_arg = sscanf(args, "%d %d",&up, &down)==2;
    if (legal_arg) mips_dwarf.print_src_blk_at(nemu->inst_state.pc, up, down);
    else print_description("l");
#else 
    printf("C level debugger not enable, please first enable it by \"make memuconfig\"\n");
#endif 
    return 0;
}

static struct {/*{{{*/
  const char *name;
  const char *description;
  int (*handler) (char *);
} /*}}}*/
cmd_table [] = {/*{{{*/
    { "w",    "add watchpoint by \"w [expressions]\"",                      cmd_w   },
    { "d",    "delete watchpoint/break with number by \"d [number]\"",      cmd_d   },
    { "info", "print registers by \"info r\" and watchpoint by \"info w\"", cmd_info},  
    { "x",    "check memory by \"x [size] [addr]\"",                        cmd_x   },  
    { "c",    "Continue the execution of the program",                      cmd_c   },
    { "p",    "print expressions value",                                    cmd_p   },
    { "pi",   "print last instruction",                                     cmd_pi  },
    { "bt",   "print function call stack",                                  cmd_bt  },
    { "q",    "Exit NEMU",                                                  cmd_q   },
    { "si",   "run program with instruction by \"si [step]\"",              cmd_si  },  
    { "s",    "run into function or next line by \"s [step]\"",             cmd_s   },  
    { "n",    "run to next line of src by \"n [step]\"",                    cmd_n   },  
    { "b",    "set break point by \"b [addr]|[function name]\"",            cmd_b   },  
    { "fin",  "return current function by \"fin\"",                         cmd_fin },  
    { "l",    "list source code arrounded by \"l [up] [down]\"",            cmd_l   },  
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

void sdb_mainloop() {/*{{{*/
    extern bool arg_batch_mode;
    if (arg_batch_mode) {
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
    using_history();
    read_history_range ("./.nemu_history", 0, -1);
    /* Compile the regular expressions. */
    init_regex();

    /* Initialize the watchpoint pool. */
    init_wp_pool();
}/*}}}*/
