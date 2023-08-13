#include "common.hpp"
#include "macro.hpp"
#include "testbench/difftest/api.hpp"
#include "testbench/difftest/global_info.hpp"
#include "testbench/sim_state.hpp"
#include "verilated_dpi.h"
#include <fmt/core.h>

using namespace std;
using namespace fmt;
#define MIP_WIDTH 5
#define MIP_SIZE (1 << MIP_WIDTH)

#define dhlog(str, ...) mycpu_log->trace(fmt::format("[H] " str, ##__VA_ARGS__))

#ifdef CONFIG_MEM_INDEX
static uint32_t memTotal = 0;
static uint32_t memIdxHit = 0;
static uint32_t findHit = 0;
static uint32_t findMiss = 0;
static struct {
  word_t tag;
  uint8_t midx;
  uint8_t cnt;
} refMip[MIP_SIZE];
static word_t getTag(word_t pc) { return BITS(pc, 31, 2 + MIP_WIDTH); }
uint8_t calNextCnt(uint8_t cnt, bool take) {
  return cnt == 0   ? (take ? 1 : 0)
         : cnt == 3 ? (take ? 3 : 2)
                    : (take ? cnt + 1 : cnt - 1);
}

extern "C" void v_difftest_MemIndex(svBit io_ren, int io_pc, char io_realIdx,
                                    char io_predIdx, char io_readIdx,
                                    svBit io_find, char io_cnt,
                                    svBit io_writeWen, int io_wPC,
                                    char io_wIndex, char io_wCnt,
                                    svBit io_idxMatch, svBit io_tagMatch) {
  if (io_ren) {
    memTotal++;
    memIdxHit += io_realIdx == io_predIdx;
    auto useMIP = io_find && io_cnt > 1;
    findHit += io_realIdx == io_predIdx && useMIP;
    findMiss += io_realIdx != io_predIdx && useMIP;
    auto missStr = io_realIdx != io_predIdx ? "Miss" : "Hits";
    auto findStr = useMIP ? "Find" : "Not Find";
    dhlog("MIP({:02d}, " HEX_WORD ") {:s} {:s} real:{:x}, pred:{:x}",
          BITS(io_pc, 2 + MIP_WIDTH - 1, 2), (word_t)(io_pc), missStr, findStr,
          (word_t)io_realIdx, (word_t)io_predIdx);

    auto refEntry = refMip[BITS(io_pc, 2 + MIP_WIDTH - 1, 2)];
    auto refFind = refEntry.tag == getTag(io_pc);
    auto refIdx = refEntry.midx;
    auto refCnt = refEntry.cnt;
    if (refFind != io_find || refIdx != io_readIdx || refCnt != io_cnt) {
      sim_status = SIM_ABORT;
      mycpu_log->error("MIP Diff !!!");
      print("ref: {} {:x} {:d}\n", refFind, refIdx, refCnt);
      print("dut: {} {:x} {:d}\n", (bool)io_find, (uint8_t)io_readIdx, io_cnt);
    }
  }

  if (io_writeWen) {
    auto wIdx = BITS(io_wPC, 2 + MIP_WIDTH - 1, 2);
    auto wTag = getTag(io_wPC);
    auto wCnt = io_tagMatch ? calNextCnt(io_wCnt, io_idxMatch) : 1;
    refMip[wIdx].tag = wTag;
    refMip[wIdx].midx = io_wIndex;
    refMip[wIdx].cnt = wCnt;
    dhlog("MIP({:02d}, " HEX_WORD ") WR {:x}, Tag {:s}, Cnt {:d}", wIdx,
          (word_t)(io_wPC), (word_t)io_wIndex, io_tagMatch ? "Hits" : "Miss",
          wCnt);
  }
}
void dpic_memIdx_init() {
  memTotal = 0;
  memIdxHit = 0;
  findHit = 0;
  findMiss = 0;
  for (int i = 0; i < MIP_SIZE; i++) {
    refMip[i].midx = 0;
    refMip[i].tag = 0;
    refMip[i].cnt = 1;
  }
}

void dpic_memIdx_stats() {
  print("Mem Index Predictor Hit Rate: {:d} / {:d} = {:f}\n", memIdxHit,
        memTotal, (double)memIdxHit / (double)memTotal);
  print("Mem Index Predictor Find Hits: {:d} / {:d} = {:f}\n", findHit,
        memIdxHit, (double)findHit / (double)memIdxHit);
  print("Mem Index Predictor Find Miss: {:d} / {:d} = {:f}\n", findMiss,
        memTotal - memIdxHit,
        (double)findMiss / (double)(memTotal - memIdxHit));
  print("Mem Index Predictor Find Rate: {:d} / {:d} = {:f}\n", findHit,
        findHit + findMiss, (double)findHit / (double)(findMiss + findHit));
}
#else
extern "C" void v_difftest_MemIndex(int io_pc, char io_realIdx,
                                    char io_predIdx) {}
void dpic_memIdx_init() {}
void dpic_memIdx_stats() {}
#endif

#undef dhlog