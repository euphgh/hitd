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

#include <memory/host.h>
#include <memory/paddr.h>
#include <isa.h>
#include "diff_proj/paddr_top.h"
#include "utils.h"
#include "mytrace.h"

#ifndef CONFIG_NSC_DIFF
#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

paddr_t host_to_guest(uint8_t *haddr) { return haddr - pmem + CONFIG_MBASE; }

static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}
void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]", PMEM_LEFT, PMEM_RIGHT);
}
#endif

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu.pc);
}



extern void* nemu_paddr_top;
word_t paddr_read(paddr_t addr, int len) {
#ifdef CONFIG_NSC_DIFF
    word_t data;
    wen_t info = {
        .size = len,
        .wstrb = len>>4,
    };
    bool res = paddr_do_read(nemu_paddr_top, addr, info, &data);
    printf("res is %d\n",res);
    if (!res) out_of_bound(addr);
    return data;
#else
    if (likely(in_pmem(addr))) {
        word_t value = pmem_read(addr, len);
        IFDEF(CONFIG_MTRACE,read_mtrace(len,addr,value));
        return value;
    }
    IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
    out_of_bound(addr);
    return 0;
#endif
}

void paddr_write(paddr_t addr, int len, word_t data) {
#ifdef CONFIG_NSC_DIFF
    wen_t info = {
        .size = len,
        .wstrb = len>>4,
    };
    bool res = paddr_do_write(nemu_paddr_top, addr, info, data);
    if (!res) out_of_bound(addr);
    return;
#else
    if (likely(in_pmem(addr))) {
        IFDEF(CONFIG_MTRACE,write_mtrace(len,addr,data));
        pmem_write(addr, len, data); 
        return; 
    }
    IFDEF(CONFIG_DEVICE, mmio_write(addr, len, data); return);
    out_of_bound(addr);
#endif
}
