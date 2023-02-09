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

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <sys/types.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
#define MYMAXLEN 65536
static char buf[MYMAXLEN] = {};
static uint32_t pointer = 0;
static char code_buf[MYMAXLEN + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";
static uint32_t choose(int32_t n){/*{{{*/
    return rand()%n;
}/*}}}*/
static uint32_t range(uint32_t head, uint32_t tail){/*{{{*/
    return choose(tail - head) + head;
}/*}}}*/
static char gen_hex_char(){/*{{{*/
    char res = 0;
    switch (choose(3)) {
        case 0: 
            res = range(48, 58);
            break;
        case 1: 
            res = range(65,71);
            break;
        default:
            res = range(97, 103);
            break;
    }
    return res;
}/*}}}*/
static void add_space(int32_t num){/*{{{*/
    for (uint32_t i = 0; i < num; i++) {
        buf[pointer++]=' ';
    }
}/*}}}*/
static void gen_num(int32_t width){/*{{{*/
    assert(width>0);
    if (width>10) width = 10;
    bool hex_ok = width > 2;
    if (choose(2) && hex_ok){
        uint8_t numlen = width-2;
        buf[pointer++] = '0';
        buf[pointer++] = 'x';
        for (uint8_t i = 0; i < choose(numlen)+1; i++) {
            buf[pointer++] = gen_hex_char();
        }
    }
    else {
        buf[pointer++] = range(49, 58);
        for (uint8_t i = 0; i < choose(width-1)+1; i++) {
            buf[pointer++] = range(48, 58);
        }
    }
    buf[pointer++] = 'u';
}/*}}}*/
static char gen_rand_op(){/*{{{*/
    char res = '\0';
    switch (choose(4)) {
        case 0:    
            res = '*';
            break;
        case 1:    
            res = '/';
            break;
        case 2:
            res = '-';
            break;
        default:
            res = '+';
            break;
    }
    return res;
}/*}}}*/
static void gen_rand_expr(int32_t maxlen) {/*{{{*/
    assert(maxlen>0);
    uint32_t path = (maxlen>10) ? choose(3) : 2;
    switch (path) {
        case 0: 
            gen_rand_expr((maxlen-5)>>1); 
            add_space(1);
            buf[pointer++] = gen_rand_op(); 
            add_space(choose(2));
            gen_rand_expr((maxlen-5)>>1); 
            break;
        case 1:
            buf[pointer++] = '(';
            add_space(choose(2));
            gen_rand_expr(maxlen-4); 
            add_space(choose(2));
            buf[pointer++] = ')';
            break;
        default: 
            gen_num(maxlen); 
            break;
    }
}/*}}}*/

int main(int argc, char *argv[]) {/*{{{*/
    // int seed = time(0);
    int seed = 0;
    srand(seed);
    int loop = 1;
    if (argc > 1) {
        sscanf(argv[1], "%d", &loop);
    }
    int i;
    for (i = 0; i < loop; i ++) {
        memset(buf, 0, MYMAXLEN);
        pointer = 0;
        gen_rand_expr(MYMAXLEN);

        sprintf(code_buf, code_format, buf);

        FILE *fp = fopen("/tmp/.code.c", "w");
        assert(fp != NULL);
        fputs(code_buf, fp);
        fclose(fp);

        int ret = system("gcc -w /tmp/.code.c -o /tmp/.expr");
        if (ret != 0) continue;

        fp = popen("/tmp/.expr", "r");
        assert(fp != NULL);

        int result;
        ret = fscanf(fp, "%d", &result);
        if (ret!=1) {i--;continue;}
        pclose(fp);

        printf("%u %s\n", result, buf);
    }
    return 0;
}/*}}}*/
