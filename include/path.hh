#ifndef __PATH_HH_
#define __PATH_HH_
#define __FUNC_DIR__  "./test/func/"
#define __PERF_DIR__  "./test/perf/"
#define __SYST_DIR__  "./test/system/"
#define __UBOOT_DIR__ "./test/uboot/"
#define __LINUX_DIR__ "./test/linux/"

#define __FUNC_BIN__ __FUNC_DIR__ "main.bin"
#define __PERF_BIN__ __PERF_DIR__ "inst_data.bin"
#define __SYST_BIN__ __SYST_DIR__ "kernel.bin"
#define __UBOOT_BIN__ __UBOOT_DIR__ "u-boot.bin"
#define __LINUX_BIN__ __LINUX_DIR__ "vmlinux.bin"

#define __FUNC_ELF__ __FUNC_DIR__ "main.elf"  
#define __PERF_ELF__ __PERF_DIR__ "main.elf"  
#define __SYST_ELF__ __SYST_DIR__ "kernel.elf"
#define __UBOOT_ELF__ __UBOOT_DIR__ "u-boot"
#define __LINUX_ELF__ __LINUX_DIR__ "vmlinux"

#define __FUNC_GTC__ __FUNC_DIR__ "golden_trace.txt"

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
#endif
