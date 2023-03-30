#include "soc.hpp"
#include "debug.hpp"
#include "macro.hpp"
#include "utils.hpp"
#include <cstdio>
#include "nemu/mytrace.hpp"
#include <fmt/core.h>
#include "testbench/sim_state.hpp"

static std::tuple<PaddrTop*, PaddrConfreg*> basic_soc(){/*{{{*/
    AddrIntv s0_24_range = AddrIntv(0x0,bit_mask(24));
    AddrIntv inst_range = AddrIntv(0x1fc00000,bit_mask(22));
    AddrIntv confreg_range = AddrIntv(0x1faf0000,bit_mask(16));

    /* new inst and data mem from 0x0 */
    Pmem* s0_mem = new Pmem(s0_24_range);
    s0_mem->load_binary(0,__TEST_BIN__);

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
static std::tuple<PaddrTop*, Puart8250*> boot_soc() {/*{{{*/
    AddrIntv flash_range(0x1fc00000, bit_mask(21));
    AddrIntv ddr_range  (0x00000000, bit_mask(27));
    AddrIntv uart_range (0x1fe40000, bit_mask(14));

    Puart8250* uart = new Puart8250();
    Pmem* spi_flash = new Pmem(flash_range);
    spi_flash->load_binary(0, __TEST_BIN__);
    Pmem* dram = new Pmem(ddr_range);

    PaddrTop* top = new PaddrTop();
    top->add_dev(flash_range, spi_flash);
    top->add_dev(ddr_range, dram);
    top->add_dev(uart_range, uart);
    return std::tie(top,uart);
}/*}}}*/
static std::tuple<PaddrTop*, Puart8250*> kernel_soc() {/*{{{*/
    AddrIntv ddr_range  (0x00000000, bit_mask(27));
    AddrIntv uart_range (0x1fe40000, bit_mask(14));

    Puart8250* uart = new Puart8250();
    Pmem* dram = new Pmem(ddr_range);
    dram->load_binary(0x00100000, __TEST_BIN__);

    PaddrTop* top = new PaddrTop();
    top->add_dev(ddr_range, dram);
    top->add_dev(uart_range, uart);
    return std::tie(top,uart);
}/*}}}*/

dual_soc::dual_soc() {/*{{{*/
    IFDEF(CONFIG_BASIC_SOC, create_basic_soc());
    IFDEF(CONFIG_BOOT_SOC, create_boot_soc());
    IFDEF(CONFIG_KERNEL_SOC, create_kernel_soc());
}/*}}}*/
void dual_soc::create_basic_soc(){/*{{{*/
    has_confreg = true;
    for (size_t i = 0; i < 2; i++) {
        std::tie(ptop[i], pcfreg[i]) = basic_soc();
    }
}/*}}}*/
void dual_soc::create_boot_soc(){/*{{{*/
    has_confreg = false;
    pcfreg[0] = pcfreg[1] = nullptr;
    for (size_t i = 0; i < 2; i++) {
        std::tie(ptop[i],puart[i]) = boot_soc();
    }
}/*}}}*/
void dual_soc::create_kernel_soc(){/*{{{*/
    has_confreg = false;
    pcfreg[0] = pcfreg[1] = nullptr;
    for (size_t i = 0; i < 2; i++) {
        std::tie(ptop[i],puart[i]) = kernel_soc();
    }
}/*}}}*/


single_soc::single_soc(){
    IFDEF(CONFIG_BASIC_SOC, create_basic_soc());
    IFDEF(CONFIG_BOOT_SOC, create_boot_soc());
    IFDEF(CONFIG_KERNEL_SOC, create_kernel_soc());
}

void single_soc::create_basic_soc(){/*{{{*/
    std::tie(ptop, pcfreg) = basic_soc();
}/*}}}*/
void single_soc::create_boot_soc(){/*{{{*/
    pcfreg = nullptr;
    std::tie(ptop, puart) = boot_soc();
}/*}}}*/
void single_soc::create_kernel_soc(){/*{{{*/
    pcfreg = nullptr;
    std::tie(ptop, puart) = kernel_soc();
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
    IFDEF(CONFIG_NEED_NEMU,else nemu_state.state = NEMU_ABORT);
}/*}}}*/

void chech_output(output* dut, output* ref){/*{{{*/
    if (unlikely(ref->exist_tx())) loop_check(dut,ref);
    else if (unlikely(dut->exist_tx())){
            dut->op_log->error(fmt::format("should not output " UART_CHAR,
                dut->getc(),dut->getc()));
            IFDEF(CONFIG_NEED_,nemu_state.state = NEMU_ABORT);
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
void single_soc::tick(){ /*{{{*/
    IFDEF(CONFIG_HAS_CONFREG, pcfreg->tick();pcfreg->tick();)
    IFDEF(CONFIG_HAS_CONFREG, chech_output(pcfreg, pcfreg));
    IFDEF(CONFIG_HAS_UART, if (unlikely(puart->exist_tx())) putchar(puart->getc()));
}/*}}}*/
void single_soc::set_switch(uint8_t value){/*{{{*/
    IFDEF(CONFIG_HAS_CONFREG, pcfreg->set_switch(value); pcfreg->set_switch(value);)
}/*}}}*/
