#include "soc.hpp"
#include "debug.hpp"
#include "macro.hpp"
#include "paddr/paddr_interface.hpp"
#include "path.hh"
#include "utils.hpp"
#include <csignal>
#include <cstdio>
#include <fmt/core.h>
#include <string>

static std::tuple<PaddrTop *, PaddrConfreg *, Pmem *, Pmem *>
basic_soc(bool useSnapShot = false, std::string snapShotName = "") { /*{{{*/
  AddrIntv s0_24_range = AddrIntv(0x0, bit_mask(24));
  AddrIntv inst_range = AddrIntv(0x1fc00000, bit_mask(22));
  AddrIntv confreg_range = AddrIntv(0x1faf0000, bit_mask(16));

  /* new inst and data mem from 0x0 */
  auto binName = useSnapShot ? snapShotName : __TEST_BIN__;
  Pmem *s0_mem = new Pmem(s0_24_range);
  s0_mem->load_binary(0, binName.c_str());

  /* map inst mem to 0x1fc00000 */
  Pmem *inst_mem = new Pmem(inst_range, s0_mem->get_mem_ptr());

  /* new nscscc confreg */
  PaddrConfreg *confreg = new PaddrConfreg(false);

  PaddrTop *top = new PaddrTop();
  top->add_dev(inst_range, inst_mem);
  top->add_dev(s0_24_range, s0_mem);
  top->add_dev(confreg_range, confreg);
  return std::make_tuple(top, confreg, s0_mem, inst_mem);
} /*}}}*/
static std::tuple<PaddrTop *, Puart8250 *, Pmem *, Pmem *>
boot_soc(bool useSnapShot = false, std::string snapShotName = "") { /*{{{*/
  AddrIntv flash_range(0x1fc00000, bit_mask(21));
  AddrIntv ddr_range(0x00000000, bit_mask(27));
  AddrIntv uart_range(0x1fe40000, bit_mask(14));

  Puart8250 *uart = new Puart8250();
  Pmem *spi_flash = new Pmem(flash_range);
  auto binName = useSnapShot ? snapShotName : __TEST_BIN__;
  spi_flash->load_binary(0, binName.c_str());
  Pmem *dram = new Pmem(ddr_range);

  PaddrTop *top = new PaddrTop();
  top->add_dev(flash_range, spi_flash);
  top->add_dev(ddr_range, dram);
  top->add_dev(uart_range, uart);
  return std::tie(top, uart, dram, spi_flash);
} /*}}}*/
static std::tuple<PaddrTop *, Puart8250 *, Pmem *, Pmem *>
kernel_soc(bool useSnapShot = false, std::string snapShotName = "") { /*{{{*/
  AddrIntv ddr_range(0x00000000, bit_mask(27));
  AddrIntv uart_range(0x1fe40000, bit_mask(14));

  Puart8250 *uart = new Puart8250();
  Pmem *dram = new Pmem(ddr_range);
  Pmem *resetMem = nullptr;
  auto binName = useSnapShot ? snapShotName : __TEST_BIN__;
  dram->load_binary(0x00100000, binName.c_str());

  PaddrTop *top = new PaddrTop();
  top->add_dev(ddr_range, dram);
  top->add_dev(uart_range, uart);
  return std::tie(top, uart, dram, resetMem);
} /*}}}*/

dual_soc::dual_soc(bool useSnapShot, std::string snapShotName) { /*{{{*/
  IFDEF(CONFIG_BASIC_SOC, create_basic_soc());
  IFDEF(CONFIG_BOOT_SOC, create_boot_soc());
  IFDEF(CONFIG_KERNEL_SOC, create_kernel_soc());
} /*}}}*/
void dual_soc::create_basic_soc(bool useSnapShot,
                                std::string snapShotName) { /*{{{*/
  has_confreg = true;
  for (size_t i = 0; i < 2; i++) {
    std::tie(ptop[i], pcfreg[i], mainMem[i], resetMem[i]) =
        basic_soc(useSnapShot, snapShotName);
  }
} /*}}}*/
void dual_soc::create_boot_soc(bool useSnapShot,
                               std::string snapShotName) { /*{{{*/
  has_confreg = false;
  pcfreg[0] = pcfreg[1] = nullptr;
  for (size_t i = 0; i < 2; i++) {
    std::tie(ptop[i], puart[i], mainMem[i], resetMem[i]) =
        boot_soc(useSnapShot, snapShotName);
  }
} /*}}}*/
void dual_soc::create_kernel_soc(bool useSnapShot,
                                 std::string snapShotName) { /*{{{*/
  has_confreg = false;
  pcfreg[0] = pcfreg[1] = nullptr;
  for (size_t i = 0; i < 2; i++) {
    std::tie(ptop[i], puart[i], mainMem[i], resetMem[i]) =
        kernel_soc(useSnapShot, snapShotName);
  }
} /*}}}*/

void dual_soc::saveSnapShot(std::string parentDir) {
  mainMem[DUT]->save_binary(parentDir + "/main.bin");
#ifndef CONFIG_TEST_LINUX
  resetMem[DUT]->save_binary(parentDir + "/reset.bin");
#endif
}

single_soc::single_soc() {
  IFDEF(CONFIG_BASIC_SOC, create_basic_soc());
  IFDEF(CONFIG_BOOT_SOC, create_boot_soc());
  IFDEF(CONFIG_KERNEL_SOC, create_kernel_soc());
}

void single_soc::create_basic_soc(){/*{{{*/
  std::tie(ptop, pcfreg, mainMem, resetMem) = basic_soc();
}/*}}}*/
void single_soc::create_boot_soc(){/*{{{*/
    pcfreg = nullptr;
    std::tie(ptop, puart, mainMem, resetMem) = boot_soc();
}/*}}}*/
void single_soc::create_kernel_soc(){/*{{{*/
    pcfreg = nullptr;
    std::tie(ptop, puart, mainMem, resetMem) = kernel_soc();
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
#ifdef CONFIG_DIFFTEST
    if (unlikely(ref->exist_tx())) loop_check(dut,ref);
    else if (unlikely(dut->exist_tx())){
            dut->op_log->error(fmt::format("should not output " UART_CHAR,
                dut->getc(),dut->getc()));
            IFDEF(CONFIG_NEED_NEMU,nemu_state.state = NEMU_ABORT);
    }
#else
    while (dut->exist_tx()) {
        putchar(dut->getc());
        fflush(stdout);
    }
#endif 
}/*}}}*/

void dual_soc::tick(){ /*{{{*/
    IFDEF(CONFIG_HAS_CONFREG, pcfreg[DUT]->tick();pcfreg[REF]->tick();)
    IFDEF(CONFIG_HAS_CONFREG, chech_output(pcfreg[DUT], pcfreg[REF]));
    IFDEF(CONFIG_HAS_UART, chech_output(puart[DUT], puart[REF]));
    IFDEF(CONFIG_HAS_UART, ext_int[DUT] = puart[DUT]->irq() << 1); 
    IFDEF(CONFIG_HAS_UART, ext_int[REF] = puart[REF]->irq() << 1); 
#ifdef CONFIG_HAS_UART
#ifdef CONFIG_DIFFTEST
    if (ext_int[DUT]!=ext_int[REF]) {
        puart[DUT]->log_pt->error("ext_int is %v diffierent from ref %v", ext_int[DUT], ext_int[REF]);
        IFDEF(CONFIG_NEED_NEMU,nemu_state.state = NEMU_ABORT);
    }
    auto& dut = puart[DUT];
    auto& ref = puart[REF];
    bool error = false;
    error |= dut->DLL != ref->DLL;
    error |= dut->DLM != ref->DLM;
    error |= dut->IER != ref->IER;
    error |= dut->IIR != ref->IIR;
    error |= dut->LCR != ref->LCR;
    error |= dut->MCR != ref->MCR;
    error |= dut->rx.empty()!= ref->rx.empty();
    error |= dut->thr_empty != ref->thr_empty;
    if (error){
        fmt::print("dut:{{DLL:{}, DLM:{}, IER:{}, IIR:{}, LCR:{}, MCR:{}, thr_empty:{}}}\n",
                dut->DLL, dut->DLM, dut->IER, dut->IIR, dut->LCR, dut->MCR,dut->thr_empty);
        fmt::print("ref:{{DLL:{}, DLM:{}, IER:{}, IIR:{}, LCR:{}, MCR:{}, thr_empty:{}}}\n",
                ref->DLL, ref->DLM, ref->IER, ref->IIR, ref->LCR, ref->MCR,ref->thr_empty);
        raise(SIGTRAP);
    }
#endif
#endif
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
