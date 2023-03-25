#include "soc.hpp"
#include "debug.hpp"
#include "macro.hpp"
#include "utils.hpp"
#include <cstdio>
#include "nemu/mytrace.hpp"
#include <fmt/core.h>
#include <tuple>

#define __FUNC_DIR__ NSCSCC_HOME "/func_test_v0.01/soft/func/obj/"
#define __PERF_DIR__ NSCSCC_HOME "/perf_test_v0.01/soft/perf_func/obj/allbench/"
#define __SYST_DIR__  NSCSCC_HOME "/system_test_v0.01/supervisor-mips32/kernel/kernel.bin"

//TODO:input uboot ucore and linux path
#define __UBOOT_DIR__ "/home/hgh/cpu/cyy/u-boot/" 
#define __LINUX_DIR__ "/home/hgh/cpu/cyy/linux/"
#define __UCORE_DIR__ "current no ucore bin"

static std::map<int, const char*> name_to_bin = {
    std::make_pair(TEST_NAME_FUNC, __FUNC_DIR__ "main.bin"),
    std::make_pair(TEST_NAME_PERF, __PERF_DIR__ "inst_data.bin"),
    std::make_pair(TEST_NAME_SYST, __SYST_DIR__ "kernel.bin"),
    std::make_pair(TEST_NAME_UBOOT, __UBOOT_DIR__ "u-boot.bin"),
    std::make_pair(TEST_NAME_LINUX, __LINUX_DIR__ "vmlinux.bin"),
    // std::make_pair(TEST_NAME_UCORE, __UCORE_DIR__ ),
};

static std::map<int, const char*> name_to_elf = {
    std::make_pair(TEST_NAME_FUNC, __FUNC_DIR__ "main.elf"),
    std::make_pair(TEST_NAME_PERF, __PERF_DIR__ "main.elf"),
    std::make_pair(TEST_NAME_SYST, __SYST_DIR__ "kernel.elf"),
    std::make_pair(TEST_NAME_UBOOT, __UBOOT_DIR__ "u-boot"),
    std::make_pair(TEST_NAME_LINUX, __LINUX_DIR__ "vmlinux"),
    // std::make_pair(TEST_NAME_UCORE, __UCORE_DIR__ ),
};



static std::tuple<PaddrTop*, PaddrConfreg*> basic_soc(int test_code){/*{{{*/
    AddrIntv s0_24_range = AddrIntv(0x0,bit_mask(24));
    AddrIntv inst_range = AddrIntv(0x1fc00000,bit_mask(22));
    AddrIntv confreg_range = AddrIntv(0x1faf0000,bit_mask(16));

    /* new inst and data mem from 0x0 */
    Pmem* s0_mem = new Pmem(s0_24_range);
    s0_mem->load_binary(0,name_to_bin[test_code]);

    /* map inst mem to 0x1fc00000 */
    Pmem* inst_mem = new Pmem(inst_range, s0_mem->get_mem_ptr());

    /* new nscscc confreg */
    PaddrConfreg* confreg = new PaddrConfreg(true);

    PaddrTop* top = new PaddrTop();
    top->add_dev(inst_range, inst_mem);
    top->add_dev(s0_24_range, s0_mem);
    top->add_dev(confreg_range, confreg);
    return std::make_tuple(top, confreg);
}/*}}}*/
static std::tuple<PaddrTop*, Puart8250*> boot_soc(int test_code) {/*{{{*/
    AddrIntv flash_range(0x1fc00000, bit_mask(21));
    AddrIntv ddr_range  (0x00000000, bit_mask(27));
    AddrIntv uart_range (0x1fe40000, bit_mask(14));

    Puart8250* uart = new Puart8250();
    Pmem* spi_flash = new Pmem(flash_range);
    spi_flash->load_binary(0, name_to_bin[test_code]);
    Pmem* dram = new Pmem(ddr_range);

    PaddrTop* top = new PaddrTop();
    top->add_dev(flash_range, spi_flash);
    top->add_dev(ddr_range, dram);
    top->add_dev(uart_range, uart);
    return std::tie(top,uart);
}/*}}}*/
static std::tuple<PaddrTop*, Puart8250*> kernel_soc(int test_code) {/*{{{*/
    AddrIntv ddr_range  (0x00000000, bit_mask(27));
    AddrIntv uart_range (0x1fe40000, bit_mask(14));

    Puart8250* uart = new Puart8250();
    Pmem* dram = new Pmem(ddr_range);
    dram->load_binary(0, name_to_bin[test_code]);

    PaddrTop* top = new PaddrTop();
    top->add_dev(ddr_range, dram);
    top->add_dev(uart_range, uart);
    return std::tie(top,uart);
}/*}}}*/

dual_soc::dual_soc() {/*{{{*/
    int test_code = TEST_NAME_NON;
    IFDEF(CONFIG_TEST_FUNC, test_code=TEST_NAME_FUNC);
    IFDEF(CONFIG_TEST_PERF, test_code=TEST_NAME_PERF);
    IFDEF(CONFIG_TEST_SYST,  test_code=TEST_NAME_SYST);
    IFDEF(CONFIG_TEST_UBOOT, test_code=TEST_NAME_UBOOT);
    IFDEF(CONFIG_TEST_LINUX, test_code=TEST_NAME_LINUX);
    init_ftrace(name_to_elf.at(test_code));
    switch (test_code) {
        case TEST_NAME_FUNC:
        case TEST_NAME_PERF: 
            create_basic_soc(test_code);
            break;
        case TEST_NAME_SYST:
        case TEST_NAME_UBOOT:
            create_boot_soc(test_code);
            break;
        case TEST_NAME_LINUX:
            create_kernel_soc(test_code);
            break;
        default:
            Assert(0, "Not support TEST_NAME %d", test_code);
    }
}/*}}}*/
void dual_soc::create_basic_soc(int test_code){/*{{{*/
    has_confreg = true;
    for (size_t i = 0; i < 2; i++) {
        std::tie(ptop[i], pcfreg[i]) = basic_soc(test_code);
    }
}/*}}}*/
void dual_soc::create_boot_soc(int test_code){/*{{{*/
    has_confreg = false;
    pcfreg[0] = pcfreg[1] = nullptr;
    for (size_t i = 0; i < 2; i++) {
        std::tie(ptop[i],puart[i]) = boot_soc(test_code);
    }
}/*}}}*/
void dual_soc::create_kernel_soc(int test_code){/*{{{*/
    has_confreg = false;
    pcfreg[0] = pcfreg[1] = nullptr;
    for (size_t i = 0; i < 2; i++) {
        std::tie(ptop[i],puart[i]) = kernel_soc(test_code);
    }
}/*}}}*/


single_soc::single_soc() {/*{{{*/
    int test_code = TEST_NAME_NON;
    IFDEF(CONFIG_TEST_FUNC, test_code=TEST_NAME_FUNC);
    IFDEF(CONFIG_TEST_PERF, test_code=TEST_NAME_PERF);
    IFDEF(CONFIG_TEST_SYST,  test_code=TEST_NAME_SYST);
    IFDEF(CONFIG_TEST_UBOOT, test_code=TEST_NAME_UBOOT);
    IFDEF(CONFIG_TEST_LINUX, test_code=TEST_NAME_LINUX);
    init_ftrace(name_to_elf.at(test_code));
    switch (test_code) {
        case TEST_NAME_FUNC:
        case TEST_NAME_PERF: 
            create_basic_soc(test_code);
            break;
        case TEST_NAME_SYST:
        case TEST_NAME_UBOOT:
            create_boot_soc(test_code);
            break;
        case TEST_NAME_LINUX:
            create_kernel_soc(test_code);
            break;
        default:
            Assert(0, "Not support TEST_NAME %d", test_code);
    }
}/*}}}*/
void single_soc::create_basic_soc(int test_code){/*{{{*/
    std::tie(ptop, pcfreg) = basic_soc(test_code);
}/*}}}*/
void single_soc::create_boot_soc(int test_code){/*{{{*/
    pcfreg = nullptr;
    std::tie(ptop, puart) = boot_soc(test_code);
}/*}}}*/
void single_soc::create_kernel_soc(int test_code){/*{{{*/
    pcfreg = nullptr;
    std::tie(ptop, puart) = boot_soc(test_code);
}/*}}}*/

#define UART_CHAR "'{:c}'({:#x})"

void loop_check(output* dut, output* ref){/*{{{*/
    bool normal = true;
    char ref_c = ref->getc();
    if (ref->exist_tx()) {
        ref->op_log->error("ref output multi-char in a cycle");
        normal = false;
    }
    if (dut->exist_tx()==false) {
        dut->op_log->error(fmt::format("should output " UART_CHAR " but not", ref_c, ref_c));
        normal = false;
    }
    else {
        char dut_c = dut->getc();
        if (dut_c!=ref_c){
            dut->op_log->error(fmt::format("output " UART_CHAR " not equal to ref " UART_CHAR, 
                    dut_c,dut_c,ref_c,ref_c));
            normal = false;
        }
        if (dut->exist_tx()) {
            dut->op_log->error("ref output multi-char in a cycle");
            normal = false;
        }
    }
    if (normal) {
        putchar(ref_c);
        fflush(stdout);
    }
    else nemu_state.state = NEMU_ABORT;
}/*}}}*/

void chech_output(output* dut, output* ref){/*{{{*/
    if (unlikely(ref->exist_tx())) loop_check(dut,ref);
    else if (unlikely(dut->exist_tx())){
            dut->op_log->error(fmt::format("should not output " UART_CHAR,
                dut->getc(),dut->getc()));
            nemu_state.state = NEMU_ABORT;
    }
}/*}}}*/

void dual_soc::tick(){ /*{{{*/
    IFDEF(CONFIG_HAS_CONFREG, pcfreg[DUT]->tick();pcfreg[REF]->tick();)
    IFDEF(CONFIG_HAS_CONFREG, chech_output(pcfreg[DUT], pcfreg[REF]));
    IFDEF(CONFIG_HAS_UART, chech_output(puart[DUT], puart[REF]));
}/*}}}*/
void dual_soc::set_switch(uint8_t value){/*{{{*/
    IFDEF(CONFIG_HAS_CONFREG, pcfreg[0]->set_switch(value); pcfreg[1]->set_switch(value);)
}/*}}}*/
