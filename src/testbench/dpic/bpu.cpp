#include "common.hpp"
#include "debug.hpp"
#include "testbench/difftest/global_info.hpp"
#include "verilated_dpi.h"
#include <cinttypes>
// clang format off
#define dblog(str, ...) mycpu_log->trace(fmt::format("[B] " str, ##__VA_ARGS__))
#define dbError(str, ...)                                                      \
  mycpu_log->error(fmt::format("[B] " str, ##__VA_ARGS__))

using namespace std;
using namespace fmt;

struct BJInfo {
  uint8_t btbType;
  uint32_t frontTimes;
  uint32_t frontNoBrMiss;
  uint32_t total;
  uint32_t miss;
  uint32_t takeMiss;
  uint32_t destMiss;
  BJInfo()
      : btbType(0), frontTimes(0), frontNoBrMiss(0), total(0), miss(0),
        takeMiss(0), destMiss(0) {}
};

static map<uint8_t, string> BtbType = {
    make_pair(0b0, "NON"),     make_pair(0b1, "B"),
    make_pair(0b100, "JCALL"), make_pair(0b101, "JRET"),
    make_pair(0b110, "JMP"),   make_pair(0b111, "JR"),
};

static map<uint8_t, string> BranchType = {
    make_pair(0x0, "NON"),  make_pair(0x1, "BEQ"),    make_pair(0x2, "BNE"),
    make_pair(0x3, "BGEZ"), make_pair(0x4, "BLEZ"),   make_pair(0x5, "BLTZ"),
    make_pair(0x6, "BGTZ"), make_pair(0x7, "BLTZAL"), make_pair(0x8, "BGEZAL"),
    make_pair(0x9, "J"),    make_pair(0xa, "JAL"),    make_pair(0xb, "JR"),
    make_pair(0xc, "JALR"), make_pair(0xd, "JRHB"),
};

static map<word_t, BJInfo> instrInfo = {};

extern "C" void v_difftest_BPUWrite(int io_pc, svBit io_btbWen,
                                    int io_btbTarget, char io_btbType,
                                    svBit io_phtWen, char io_phtCount) {
  if (io_btbWen) {
    dblog("BTB(" HEX_WORD ")={:s}, " HEX_WORD, (word_t)io_pc,
          BtbType[io_btbType], (word_t)io_btbTarget);
  }
  if (io_phtWen) {
    dblog("PHT(" HEX_WORD ")={:b}", (word_t)io_pc, io_phtCount);
  }
}
extern "C" void v_difftest_BackPred(int io_debugPC, svBit io_predTake,
                                    svBit io_realTake, int io_predDest,
                                    int io_realDest, char io_btbType) {
  auto &info = instrInfo[io_debugPC];
  info.total++;
  bool takeMiss = io_realTake != io_predTake;
  bool destMiss = io_predTake && io_realTake && (io_predDest != io_realDest);
  info.miss += takeMiss || destMiss;
  info.takeMiss += takeMiss;
  info.destMiss += destMiss;
  auto &bjType = info.btbType;
  if ((bjType != io_btbType) && (bjType != 0b0)) {
    dbError("instr " HEX_WORD " has two type: {:s} {:s}", (word_t)io_debugPC,
            BtbType[bjType], BtbType[io_btbType]);
  }
  dblog("{:s} " HEX_WORD " takeMiss: {}, destMiss: {}", BtbType[io_btbType],
        (word_t)io_debugPC, takeMiss, destMiss);
  bjType = io_btbType;
}
extern "C" void v_difftest_FrontPred(const int *io_debugPC,
                                     const char *io_predType,
                                     const char *io_realType) {
  for (int i = 0; i < 4; i++) {
    auto &info = instrInfo[io_debugPC[i]];
    info.frontTimes += 1;
    bool noBrMiss = io_predType[i] != 0x0 && io_realType[i] == 0x0;
    if (noBrMiss) {
      dblog("instr " HEX_WORD " No Br Miss", (word_t)io_debugPC[i]);
      info.frontNoBrMiss += 1;
    }
  }
}

void difftestBrJmpStats(string fileName) {
  FILE *file = nullptr;
  if (fileName != "") {
    file = fopen(fileName.c_str(), "w");
    auto res = freopen(fileName.c_str(), "w", stdout);
    if (res == nullptr)
      fmt::print("can not redirect BPU info to {:s}", fileName);
  }
  uint32_t frontTotal = 0;
  uint32_t frontNoBrMiss = 0;
  uint32_t backTotal = 0;
  uint32_t backMiss = 0;
  uint32_t backTakeMiss = 0;
  uint32_t backDestMiss = 0;
  for (const auto it : instrInfo) {
    auto &info = it.second;
    frontTotal += info.frontTimes;
    frontNoBrMiss += info.frontNoBrMiss;
    backTotal += info.total;
    backMiss += info.miss;
    backTakeMiss += info.takeMiss;
    backDestMiss += info.destMiss;
  }
  print("Total Result\n");
  print("FrontTotal: {:d}\n", frontTotal);
  print("FrontNoBrMiss: {:d}\n", frontNoBrMiss);
  print("BackTotal: {:d}\n", backTotal);
  print("BackMiss: {:d}\n", backMiss);
  print("BackTakeMiss: {:d}\n", backTakeMiss);
  print("BackDestMiss: {:d}\n\n", backDestMiss);

  for (auto &btbType : BtbType) {
    uint32_t frontTimes = 0;
    uint32_t frontNoBrMiss = 0;
    uint32_t total = 0;
    uint32_t miss = 0;
    uint32_t takeMiss = 0;
    uint32_t destMiss = 0;
    for (const auto it : instrInfo) {
      if (it.second.btbType == btbType.first) {
        auto &info = it.second;
        frontTimes += info.frontTimes;
        frontNoBrMiss += info.frontNoBrMiss;
        total += info.total;
        miss += info.miss;
        takeMiss += info.takeMiss;
        destMiss += info.destMiss;
      }
    }
    print("{:s} Result\n", btbType.second);
    print("FrontTotal: {:d}\n", frontTimes);
    print("FrontNoBrMiss: {:d}\n", frontNoBrMiss);
    print("BackTotal: {:d}\n", total);
    print("BackMiss: {:d}\n", miss);
    print("BackTakeMiss: {:d}\n", takeMiss);
    print("BackDestMiss: {:d}\n\n", destMiss);
  }
  if (fileName != "") {
    fclose(file);
  }
}

#undef dblog
#undef dbError