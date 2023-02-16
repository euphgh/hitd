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

#include "common.hpp"
#include "debug.hpp"
#include "nemu/memory/vaddr.hpp"
#include <nemu/isa.hpp>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum {/*{{{*/
    TK_NOTYPE = 256, 
    //number{{{
    TK_ONUM,
    TK_HNUM,/*}}}*/
    //operator{{{
    TK_PLUS,
    TK_MINU,
    TK_MULT,
    TK_DIVI,/*}}}*/
    // parentheses{{{
    TK_OPEN,
    TK_CLOSE,/*}}}*/
    // dereference{{{
    TK_DEREF,/*}}}*/
    //logic{{{
    TK_EQ,
    TK_NOTEQ,
    TK_AND,
    TK_OR,/*}}}*/
    //register{{{
    TK_REGS/*}}}*/
  /* TODO: Add more token types */
};/*}}}*/

static struct rule {/*{{{*/
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */
    {" +",  TK_NOTYPE},     // spaces
    {"\\$[0-9A-Za-z]+",TK_REGS},
    {"[1-9][0-9]*u?",TK_ONUM},
    {"0[xX][0-9a-fA-F]+u?",TK_HNUM},
    {"\\+", TK_PLUS},       // plus
    {"-",   TK_MINU},       // minus
    {"\\*", TK_MULT},       // multi
    {"\\/", TK_DIVI},       // divide
    {"\\(", TK_OPEN},       // (
    {"\\)", TK_CLOSE},      // )
    {"==",  TK_EQ},         // equal
    {"!=",  TK_NOTEQ},      // not equal
    {"&&",  TK_AND},        // and
    {"\\|\\|",  TK_OR},     // or
};/*}}}*/
#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {/*{{{*/
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}/*}}}*/

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[1024] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {/*{{{*/
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;
        __ASSERT_NEMU__(substr_len<32, "token \"%.*s\"'s width is %d, greater than 32!",substr_len,substr_start,substr_len);

        // Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
        //     i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        int token_type = rules[i].token_type;
        switch (rules[i].token_type) {
            case TK_NOTYPE:  
                break;
            case TK_MULT:
                if (nr_token==0){
                    token_type = TK_DEREF;
                    // Log("change TK_MULT to TK_DEREF for \"%.*s\"",substr_len,substr_start);
                }
                else {
                    int pre_type = tokens[nr_token-1].type;
                    bool is_num = (pre_type==TK_ONUM) || (pre_type==TK_HNUM) ;
                    bool is_close = pre_type==TK_CLOSE;
                    token_type = (is_num || is_close) ? TK_MULT : TK_DEREF;
                    // Log("change TK_MULT to TK_DEREF for \"%.*s\"",substr_len,substr_start);
                }
            default:    
                tokens[nr_token].type = token_type;
                memcpy(tokens[nr_token].str, substr_start, substr_len);
                tokens[nr_token].str[substr_len]='\0';
                nr_token++;
                break;
        }
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}/*}}}*/

static bool match_parentheses(uint8_t p, uint8_t q){/*{{{*/
    int8_t count = 0;
    while (p <= q) {
        switch (tokens[p].type) {
            case TK_OPEN:   count++;break;
            case TK_CLOSE:  count--;break;
            default:        break;
        }
        if (count<0) break;
        p++;
    }
    return p > q;
}/*}}}*/
static bool surround_by_parentheses(uint8_t p, uint8_t q){/*{{{*/
    bool has_more = (p + 1) < q;
    bool has_parentheses = (tokens[p].type==TK_OPEN) && (tokens[q].type==TK_CLOSE);
    return match_parentheses(p+1, q-1) && has_more && has_parentheses;
}/*}}}*/
/**
 * p is begin and q is end element
 */
static word_t eval(uint8_t p, uint8_t q, bool* success){/*{{{*/
    word_t res = 0;
    if (p > q) {
        *success = false;
    }
    else if (p == q) {
        /* Single token.
         * For now this token should be a number.
         * Return the value of the number.
         */
        char pattern[4] = {0};
        bool is_reg = false;
        switch (tokens[p].type) {
            case TK_HNUM: strcpy(pattern, "%x");break;
            case TK_ONUM: strcpy(pattern, "%u");break;
            case TK_REGS: is_reg = true; break;
            default: *success = false;break;
        }
        if (*success) {
            if (!is_reg) sscanf(tokens[p].str, pattern, &res);
            else res = nemu->isa_reg_str2val((tokens[p].str)+1, success);
        }
    }
    else if (surround_by_parentheses(p, q) == true) {
        /* The expression is surrounded by a matched pair of parentheses.
         * If that is the case, just throw away the parentheses.
         */
        return eval(p + 1, q - 1,success);
    }
    else {
        // op = the position of 主运算符 in the token expression;
        uint8_t op = q; 
        uint8_t temp = q;
        int8_t count = 0;
        uint8_t priority = 255;// {mult:2,divi:2,add:1,minu:1}
        while (1) {
            uint8_t new_priority = 255;
            switch (tokens[temp].type) {
                case TK_OPEN:   count++;break;
                case TK_CLOSE:  count--;break;
                case TK_DEREF:  if (count==0) new_priority = 6; break;
                case TK_DIVI:
                case TK_MULT:   if (count==0) new_priority = 5; break;
                case TK_PLUS:
                case TK_MINU:   if (count==0) new_priority = 4; break;
                case TK_EQ:
                case TK_NOTEQ:  if (count==0) new_priority = 3; break;
                case TK_AND:    if (count==0) new_priority = 2; break;
                case TK_OR:     if (count==0) new_priority = 1; break;
                default:        break;
            }
            if (new_priority<priority){
                priority = new_priority;
                op = temp;
            }
            if (p==temp--) break;
        }
        word_t val1 = 0;
        if (tokens[op].type==TK_DEREF) {
            __ASSERT_NEMU__(op==p, "dereference operator panic!!!");
        }
        else {
            val1 = eval(p, op - 1,success);
        }
        word_t val2 = eval(op + 1, q,success);

        switch (tokens[op].type) {
            case TK_PLUS: res = val1 +  val2;break;
            case TK_MINU: res = val1 -  val2;break;
            case TK_MULT: res = val1 *  val2;break;
            case TK_DIVI: res = val1 /  val2;break;
            case TK_AND : res = val1 && val2;break;
            case TK_OR  : res = val1 || val2;break;
            case TK_EQ  : res = val1 == val2;break;
            case TK_NOTEQ:res = val1 != val2;break;
            case TK_DEREF:res = vaddr_read(val2, 8);break;
            default: __ASSERT_NEMU__(0, "main operator \"%s\" type is not legal",tokens[op].str);break;
        }
    }
    return res;
}/*}}}*/

word_t expr(char *e, bool *success) {/*{{{*/
    if (!make_token(e)) {
        *success = false;
        return 0;
    }
    *success = match_parentheses(0, nr_token-1);
    word_t res = 0;
    if (*success) res = eval(0, nr_token-1,success);
    return res;
}/*}}}*/
