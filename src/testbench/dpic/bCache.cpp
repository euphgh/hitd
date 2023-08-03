#include "common.hpp"
#include "macro.hpp"
#include "testbench/difftest/api.hpp"
#include "testbench/difftest/global_info.hpp"
#include "verilated_dpi.h"
#include <cstdint>
#include <fmt/core.h>

using namespace std;
using namespace fmt;

static map<uint8_t, string> predState = {
    make_pair(0x0, "normal"),
    make_pair(0x1, "waitDS"),
    make_pair(0x2, "comeDS"),
};
static uint8_t lastState = 0x0;
#define dglog(str, ...) mycpu_log->trace(fmt::format("[G] " str, ##__VA_ARGS__))
#define dgError(str, ...) mycpu_log->error(fmt::format(str, ##__VA_ARGS__))
static uint32_t totalFireIn = 0;
static uint32_t missFireIn = 0;
static string getIdx(word_t pc) { return format("{:02x}", BITS(pc, 6, 2)); }

extern "C" void v_difftest_BCache(svBit io_hasBranch, svBit io_dsFetch,
                                  svBit io_bCacheHit, svBit io_bCacheUse,
                                  int io_bCacheDst, int io_predictDst,
                                  svBit io_wen, int io_wPC, int io_wDst,
                                  char io_state, svBit io_fireIn,
                                  int io_pcVal) {
  if (io_fireIn) {
    if (io_state == 0x1)
      dgError("state is waitDS when fireIn" HEX_WORD, io_pcVal);
    else {
      if (io_state == 0x0) {
        totalFireIn += 1;
        if (io_hasBranch) {
          if (!io_dsFetch) {
            if (!io_bCacheHit)
              missFireIn++;
            auto hitStr = io_bCacheHit
                              ? "Hit"
                              : format("Miss " HEX_WORD, (word_t)io_bCacheDst);
            dglog("BPU(" HEX_WORD ") = " HEX_WORD ", {:s} {}", (word_t)io_pcVal,
                  (word_t)io_predictDst, hitStr, missFireIn);
          } else {
            if (io_bCacheUse)
              missFireIn++;
            auto hitStr = !io_bCacheUse
                              ? "Hit"
                              : format("Miss " HEX_WORD, (word_t)io_bCacheDst);
            dglog("BPU(" HEX_WORD ") = " HEX_WORD ", DS {:s} {}",
                  (word_t)io_pcVal, (word_t)io_predictDst, hitStr, missFireIn);
          }
        } else {
          if (io_bCacheUse) {
            missFireIn++;
            dglog("NoBrMiss " HEX_WORD "{}", (word_t)io_pcVal, missFireIn);
          }
        }
      } else {
        dglog("DS " HEX_WORD " Come", (word_t)io_pcVal);
      }
    }
  }
  if (lastState != io_state) {
    dglog("{} -> {}", predState[lastState], predState[io_state]);
    lastState = io_state;
  }
  if (io_wen) {
    dglog("BCache({:s})=tag:" HEX_WORD ", dst:" HEX_WORD, getIdx(io_wPC),
          (word_t)io_wPC, (word_t)io_wDst);
  }
}
void difftestBCacheStats() {
  print("BCache Miss Rate: {:5d} / {:5d} = {:.6f}\n", missFireIn, totalFireIn,
        (double)missFireIn / (double)totalFireIn);
}

#undef dglog
#undef dgError