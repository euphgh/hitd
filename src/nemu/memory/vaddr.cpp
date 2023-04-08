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

#include "cp0.hpp"
#include "nemu/memory/paddr.hpp"
#include <nemu/isa.hpp>
#include <paddr/nemu_paddr.hpp>

word_t CPU_state::vaddr_ifetch(vaddr_t addr, int len) {
    word_t paddr = addr & 0x1fffffff;
    bool refill = false;
    switch (mmu_check(addr)) {
        case MMU_DIRECT:
            paddr = addr & 0x1fffffff;
            break;
        case MMU_TRANSLATE:
            if (mmu_translate(addr,paddr,refill).hit==false) 
                isa_raise_intr(EC_TLBL, addr, refill);
            break;
        case MMU_FAIL:
            isa_raise_intr(EC_AdEL, addr);
            break;
    }
    //TODO: Bus Error Exception
    return paddr_read(paddr, len);
}

word_t CPU_state::vaddr_read(vaddr_t addr, int len) {
    word_t paddr = addr & 0x1fffffff;
    bool refill = false;
    switch (mmu_check(addr)) {
        case MMU_DIRECT:
            paddr = addr & 0x1fffffff;
            break;
        case MMU_TRANSLATE:
            if (mmu_translate(addr,paddr,refill).hit==false) 
                isa_raise_intr(EC_TLBL, addr, refill);
            break;
        case MMU_FAIL:
            isa_raise_intr(EC_AdEL, addr);
            break;
    }
    //TODO: Bus Error Exception
    return paddr_read(paddr, len);
}

void CPU_state::vaddr_write(vaddr_t addr, int len, word_t data) {
    word_t paddr = addr & 0x1fffffff;
    bool refill = false;
    switch (mmu_check(addr)) {
        case MMU_DIRECT:
            paddr = addr & 0x1fffffff;
            break;
        case MMU_TRANSLATE:
            if (mmu_translate(addr,paddr,refill).hit==false) 
                isa_raise_intr(EC_TLBS, addr, refill);
            break;
        case MMU_FAIL:
            isa_raise_intr(EC_AdES, addr);
            break;
    }
    //TODO: Bus Error Exception
    paddr_write(paddr, len, data);
}
