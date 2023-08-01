#include "common.hpp"
#include "fmt/core.h"
#include "macro.hpp"
#include <cstdint>
#include <map>
#include <queue>
#include <tuple>
#include <utility>
#include <vector>

template <int idxWidth = 4, int cntWidth = 4, int hisWidth = 9>
#define POW2(n) (1 << n)
class LocHisTable {
public:
  struct RegDatas {
    uint8_t clearCnt[POW2(idxWidth)];
    uint8_t takeCnts[POW2(idxWidth)][POW2(hisWidth)];
    uint16_t his[POW2(idxWidth)];
    word_t allTags[POW2(idxWidth)];
  };
  struct PatHisTab {
    bool valid[POW2(idxWidth)];
    uint8_t cnt[POW2(idxWidth)];
    word_t tags[POW2(idxWidth)];
  };
  RegDatas lhts[4];
  PatHisTab phts[4];
  std::map<word_t, std::tuple<uint32_t, uint32_t>> missRates;
  LocHisTable() { resetStats(); }
  void resetStats() {
    for (int k = 0; k < 4; k++) {
      auto &lht = lhts[k];
      auto &pht = phts[k];
      missRates.clear();
      for (int i = 0; i < POW2(idxWidth); i++) {
        pht.valid[i] = 0;
        pht.cnt[i] = 0;
        pht.tags[i] = 0;

        lht.clearCnt[i] = 0;
        lht.his[i] = 0;
        lht.allTags[i] = 0;
        for (int j = 0; j < POW2(hisWidth); j++)
          lht.takeCnts[i][j] = 1;
      }
    }
    missRates.clear();
  }
  uint8_t calNextCnt(uint8_t cnt, bool take) {
    return cnt == 0   ? (take ? 1 : 0)
           : cnt == 3 ? (take ? 3 : 2)
                      : (take ? cnt + 1 : cnt - 1);
  }
  void update(word_t pc, bool take) {
    auto set = BITS(pc, 3, 2);
    auto idx = BITS(pc, 4 + idxWidth - 1, 4);
    auto tag = BITS(pc, 31, 4 + idxWidth);
    RegDatas &lht = lhts[set];
    auto tagMatch = lht.allTags[idx] == tag;
    auto &clearCnt = lht.clearCnt[idx];
    if (tagMatch) {
      auto maxCnt = ((1 << cntWidth) - 1);
      clearCnt = clearCnt == maxCnt ? maxCnt : clearCnt + 1;
      auto &wTakeCnt = lht.takeCnts[idx][lht.his[idx]];
      wTakeCnt = calNextCnt(wTakeCnt, take);
      lht.takeCnts[idx][lht.his[idx]] = wTakeCnt;
      lht.his[idx] = ((lht.his[idx] << 1) | take) & ((1 << hisWidth) - 1);
    } else if (clearCnt == 0) {
      lht.allTags[idx] = tag;
      lht.his[idx] = 0 | take;
      for (int i = 0; i < POW2(hisWidth); i++) {
        lht.takeCnts[idx][i] = 1;
      }
      lht.takeCnts[idx][0] = take ? 2 : 0;
    } else
      clearCnt--;
  }
  std::tuple<bool, uint8_t> getLhtRes(word_t pc) {
    auto set = BITS(pc, 3, 2);
    auto idx = BITS(pc, 4 + idxWidth - 1, 4);
    auto tag = BITS(pc, 31, 4 + idxWidth);
    RegDatas &lht = lhts[set];
    bool predTake = false;
    if (lht.allTags[idx] == tag) {
      predTake = lht.takeCnts[idx][lht.his[idx]] > 1;
    }
    return std::make_tuple(predTake, lht.clearCnt[idx]);
  }

  void predict(word_t pc, bool realtake) {
    auto lhtRes = getLhtRes(pc);
    bool predTake = std::get<0>(lhtRes);

    auto set = BITS(pc, 3, 2);
    auto idx = BITS(pc, 4 + idxWidth - 1, 4);
    auto tag = BITS(pc, 31, 4 + idxWidth);
    auto &pht = phts[set];
    auto phtPred = false;
    auto phtHit = (pht.tags[idx] == tag) && pht.valid[idx];
    if (phtHit) {
      auto cnt = pht.cnt[idx];
      phtPred = cnt > 1;
      pht.cnt[idx] = calNextCnt(cnt, realtake);
    } else {
      pht.tags[idx] = tag;
      pht.valid[idx] = true;
      pht.cnt[idx] = realtake ? 2 : 0;
    }

    if (std::get<1>(lhtRes) < 0)
      predTake = phtPred;

    auto &info = missRates[pc];
    auto miss = std::get<0>(info) + (predTake != realtake);
    auto total = std::get<1>(info) + 1;
    info = std::make_tuple(miss, total);
    update(pc, realtake);
  }
  void show(std::string baseName) {
    typedef std::pair<word_t, std::tuple<word_t, uint32_t>> PcMiss;
    auto cmp = [](const PcMiss &a, const PcMiss &b) {
      return std::get<0>(a.second) < std::get<0>(b.second);
    };
    std::priority_queue<PcMiss, std::vector<PcMiss>, decltype(cmp)> max_heap(
        cmp);
    uint32_t totalInstrNum = 0;
    uint32_t totalMissNum = 0;
    for (auto &it : missRates) {
      max_heap.push(std::make_pair(it.first, it.second));
      totalMissNum += std::get<0>(it.second);
      totalInstrNum += std::get<1>(it.second);
    }
    fmt::print("{:s} Total Br Miss Rate: {:5d}/{:5d} = {:.6f}\n", baseName,
               totalMissNum, totalInstrNum,
               (double)totalMissNum / (double)totalInstrNum);

    FILE *file = nullptr;
    extern std::string genTimeStr();
    std::string fileName = "./logs/" + genTimeStr() + "-" + baseName;
    if (baseName != "") {
      file = fopen(fileName.c_str(), "w");
      auto res = freopen(fileName.c_str(), "w", stdout);
      if (res == nullptr)
        fmt::print("can not redirect BPU info to {:s}", fileName);
    }

    while (!max_heap.empty()) {
      auto t = max_heap.top();
      auto missNum = std::get<0>(t.second);
      auto totalNum = std::get<1>(t.second);
      auto pc = t.first;
      if (missNum != 0) {
        fmt::print("[" HEX_WORD "]: {:4d}/{:4d} = {:.6f}", t.first, missNum,
                   totalNum, (double)missNum / (double)totalNum);

        auto set = BITS(pc, 3, 2);
        auto idx = BITS(pc, 4 + idxWidth - 1, 4);
        auto tag = BITS(pc, 31, 4 + idxWidth);
        RegDatas &lht = lhts[set];
        if (lht.allTags[idx] == tag)
          fmt::print(", hit with Cnt {:2d}\n", lht.clearCnt[idx]);
        else
          fmt::print("\n");
      }

      max_heap.pop();
    }
    for (int i = 0; i < POW2(idxWidth); i++) {
      for (int k = 0; k < 4; k++) {
        auto &lht = lhts[k];
        word_t pc = (lht.allTags[i] << (idxWidth + 4)) | (i << 4) | (k << 2);
        fmt::print("{:d}. LHT[" HEX_WORD "]={:3d}, {:012b}\t", k, pc,
                   lht.clearCnt[i], lht.his[i]);
        lht.allTags[i] = 0;
      }
      fmt::print("\n");
    }

    if (baseName != "") {
      fclose(file);
      auto res = freopen("/dev/tty", "w", stdout);
      if (res == nullptr)
        fmt::print("can not redirect tty");
    }
  }
};
#undef POW2