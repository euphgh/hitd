#include "testbench/difftest/api.hpp"
#include "common.hpp"
#include "macro.hpp"
#include "testbench/difftest/global_info.hpp"
#include "verilated_dpi.h"
#include <fmt/core.h>

using namespace std;
using namespace fmt;

extern void dpic_memIdx_init();
extern void dpic_memIdx_stats();

extern void dpic_bCache_stats();
extern void dpic_bCache_init();

extern void dpic_bpu_init();
extern void dpic_bpu_stats(string baseName);

void dpic_UartBuffer_init();

void difftestInit() {
  dpic_memIdx_init();
  dpic_bCache_init();
  dpic_bpu_init();
  dpic_UartBuffer_init();
}

void difftestStats(string waveName) {
  dpic_memIdx_stats();
  dpic_bCache_stats();
  dpic_bpu_stats("MyCPUBrJmpStats" + waveName + ".txt");
}