#include "soc.hpp"
#include <tuple>

#define __FUNC_BIN__ NSCSCC_HOME "/func_test_v0.01/soft/func/obj/main.bin"
#define __PERF_BIN__ NSCSCC_HOME "/perf_test_v0.01/soft/perf_func/obj/allbench/inst_data.bin"
#define __SYST_BIN__  NSCSCC_HOME "/system_test_v0.01/supervisor-mips32/kernel/kernel.bin"

//TODO:input uboot ucore and linux path
#define __UBOOT_BIN__ "current no uboot bin" 
#define __LINUX_BIN__ "current no linux bin"
#define __UCORE_BIN__ "current no ucore bin"

static std::map<int, const char*> name_to_bin = {
    std::make_pair(TEST_NAME_FUNC, __FUNC_BIN__ ),
    std::make_pair(TEST_NAME_PERF, __PERF_BIN__ ),
    std::make_pair(TEST_NAME_SYST, __SYST_BIN__ ),
    std::make_pair(TEST_NAME_UBOOT, __UBOOT_BIN__ ),
    std::make_pair(TEST_NAME_UCORE, __UCORE_BIN__ ),
    std::make_pair(TEST_NAME_LINUX, __LINUX_BIN__ ),
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
static PaddrTop* boot_soc(int test_code) {/*{{{*/
    AddrIntv flash_range(0x1fc00000, bit_mask(20));
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
    return top;
}/*}}}*/
static PaddrTop* kernel_soc(int test_code) {/*{{{*/
    AddrIntv ddr_range  (0x00000000, bit_mask(27));
    AddrIntv uart_range (0x1fe40000, bit_mask(14));

    Puart8250* uart = new Puart8250();
    Pmem* dram = new Pmem(ddr_range);
    dram->load_binary(0, name_to_bin[test_code]);

    PaddrTop* top = new PaddrTop();
    top->add_dev(ddr_range, dram);
    top->add_dev(uart_range, uart);
    return top;
}/*}}}*/


dual_soc::dual_soc(int test_code) {/*{{{*/
    switch (test_code) {
        case TEST_NAME_FUNC:
        case TEST_NAME_PERF: 
            create_basic_soc(test_code);
            break;
        case TEST_NAME_SYST:
        case TEST_NAME_UBOOT:
            create_boot_soc(test_code);
            break;
        case TEST_NAME_UCORE:
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
    pcfreg[DUT]->set_difftest_mode(PaddrConfreg::NEG_MODE, nullptr);
    pcfreg[REF]->set_difftest_mode(PaddrConfreg::POS_MODE, &pcfreg[DUT]->uart_queue);
}/*}}}*/
void dual_soc::create_boot_soc(int test_code){/*{{{*/
    has_confreg = false;
    pcfreg[0] = pcfreg[1] = nullptr;
    for (size_t i = 0; i < 2; i++) {
        ptop[i] = boot_soc(test_code);
    }
}/*}}}*/
void dual_soc::create_kernel_soc(int test_code){/*{{{*/
    has_confreg = false;
    pcfreg[0] = pcfreg[1] = nullptr;
    for (size_t i = 0; i < 2; i++) {
        ptop[i] = kernel_soc(test_code);
    }
}/*}}}*/


single_soc::single_soc(int test_code) {/*{{{*/
    switch (test_code) {
        case TEST_NAME_FUNC:
        case TEST_NAME_PERF: 
            create_basic_soc(test_code);
            break;
        case TEST_NAME_SYST:
        case TEST_NAME_UBOOT:
            create_boot_soc(test_code);
            break;
        case TEST_NAME_UCORE:
        case TEST_NAME_LINUX:
            create_kernel_soc(test_code);
            break;
        default:
            Assert(0, "Not support TEST_NAME %d", test_code);
    }
}/*}}}*/
void single_soc::create_basic_soc(int test_code){/*{{{*/
    std::tie(ptop, pcfreg) = basic_soc(test_code);
    pcfreg->set_difftest_mode(PaddrConfreg::NOR_MODE, nullptr);
}/*}}}*/
void single_soc::create_boot_soc(int test_code){/*{{{*/
    pcfreg = nullptr;
    ptop = boot_soc(test_code);
}/*}}}*/
void single_soc::create_kernel_soc(int test_code){/*{{{*/
    pcfreg = nullptr;
    ptop = kernel_soc(test_code);
}/*}}}*/
