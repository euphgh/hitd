#include "common.hpp"
#include "macro.hpp"
#include "svdpi.h"
#include "testbench/difftest/global_info.hpp"
#include "testbench/sim_state.hpp"
#include <fmt/core.h>
#include <iomanip>
#include <map>
#include <sstream>
#include <utility>

#define dclog(str, ...) mycpu_log->trace(fmt::format("[C] " str, ##__VA_ARGS__))
#define dcError(str, ...) mycpu_log->error(fmt::format(str, ##__VA_ARGS__))
enum CacheMainState { run, miss, readDram, refill, uncache, instr };
enum CacheWriteState { wIdel, wReq, wData, waitwBack };
enum InstrState {
  instrIdle,
  decode,
  idxStTag,
  hitInv,
  idxInv,
  fake,
  waitWauto,
  waitRetire
};
enum CacheOp {
  IndexInvalidI = 0b00000,
  IndexWriteBackInvalidD = 0b00001,
  IndexStoreTagI = 0b01000,
  IndexStoreTagD = 0b01001,
  HitInvalidI = 0b10000,
  HitInvalidD = 0b10001,
  HitWriteBackInvalidD = 0b10101,
};

#ifdef CONFIG_CTRACE
static std::map<CacheMainState, std::string> mainStateStr = {
    std::make_pair(run, "run"),           std::make_pair(miss, "miss"),
    std::make_pair(readDram, "readDram"), std::make_pair(refill, "refill"),
    std::make_pair(uncache, "uncache"),   std::make_pair(instr, "instr"),
};
static std::map<CacheWriteState, std::string> writeStateStr = {
    std::make_pair(wIdel, "wIdel"),
    std::make_pair(wReq, "wReq"),
    std::make_pair(wData, "wData"),
    std::make_pair(waitwBack, "waitBack"),
};
static std::map<CacheOp, std::string> cacheOpStr = {
    std::make_pair(IndexInvalidI, "IC Idx Invalid"),
    std::make_pair(IndexWriteBackInvalidD, "DC Idx WB Invalid"),
    std::make_pair(IndexStoreTagI, "IC Idx Store Tag"),
    std::make_pair(IndexStoreTagD, "DC Idx Store Tag"),
    std::make_pair(HitInvalidI, "IC Hit Invalid"),
    std::make_pair(HitInvalidD, "DC Hit Invalid"),
    std::make_pair(HitWriteBackInvalidD, "DC Hit WB Invalid"),
};
struct CacheState {
  CacheMainState mainState;
  CacheWriteState writeState;
  bool valid;
  word_t reqAddr;
  bool isUncache;
  bool isWrite;
  word_t writeData;
  bool cancel;
  CacheOp instrOp;
  bool instrOk;
  InstrState instrState;
  uint8_t tagWay;
  word_t idxTag;
};

static CacheState state[2] = {{run, wIdel, 0}, {run, wIdel, 0}};
static unsigned char oldMap = 0;
static unsigned char newMap = 1;

static bool reqIsSame() {
  auto res = true;
  res &= state[oldMap].valid == state[newMap].valid;
  res &= state[oldMap].reqAddr == state[newMap].reqAddr;
  res &= state[oldMap].isUncache == state[newMap].isUncache;
  res &= state[oldMap].isWrite == state[newMap].isWrite;
  res &= state[oldMap].writeData == state[newMap].writeData;
  res &= state[oldMap].cancel == state[newMap].cancel;
  return res;
}

extern "C" void v_difftest_CacheRun(
    char io_mainState, svBit io_hasValid, int io_reqAddr, svBit io_isUncache,
    svBit io_isWrite, int io_writeData, svBit io_cancel, int io_retData,
    char io_hitWays, svBit io_isHit, char io_victimWay, const int *io_tagFrom1,
    const svBit *io_dirtyFrom1, const svBit *io_validFrom1,
    const int *io_wbBuffer, int io_wbAddr, char io_writeState,
    char io_instrState, svBit io_instrValid, char io_tagWay, char io_instrOp) {

  auto getTag = [&io_tagFrom1](uint8_t way) {
    return (word_t)io_tagFrom1[way];
  };
  auto getValid = [&io_validFrom1](uint8_t way) {
    return (bool)io_validFrom1[way];
  };
  auto getDirty = [&io_dirtyFrom1](uint8_t way) {
    return (bool)io_dirtyFrom1[way];
  };
  std::swap(oldMap, newMap);
  state[newMap].mainState = (CacheMainState)io_mainState;
  state[newMap].writeState = (CacheWriteState)io_writeState;
  state[newMap].reqAddr = io_reqAddr;
  state[newMap].isUncache = io_isUncache;
  state[newMap].isWrite = io_isWrite;
  state[newMap].writeData = io_writeData;
  state[newMap].cancel = io_cancel;
  state[newMap].instrOp = (CacheOp)io_instrOp;
  state[newMap].instrState = (InstrState)io_instrState;
  state[newMap].tagWay = io_tagWay;

  if (state[newMap].mainState != state[oldMap].mainState) {
    dclog("mainState Change: {} -> {}", mainStateStr[state[oldMap].mainState],
          mainStateStr[state[newMap].mainState]);
    if (io_mainState == miss) {
      dclog("victim {:d} way with tag: " HEX_WORD ", valid: {:b}, dirty: {:b}",
            io_victimWay, getTag(io_victimWay), getValid(io_victimWay),
            getDirty(io_victimWay));
    }
  }

  if (state[newMap].instrState == idxInv) {
    if (state[oldMap].instrState == idxInv)
      dcError("instrState \"idxInv\"should only one cycle");
    dclog("{:s} tag: " HEX_WORD ", valid: {:b}, dirty: {:b}",
          cacheOpStr[(CacheOp)io_instrOp], getTag(io_tagWay),
          getValid(io_tagWay), getDirty(io_tagWay));
  }
  if (state[newMap].instrState == hitInv) {
    if (state[oldMap].instrState == hitInv)
      dcError("instrState \"hitInv\" should only one cycle");
    if (io_isHit)
      dclog("{:s} tag: " HEX_WORD ", valid: {:b}, dirty: {:b}",
            cacheOpStr[(CacheOp)io_instrOp], getTag(io_hitWays),
            getValid(io_hitWays), getDirty(io_hitWays));
    else
      dclog("{:s} notHit with addr: " HEX_WORD, cacheOpStr[(CacheOp)io_instrOp],
            state[newMap].reqAddr);
  }
  if (state[newMap].instrState == fake) {
    if (state[oldMap].instrState != fake)
      dclog("{:s}", cacheOpStr[(CacheOp)io_instrOp]);
  }

  if (state[newMap].writeState != state[oldMap].writeState) {
    if (state[newMap].writeState == wReq) {
      auto wordNum = 8;
      std::stringstream res;
      for (int i = 0; i < wordNum; i++)
        res << std::hex << std::setw(8) << std::setfill('0') << io_wbBuffer[i]
            << " ";
      dclog("WriteState Change: {} -> {} with addr: " HEX_WORD ", data: {:s}",
            writeStateStr[state[oldMap].writeState],
            writeStateStr[state[newMap].writeState], io_wbAddr, res.str());
    }
    dclog("WriteState Change: {} -> {}",
          writeStateStr[state[oldMap].writeState],
          writeStateStr[state[newMap].writeState]);
  }

  if (state[oldMap].valid == false && io_hasValid == false)
    return;

  if (io_hasValid == true && io_instrValid == false) {
    if (!reqIsSame()) {
      auto cacheStr = io_isUncache ? "UnCache" : "Cache";
      auto cancelStr = io_cancel ? " CANCELED" : "";
      auto hitInfo = io_isUncache ? ""
                     : io_isHit
                         ? fmt::format("hitWay: {:d}", (uint8_t)io_hitWays)
                         : "notHit";
      if (state[newMap].isWrite) {
        dclog("{:s} WRITE{:s} addr: " HEX_WORD ", data: " HEX_WORD ", {:s}",
              cacheStr, cancelStr, state[newMap].reqAddr,
              state[newMap].writeData, hitInfo);
      } else {
        auto retData =
            io_isHit && !io_isUncache
                ? fmt::format(", retData: " HEX_WORD, (word_t)io_retData)
                : "";
        dclog("{:s} READ{:s} addr: " HEX_WORD ", {:s}{:s}", cacheStr, cancelStr,
              state[newMap].reqAddr, hitInfo, retData);
      }
    }
  }
  if (io_hasValid == false && state[oldMap].valid == true) {
    if (io_mainState != run)
      dclog("FLUSHED when main is {:s}, write is {:s}",
            mainStateStr[state[newMap].mainState],
            writeStateStr[state[newMap].writeState]);
  }
}
#else
extern "C" void v_difftest_CacheRun(
    char io_mainState, svBit io_hasValid, int io_reqAddr, svBit io_isUncache,
    svBit io_isWrite, int io_writeData, svBit io_cancel, int io_retData,
    char io_hitWays, svBit io_isHit, char io_victimWay, const int *io_tagFrom1,
    const svBit *io_dirtyFrom1, const svBit *io_validFrom1,
    const int *io_wbBuffer, int io_wbAddr, char io_writeState,
    char io_instrState, svBit io_instrValid, char io_tagWay, char io_instrOp) {}
#endif
#undef dclog
#undef dcError