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
#include "macro.hpp"
#include <nemu/isa.hpp>

CPU_state::mmu_t CPU_state::mmu_check(vaddr_t vaddr){
    mmu_t res = MMU_DIRECT;
    switch (machine_mode()) {
        case KRNL:
            res = (BITS(vaddr, 31, 30)==0x2 || cp0.status.erl) ? 
                MMU_DIRECT : MMU_TRANSLATE;
            break;
        case USER: 
            res = BITS(vaddr, 31, 31) ? MMU_FAIL : MMU_TRANSLATE;
            break;
        default:
            __ASSERT_NEMU__(0, "not expect supervisor mode");
    }
    // __ASSERT_NEMU__(BITS(vaddr, 31, 30)!=0x3, HEX_WORD "not in useg and ", vaddr);
    return res;
}
// Exception not distinguish tlb not match and tlb invalid, can be abstract by refill
tlb_entry* CPU_state::tlb_match(vaddr_t vaddr){
    for (size_t i = 0; i < CONFIG_TLB_NR; i++) {
        tlb_entry* tmp = &tlb[i];
        bool vaddr_hit = tmp->vpn2==BITS(vaddr, 31, 13);
        bool id_hit = tmp->g || (tmp->asid==cp0.entryhi.asid);
        if (vaddr_hit && id_hit) return tmp;
    }
    return nullptr;
}
CPU_state::tlb_info CPU_state::mmu_translate(vaddr_t vaddr, paddr_t& paddr, bool& refill) { 
    tlb_entry* entry = nullptr;
    log_pt->info("use mmu_translate");
    for (size_t i = 0; i < CONFIG_TLB_NR; i++) {
        tlb_entry* tmp = &tlb[i];
        bool vaddr_hit = tmp->vpn2==BITS(vaddr, 31, 13);
        bool id_hit = tmp->g || (tmp->asid==cp0.entryhi.asid);
        if (vaddr_hit && id_hit) {
            entry = tmp;
            break;
        }
    }
    refill = entry==nullptr;
    tlb_info info = {.hit = false};
    if (entry) {
        bool is_odd = BITS(vaddr,12,12);
        info.hit    = is_odd ? entry->v1 : entry->v0;
        info.dirty  = is_odd ? entry->d1 : entry->d0;
        paddr = (vaddr & 0xfff) | ((is_odd ? entry->pfn1 : entry->pfn0) << 12);
    }
    return info;
}
void CPU_state::tlbp(){
    bool not_find = true;
    for (size_t i = 0; i < CONFIG_TLB_NR; i++) {
        tlb_entry* tmp = &tlb[i];
        bool vaddr_hit = tmp->vpn2==cp0.entryhi.vpn2;
        bool id_hit = tmp->g || (tmp->asid==cp0.entryhi.asid);
        if (vaddr_hit && id_hit) {
            cp0.index.index = i;
            break;
            not_find = false;
        }
    }
    cp0.index.p = not_find;
}
//TODO: modify tlb_entry struct for 
//difftest  (fast to build and small size) 
//code      (duplicate code too much)
//run       (fast not bit field)
void CPU_state::tlbr(){
    int tlb_seq = cp0.index.index;
    __ASSERT_NEMU__(tlb_seq < CONFIG_TLB_NR, "tlbwi illegal parameter");
    tlb_entry& entry = tlb[tlb_seq];
    cp0.entryhi.vpn2 = entry.vpn2;
    cp0.entryhi.asid = entry.asid;
    cp0.entrylo0.c = entry.c0;
    cp0.entrylo0.d = entry.d0;
    cp0.entrylo0.v = entry.v0;
    cp0.entrylo0.g = entry.g;
    cp0.entrylo0.pfn = entry.pfn0;
    cp0.entrylo1.c = entry.c1;
    cp0.entrylo1.d = entry.d1;
    cp0.entrylo1.v = entry.v1;
    cp0.entrylo1.pfn = entry.pfn1;
    cp0.entrylo1.g = entry.g;
}
void CPU_state::tlbwi(){
    int tlb_seq = cp0.index.index;
    __ASSERT_NEMU__(tlb_seq < CONFIG_TLB_NR, "tlbwi illegal parameter");
    tlb_entry& entry = tlb[tlb_seq];
    entry.vpn2 = cp0.entryhi.vpn2 ;
    entry.asid = cp0.entryhi.asid ;
    entry.c0 = cp0.entrylo0.c ;
    entry.d0 = cp0.entrylo0.d ;
    entry.v0 = cp0.entrylo0.v ;
    entry.pfn0 = cp0.entrylo0.pfn ;
    entry.c1 = cp0.entrylo1.c ;
    entry.d1 = cp0.entrylo1.d ;
    entry.v1 = cp0.entrylo1.v ;
    entry.pfn1 = cp0.entrylo1.pfn ;
    entry.g = cp0.entrylo0.g && cp0.entrylo1.g;
}
void CPU_state::tlbwr(){
    int tlb_seq = cp0.random.random;
    __ASSERT_NEMU__(tlb_seq < CONFIG_TLB_NR, "tlbwi illegal parameter");
    tlb_entry& entry = tlb[tlb_seq];
    entry.vpn2 = cp0.entryhi.vpn2 ;
    entry.asid = cp0.entryhi.asid ;
    entry.c0 = cp0.entrylo0.c ;
    entry.d0 = cp0.entrylo0.d ;
    entry.v0 = cp0.entrylo0.v ;
    entry.pfn0 = cp0.entrylo0.pfn ;
    entry.c1 = cp0.entrylo1.c ;
    entry.d1 = cp0.entrylo1.d ;
    entry.v1 = cp0.entrylo1.v ;
    entry.pfn1 = cp0.entrylo1.pfn ;
    entry.g = cp0.entrylo0.g && cp0.entrylo1.g;
}   
