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
#include "diff_proj/paddr_top.h"
#include <common.h>
#include "nemu_proj/difftest-ref.hh"
#include "debug.h"
#ifndef CONFIG_NSC_DIFF
void init_monitor(int, char *[]);
void am_init_monitor();
void engine_start();
int is_exit_status_bad();
word_t expr(char *e, bool *success);

int main(int argc, char *argv[]) {
  /* Initialize the monitor. */
#ifdef CONFIG_TARGET_AM
  am_init_monitor();
#else
  init_monitor(argc, argv);
#endif
  /* Start engine. */
  engine_start();

  return is_exit_status_bad();
}
#else 
#include <getopt.h>
FILE * golden_trace;
void compare (debug_info_t *debug){
    if (debug->wen != 0 && debug->wnum != 0) {
        debug_info_t ref;
        unsigned int check;
        unsigned int wnum;
        int res = fscanf(golden_trace, "%u %x %x %x",&check,&ref.pc,&wnum,&ref.wdata);
        Assert(res==4, "file read error");
        if (!check) return;
        ref.wnum = wnum;
        if ((debug->pc != ref.pc) || (debug->wnum != ref.wnum) || (debug->wdata != ref.wdata)) {
            Assert(((debug->pc == ref.pc) && (debug->wnum == ref.wnum) && (debug->wdata == ref.wdata)), \
                    "Error!!!\n"  \
                    "    mycpu    : PC = 0x%8x, wb_wnum = 0x%2x, wb_wdata = 0x%8x\n"  \
                    "    reference: PC = 0x%8x, wb_wnum = 0x%2x, wb_wdata = 0x%8x\n", \
                    debug->pc, debug->wnum, debug->wdata, ref.pc, ref.wnum, ref.wdata
                    );
        }
    }
}
static char *log_file = NULL;
const struct option table[] = {
    {"log"      , required_argument, NULL, 'l'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {0          , 0                , NULL,  0 },
};
#include "cpu/cpu.h"
int main (int argc, char *argv[]){
    int o;
    while ( (o = getopt_long(argc, argv, "-bhl:d:p:", table, NULL)) != -1) {
        switch (o) {
            case 'l': log_file = optarg; break;
            default:
                      printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
                      printf("\t-l,--log=FILE           output log to FILE\n");
                      printf("\n");
                      exit(0);
        }
    }
    ref_init(new_paddr_top(),log_file);
    golden_trace = fopen("/home/hgh/code/nscscc-group/func_test_v0.01/cpu132_gettrace/golden_trace.txt","r+");
    Assert(golden_trace!=0, "can not open golden_trace");
    bool res = true;
    do {
        ref_tick_int(0);
        res = ref_exec_once(0);
        debug_info_t debug;
        ref_get_debug_info(&debug);
        if (debug.pc==0xbfc00100){
            Log("Run to end PC!");
            exit(0);
        }
        compare(&debug);
    } while(res);
    return 0;
}
#endif /* !CONFIG_NSC_DIFF */
