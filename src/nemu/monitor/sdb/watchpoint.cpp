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
#include "sdb.hpp"
#include "fmt/core.h"
#include "easylogging++.h"

#define NR_WP 32
typedef struct watchpoint {
    int NO;
    struct watchpoint *next;
    word_t last_value;
    char expression[64];
} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
    int i;
    for (i = 0; i < NR_WP; i ++) {
        wp_pool[i].NO = i;
        wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
    }

    head = NULL;
    free_ = wp_pool;
    LOG(INFO) << "Enable watchpoint in sdb";
}

static WP* malloc_wp(){/*{{{*/
    if (free_==NULL) __ASSERT_NEMU__(0, "no more watchpoint");
    WP* tmp = free_;
    free_ = free_->next;
    tmp->next = head;
    head = tmp;
    return head;
}/*}}}*/
bool new_wp(char* expression){/*{{{*/
    bool success = false;
    word_t value = expr(expression, &success);
    if (success){
        WP* p = malloc_wp();
        memset(p->expression,0,64);
        strcpy(p->expression, expression);
        p->last_value = value;
    }
    return success;
}/*}}}*/
bool free_wp(int number){/*{{{*/
    bool res = false;
    WP *wp = head;
    while (wp!=NULL) {
        if (wp->NO==number) break;
        wp = wp->next;
    }
    if (wp==NULL){
        printf("not any watchpoint's NO is %d\n",number);
    }
    else {
        if (head==wp){
            head = wp->next;
        }
        else {
            WP* tmp = head;
            while (tmp->next!=wp) {
                tmp = tmp->next;
            }
            tmp->next = wp->next;
        }
        wp->next = free_;
        free_ = wp;
        res = true;
    }
    return res;
}/*}}}*/
bool is_wp_change(){/*{{{*/
    bool is_change = false;
    WP* tmp = head;
    while (tmp!=NULL) {
        bool success = false;
        word_t new_value = expr(tmp->expression, &success);
        __ASSERT_NEMU__(success, "fail to calculate \"%s\"\n",tmp->expression);
        if (new_value!=tmp->last_value){
            printf("Hardware watchpoint %d: %s\n",tmp->NO,tmp->expression);
            printf("\n");
            printf("Old value = " FMT_WORD_U "\n",tmp->last_value);
            printf("New value = " FMT_WORD_U "\n",new_value);
            printf("\n");
            tmp->last_value = new_value;
            is_change = true;
        }
        tmp = tmp->next;
    }
    return is_change;
}/*}}}*/
void print_wp_info(){
    WP* tmp = head;
    if (tmp!=NULL){
        printf("%8s\t%16s\t%10s\t%12s\n","Num", "Expression", "Hexadecimal", "Decimal");
        while (tmp!=NULL) {
            printf("%8d\t%16s\t" FMT_WORD "\t" FMT_WORD_U "\n",tmp->NO,tmp->expression,tmp->last_value,tmp->last_value);
            tmp = tmp->next;
        }
    }
    else {
        printf("No watchpoints.\n");
    }
}
