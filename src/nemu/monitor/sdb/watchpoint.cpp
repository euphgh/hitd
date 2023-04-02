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
#include "nemu/isa.hpp"
#include "sdb.hpp"
#include "fmt/core.h"
#include "easylogging++.h"

#define NR_WP 64
struct debug_point {
    int NO;
    debug_point* next;
    bool is_break;
    union {
        struct {
            word_t last_value;
            char expression[64];
        } wp;
        struct {
            word_t addr;
            char name[64];
        } bp;
    } info;
};

static debug_point wp_pool[NR_WP] = {};
static debug_point *head = NULL, *free_ = NULL;

void init_wp_pool() {/*{{{*/
    int i;
    for (i = 0; i < NR_WP; i ++) {
        wp_pool[i].NO = i;
        wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
    }

    head = NULL;
    free_ = wp_pool;
    LOG(INFO) << "Enable watchpoint in sdb";
}/*}}}*/

static debug_point* malloc_wp(){/*{{{*/
    if (free_==NULL) __ASSERT_NEMU__(0, "no more watchpoint");
    debug_point* tmp = free_;
    free_ = free_->next;
    tmp->next = head;
    head = tmp;
    return head;
}/*}}}*/

bool new_wp(char* expression){/*{{{*/
    bool success = false;
    word_t value = expr(expression, &success);
    if (success){
        debug_point* p = malloc_wp();
        strcpy(p->info.wp.expression, expression);
        p->info.wp.last_value = value;
        p->is_break = false;
    }
    return success;
}/*}}}*/

bool free_node(int number){/*{{{*/
    bool res = false;
    debug_point *wp = head;
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
            debug_point* tmp = head;
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
    debug_point* tmp = head;
    while (tmp!=NULL) {
        bool success = false;
        if (tmp->is_break)
            is_change = nemu->arch_state.pc==tmp->info.bp.addr;
        else {
            word_t new_value = expr(tmp->info.wp.expression, &success);
            __ASSERT_NEMU__(success, "fail to calculate \"%s\"\n",tmp->info.wp.expression);
            if (new_value!=tmp->info.wp.last_value){
                printf("Hardware watchpoint %d: %s\n",tmp->NO,tmp->info.wp.expression);
                printf("\n");
                printf("Old value = " FMT_WORD_U "\n",tmp->info.wp.last_value);
                printf("New value = " FMT_WORD_U "\n",new_value);
                printf("\n");
                tmp->info.wp.last_value = new_value;
                is_change = true;
            }
        }
        tmp = tmp->next;
    }
    return is_change;
}/*}}}*/

void print_wp_info(){/*{{{*/
    debug_point* tmp = head;
    if (tmp!=NULL){
        printf("%8s\t%16s\t%10s\t%12s\n","Num", "Expr/Name", "Hex/Address", "Decimal");
        while (tmp!=NULL) {
            if (tmp->is_break)
                printf("%8d\t%16s\t" FMT_WORD "\t" "\n",
                        tmp->NO, tmp->info.bp.name[0] ? tmp->info.bp.name : "addr break",tmp->info.bp.addr);
            else 
                printf("%8d\t%16s\t" FMT_WORD "\t" FMT_WORD_U "\n",
                        tmp->NO,tmp->info.wp.expression,tmp->info.wp.last_value,tmp->info.wp.last_value);
            tmp = tmp->next;
        }
    }
    else {
        printf("No watchpoints.\n");
    }
}/*}}}*/

bool new_br(word_t br_pc, const char* info){/*{{{*/
    bool success = true;
    if (br_pc==nemu->arch_state.pc){
        fmt::print(ANSI_FMT("fail to break, the next pc is break pc", ANSI_FG_YELLOW));
        success = false;
    }
    if (success){
        debug_point* p = malloc_wp();
        strcpy(p->info.bp.name, info);
        p->info.bp.addr = br_pc;
        p->is_break = true;
    }
    return success;
}/*}}}*/
