#include "common.hpp"
#include "debug.hpp"
#include "macro.hpp"
#include "nemu/cpu/lht.hpp"
#include "testbench/difftest/global_info.hpp"
#include "testbench/sim_state.hpp"
#include "verilated_dpi.h"
#include <algorithm>
#include <cinttypes>
#include <fmt/core.h>
#include <tuple>
#include <vector>
#define dblog(str, ...) mycpu_log->trace(fmt::format("[B] " str, ##__VA_ARGS__))
#define dbError(str, ...)                                                      \
  mycpu_log->error(fmt::format("[B] " str, ##__VA_ARGS__))

using namespace std;
using namespace fmt;
LocHisTable<> mycpuLht;

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

map<uint8_t, string> BtbType = {
    make_pair(0b0, "NON"),     make_pair(0b1, "BR"),
    make_pair(0b100, "JCALL"), make_pair(0b101, "JRET"),
    make_pair(0b110, "JMP"),   make_pair(0b111, "JR"),
};
static string bpuHash(word_t addr) {
  return format("{:03x}_{:1d}", BITS(addr, 13, 4), BITS(addr, 3, 2));
}

#ifdef CONFIG_BTRACE

static string lhtHash(word_t addr) {
  return format("{:1x}_{:1d}", BITS(addr, 7, 4), BITS(addr, 3, 2));
}
static word_t savedPC[4];
static bool lastIsWrite[4] = {false, false, false, false};
static bool lastTake[4];
static word_t lastPC[4];
extern "C" void v_difftest_PHTWrite(int io_tagIdx, const char *io_instrOff,
                                    const svBit *io_wen, const char *io_count,
                                    const svBit *io_take) {
  for (int i = 0; i < 4; i++) {
    if (lastIsWrite[i]) {
      word_t pc = lastPC[i];
      word_t take = lastTake[i];
      auto res = mycpuLht.update(pc, take);
      auto tagHit = get<0>(res) == (pc >> 8) ? "Hit" : "Miss";
      dblog("LHT({:s}) WR {:s} " HEX_WORD
            ", take {:b}, clr {:d}, his {:09b}, cnt: {:d}",
            lhtHash(pc), tagHit, pc, (bool)take, get<1>(res), get<2>(res),
            get<3>(res));
    }
    if (io_wen[i]) {
      lastTake[i] = io_take[i];
      lastPC[i] = (io_tagIdx << 6) | (io_instrOff[i] << 2);
      lastIsWrite[i] = true;
    } else {
      lastIsWrite[i] = false;
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
extern "C" void v_difftest_LHTRead(const int *io_readAddr,
                                   const svBit *io_readTake,
                                   const char *io_readCnt, svBit io_outOK) {
  if (io_outOK) {
    for (int i = 0; i < 4; i++) {
      auto refRes = mycpuLht.getLhtRes(savedPC[i]);
      auto refTake = get<0>(refRes);
      auto refCnt = get<1>(refRes);
      bool dutTake = io_readTake[i];
      uint8_t dutCnt = io_readCnt[i];
      if (refTake != io_readTake[i] || refCnt != io_readCnt[i]) {
        dbError("LHT({:s}) ER ref={},{}; dut={},{}",
                lhtHash((word_t)savedPC[i]), refTake, refCnt, dutTake, dutCnt);
        sim_status = SIM_ABORT;
      }
    }
  }
  for (int i = 0; i < 4; i++) {
    savedPC[i] = io_readAddr[i];
  }
}
#else
extern "C" void v_difftest_PHTWrite(int io_tagIdx, const char *io_instrOff,
                                    const svBit *io_wen, const char *io_count) {
}
extern "C" void v_difftest_BTBWrite(int io_tagIdx, const char *io_instrOff,
                                    const svBit *io_wen, const int *io_target,
                                    const char *io_btbType) {}
extern "C" void v_difftest_SpecRAS(svBit io_push, int io_pushData, int io_pop,
                                   int io_topData, svBit io_flush) {}
extern "C" void v_difftest_ArchRAS(svBit io_push, int io_pushData, int io_pop,
                                   int io_topData) {}
extern "C" void v_difftest_LHTRead(const int *io_readAddr,
                                   const svBit *io_readTake,
                                   const char *io_readCnt, svBit io_outOK) {}
#endif

#ifdef CONFIG_BRANCH_STATS
static map<word_t, BJInfo> instrInfo = {};
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
    dblog("instr " HEX_WORD " has two type: {:s} {:s}", (word_t)io_debugPC,
          BtbType[bjType], BtbType[io_btbType]);
  }
  auto missStr = [](bool realTake, bool predTake, bool DestMiss) {
    return string(realTake != predTake   ? "takeMiss "
                  : predTake && DestMiss ? "DestMiss "
                                         : "All Hits ") +
           string(realTake ? "true " : "false");
  };
  dblog("{:s} " HEX_WORD " {:s}", BtbType[io_btbType], (word_t)io_debugPC,
        missStr(io_realTake, io_predTake, destMiss));
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

void difftestBrJmpReset() {
  instrInfo.clear();
  mycpuLht.resetStats();
}
void difftestBrJmpStats(string baseName) {

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
  print("MyCPU Total    Miss Rate: {:4d}/{:4d} = {:.6f}\n", backMiss, backTotal,
        ((double)(backMiss) / (double)(backTotal)));
  FILE *file = nullptr;
  extern string genTimeStr();
  string fileName = "./logs/" + genTimeStr() + "-" + baseName;
  if (baseName != "") {
    file = fopen(fileName.c_str(), "w");
    auto res = freopen(fileName.c_str(), "w", stdout);
    if (res == nullptr)
      fmt::print("can not redirect BPU info to {:s}", fileName);
  }
  print("Total Result\n");
  print("FrontTotal: {:d}\n", frontTotal);
  print("FrontNoBrMiss: {:d}\n", frontNoBrMiss);
  print("DiffInstr: {:d}\n", diffInstNum);
  print("BackTotal: {:d}\n", backTotal);
  print("BackMiss: {:d}\n", backMiss);
  print("BackTakeMiss: {:d}\n", backTakeMiss);
  print("BackDestMiss: {:d}\n", backDestMiss);
  print("Total miss rate: {:f}\n\n",
        ((double)(backMiss) / (double)(backTotal)));

  uint32_t brTotal = 0;
  uint32_t brMiss = 0;
  for (auto &btbType : BtbType) {
    frontTotal = 0;
    frontNoBrMiss = 0;
    backTotal = 0;
    backMiss = 0;
    backTakeMiss = 0;
    backDestMiss = 0;
    diffInstNum = 0;
    auto cmp = [](const std::tuple<uint32_t, word_t, uint32_t> &a,
                  const std::tuple<uint32_t, word_t, uint32_t> &b) {
      return std::get<0>(a) < std::get<0>(b);
    };
    std::priority_queue<std::tuple<uint32_t, word_t, uint32_t>,
                        std::vector<std::tuple<uint32_t, word_t, uint32_t>>,
                        decltype(cmp)>
        max_heap(cmp);

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
        if (it.second.btbType == 0b1) {
          max_heap.push(make_tuple(info.takeMiss, it.first, info.total));
        }
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
    print("Total miss rate: {:f}\n\n",
          ((double)(backMiss) / (double)(backTotal)));

    while (!max_heap.empty()) {
      auto t = max_heap.top();
      auto missNum = get<0>(t);
      auto totalNum = get<2>(t);
      brTotal += totalNum;
      brMiss += missNum;
      if (missNum != 0)
        print("[" HEX_WORD "]: {:d}/{:d} = {:f}\n", get<1>(t), missNum,
              totalNum, (double)missNum / (double)totalNum);
      max_heap.pop();
    }
  }
  if (baseName != "") {
    fclose(file);
    auto res = freopen("/dev/tty", "w", stdout);
    if (res == nullptr)
      print("can not redirect tty");
  }
  print("MyCPU Total Br Miss Rate: {:5d}/{:5d} = {:.6f}\n", brMiss, brTotal,
        (double)brMiss / (double)brTotal);
}
#else
void difftestBrJmpStats(string baseName) {}
void difftestBrJmpReset() {}
extern "C" void v_difftest_BackPred(int io_debugPC, svBit io_predTake,
                                    svBit io_realTake, int io_predDest,
                                    int io_realDest, char io_btbType) {}
extern "C" void v_difftest_FrontPred(const int *io_debugPC,
                                     const char *io_predType,
                                     const char *io_realType) {}
#endif

#undef dblog
#undef dbError