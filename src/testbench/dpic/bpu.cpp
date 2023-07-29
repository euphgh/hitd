#include "common.hpp"
#include "debug.hpp"
#include "macro.hpp"
#include "testbench/difftest/global_info.hpp"
#include "verilated_dpi.h"
#include <cinttypes>
#include <fmt/core.h>
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

static string bpuHash(word_t addr) {
  return format("{:03x}_{:1d}", BITS(addr, 13, 4), BITS(addr, 3, 2));
}

extern "C" void v_difftest_PHTWrite(int io_tagIdx, const char *io_instrOff,
                                    const svBit *io_wen, const char *io_count) {
  for (int i = 0; i < 4; i++) {
    if (io_wen[i]) {
      auto pc = (io_tagIdx << 5) | (io_instrOff[i] << 2);
      dblog("PHT({:s})={:b}", bpuHash(pc), io_count[i]);
    }
  }
}
extern "C" void v_difftest_BTBWrite(int io_tagIdx, const char *io_instrOff,
                                    const svBit *io_wen, const int *io_target,
                                    const char *io_btbType) {
  for (int i = 0; i < 4; i++) {
    if (io_wen[i]) {
      auto pc = (io_tagIdx << 5) | (io_instrOff[i] << 2);
      dblog("BTB(" HEX_WORD " {:s})={:s}, " HEX_WORD, (word_t)pc, bpuHash(pc),
            BtbType[io_btbType[i]], (word_t)io_target[i]);
    }
  }
}

extern "C" void v_difftest_SpecRAS(svBit io_push, int io_pushData, int io_pop,
                                   int io_topData, svBit io_flush) {
  if (io_push) {
    dblog("SpecRAS " HEX_WORD " PUSH " HEX_WORD, (word_t)(io_pushData - 8),
          (word_t)(io_pushData));
  }
  if (io_pop) {
    dblog("SpecRAS " HEX_WORD " POP  " HEX_WORD, (word_t)(io_pushData - 8),
          (word_t)(io_topData));
  }
  if (io_flush) {
    dblog("SpecRAS FLUSH");
  }
}
extern "C" void v_difftest_ArchRAS(svBit io_push, int io_pushData, int io_pop,
                                   int io_topData) {
  if (io_push) {
    dblog("ArchRAS " HEX_WORD " PUSH " HEX_WORD, (word_t)(io_pushData - 8),
          (word_t)(io_pushData));
  }
  if (io_pop) {
    dblog("ArchRAS " HEX_WORD " POP  " HEX_WORD, (word_t)(io_pushData - 8),
          (word_t)(io_topData));
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
  auto missStr = [](bool takeMiss, bool predTake, bool DestMiss) {
    return takeMiss               ? "takeMiss"
           : predTake && DestMiss ? "DestMiss"
                                  : "All Hit";
  };
  dblog("{:s} " HEX_WORD " {:s}", BtbType[io_btbType], (word_t)io_debugPC,
        missStr(takeMiss, io_predTake, destMiss));
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
      dblog("instr " HEX_WORD " NoBrMiss BtbType({:s})={:s}",
            (word_t)io_debugPC[i], bpuHash(io_debugPC[i]),
            BtbType[io_predType[i]]);
      info.frontNoBrMiss += 1;
    }
  }
}

void difftestBrJmpStats(string baseName) {
  FILE *file = nullptr;
  extern string genTimeStr();
  string fileName = "./logs/" + genTimeStr() + "-" + baseName;
  if (baseName != "") {
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
  uint32_t diffInstNum = 0;
  for (const auto it : instrInfo) {
    auto &info = it.second;
    frontTotal += info.frontTimes;
    frontNoBrMiss += info.frontNoBrMiss;
    backTotal += info.total;
    backMiss += info.miss;
    backTakeMiss += info.takeMiss;
    backDestMiss += info.destMiss;
    diffInstNum++;
  }
  print("Total Result\n");
  print("FrontTotal: {:d}\n", frontTotal);
  print("FrontNoBrMiss: {:d}\n", frontNoBrMiss);
  print("DiffInstr: {:d}\n", diffInstNum);
  print("BackTotal: {:d}\n", backTotal);
  print("BackMiss: {:d}\n", backMiss);
  print("BackTakeMiss: {:d}\n", backTakeMiss);
  print("BackDestMiss: {:d}\n", backDestMiss);
  print("Total hit Rate: {:f}\n\n",
        1 - ((double)(backMiss) / (double)(backTotal)));

  for (auto &btbType : BtbType) {
    frontTotal = 0;
    frontNoBrMiss = 0;
    backTotal = 0;
    backMiss = 0;
    backTakeMiss = 0;
    backDestMiss = 0;
    diffInstNum = 0;
    for (const auto it : instrInfo) {
      if (it.second.btbType == btbType.first) {
        auto &info = it.second;
        frontTotal += info.frontTimes;
        frontNoBrMiss += info.frontNoBrMiss;
        backTotal += info.total;
        backMiss += info.miss;
        backTakeMiss += info.takeMiss;
        backDestMiss += info.destMiss;
        diffInstNum++;
      }
    }
    print("{:s} Result\n", btbType.second);
    print("FrontTotal: {:d}\n", frontTotal);
    print("FrontNoBrMiss: {:d}\n", frontNoBrMiss);
    print("BackTotal: {:d}\n", backTotal);
    print("DiffInstr: {:d}\n", diffInstNum);
    print("BackMiss: {:d}\n", backMiss);
    print("BackTakeMiss: {:d}\n", backTakeMiss);
    print("BackDestMiss: {:d}\n", backDestMiss);
    print("Total miss Rate: {:f}\n\n",
          1 - ((double)(backMiss) / (double)(backTotal)));
  }
  if (baseName != "") {
    fclose(file);
    auto res = freopen("/dev/tty", "w", stdout);
    if (res == nullptr)
      print("can not redirect tty");
  }
}

#undef dblog
#undef dbError