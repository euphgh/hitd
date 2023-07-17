#include "common.hpp"
#include "debug.hpp"
#include "nemu/isa.hpp"
#include "svdpi.h"
#include "testbench/difftest/api.hpp"
#include "testbench/difftest/global_info.hpp"
#include "testbench/sim_state.hpp"
#include "utils.hpp"
#include <fmt/core.h>
RandQueue randQueue;

tlb_entry dutTLB[CONFIG_TLB_NR];
extern "C" void v_difftest_TLBAll(const svBit *io_g, const svBit *io_v0,
                                  const svBit *io_v1, const svBit *io_d0,
                                  const svBit *io_d1, const char *io_c0,
                                  const char *io_c1, const int *io_pfn0,
                                  const int *io_pfn1, const int *io_vpn2,
                                  const char *io_asid, char io_rand,
                                  svBit io_iswr, int io_pc) {
  for (int i = 0; i < CONFIG_TLB_NR; i++) {
    dutTLB[i].g = io_g[i];
    dutTLB[i].vpn2 = io_vpn2[i];
    dutTLB[i].asid = io_asid[i];
    dutTLB[i].v0 = io_v0[i];
    dutTLB[i].d0 = io_d0[i];
    dutTLB[i].c0 = io_c0[i];
    dutTLB[i].pfn0 = io_pfn0[i];
    dutTLB[i].v1 = io_v1[i];
    dutTLB[i].d1 = io_d1[i];
    dutTLB[i].c1 = io_c1[i];
    dutTLB[i].pfn1 = io_pfn1[i];
  }
  if (io_iswr) {
    randQueue.push(std::make_pair(io_rand, io_pc));
  }
}

static void printTlbError() {
  for (int i = 0; i < CONFIG_TLB_NR; i++) {
    auto &dut = dutTLB[i];
    auto &ref = nemu->tlb[i];
    if (dut.equal(ref))
      continue;
    fmt::print(ANSI_FMT("{:d}: ", ANSI_FG_RED), i);
    dut.print();
    fmt::print(ANSI_FMT("{:d}: ", ANSI_FG_GREEN), i);
    ref.print();
  }
  __ASSERT_SIM__(false, "tlb diff stop");
}

void difftestTlbCheck() {
  bool same = true;
  for (int i = 0; i < CONFIG_TLB_NR; i++) {
    same &= dutTLB[i].equal(nemu->tlb[i]);
  }
  if (!same)
    printTlbError();
}
