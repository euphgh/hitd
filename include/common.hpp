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

#ifndef __COMMON_H__
#define __COMMON_H__

#include <cstdint>
#include <cinttypes>
#include <cstdbool>
#include <cstring>
#include <cstdio>
#include <generated/autoconf.h>
#include <macro.hpp>

typedef MUXDEF(CONFIG_ISA64, uint64_t, uint32_t) word_t;
typedef MUXDEF(CONFIG_ISA64, int64_t, int32_t)  sword_t;
#define FMT_WORD MUXDEF(CONFIG_ISA64, "0x%016" PRIx64, "0x%08" PRIx32)
#define FMT_WORD_X MUXDEF(CONFIG_ISA64, "0x%016" PRIx64, "0x%08" PRIx32)
#define FMT_WORD_U MUXDEF(CONFIG_ISA64, "%20" PRIu64, "%12" PRIu32)
#define FMT_WORD_D MUXDEF(CONFIG_ISA64, "%20" PRId64, "%12" PRId32)

#define HEX_WORD "{:#010x}"

typedef word_t vaddr_t;
typedef MUXDEF(PMEM64, uint64_t, uint32_t) paddr_t;
#define FMT_PADDR MUXDEF(PMEM64, "0x%016" PRIx64, "0x%08" PRIx32)
enum {
    TEST_NAME_NON,
    TEST_NAME_FUNC,
    TEST_NAME_PERF,
    TEST_NAME_SYST,
    TEST_NAME_UBOOT,
    TEST_NAME_UCORE,
    TEST_NAME_LINUX
};

#define __FUNC_DIR__ NSCSCC_HOME "/func_test_v0.01/soft/func/obj/"
#define __PERF_DIR__ NSCSCC_HOME "/perf_test_v0.01/soft/perf_func/obj/allbench/"
#define __SYST_DIR__ NSCSCC_HOME "/system_test_v0.01/supervisor-mips32/kernel/kernel.bin"
#define __UBOOT_DIR__ "/home/hgh/cpu/cyy/u-boot/" 
#define __LINUX_DIR__ "/home/hgh/cpu/cyy/linux/"
// #define __LINUX_DIR__ "/home/hgh/cpu/nscscc2021_group_v0.01/soc_run_os_v0.01/soc_up/pmon_and_linux/linux-2.6.32/"
#define __UCORE_DIR__ "current no ucore bin"

#define __FUNC_BIN__ __FUNC_DIR__ "main.bin"
#define __PERF_BIN__ __PERF_DIR__ "inst_data.bin"
#define __SYST_BIN__ __SYST_DIR__ "kernel.bin"
#define __UBOOT_BIN__ __UBOOT_DIR__ "u-boot.bin"
#define __LINUX_BIN__ "/home/hgh/cpu/cyy/cyy_vmlinux.bin"
// #define __LINUX_BIN__ __LINUX_DIR__ "vmlinux.bin"

#define __FUNC_ELF__ __FUNC_DIR__ "main.elf"  
#define __PERF_ELF__ __PERF_DIR__ "main.elf"  
#define __SYST_ELF__ __SYST_DIR__ "kernel.elf"
#define __UBOOT_ELF__ __UBOOT_DIR__ "u-boot"   
#define __LINUX_ELF__ __LINUX_DIR__ "vmlinux"  

#define __TEST_BIN__ \
    MUXDEF(CONFIG_TEST_FUNC, __FUNC_BIN__, \
            MUXDEF(CONFIG_TEST_PERF, __PERF_BIN__, \
                MUXDEF(CONFIG_TEST_SYST, __SYST_BIN__,  \
                    MUXDEF(CONFIG_TEST_UBOOT, __UBOOT_BIN__,\
                        MUXDEF(CONFIG_TEST_LINUX, __LINUX_BIN__, "Non bin")))))

#define __TEST_ELF__ \
    MUXDEF(CONFIG_TEST_FUNC, __FUNC_ELF__, \
            MUXDEF(CONFIG_TEST_PERF, __PERF_ELF__, \
                MUXDEF(CONFIG_TEST_SYST, __SYST_ELF__,  \
                    MUXDEF(CONFIG_TEST_UBOOT, __UBOOT_ELF__,\
                        MUXDEF(CONFIG_TEST_LINUX, __LINUX_ELF__, "Non elf")))))

#include "debug.hpp"

#endif
