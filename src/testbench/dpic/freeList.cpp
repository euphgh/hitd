#include "common.hpp"
#include "testbench/difftest/global_info.hpp"
#include "testbench/sim_state.hpp"
#include <cstdint>
#include <cstring>
#include <fmt/core.h>

#ifdef CONFIG_FREELIST_DIFF
enum PhyPosition { inFreeList, inROB, inRecover, Non, errorPlace };

class PhyRegsMap {
public:
  uint8_t freeListInfo[64] = {0};
  uint8_t robInfo[64] = {0};
  uint8_t recover[64] = {0};
  void clear() {
    memset(freeListInfo, 0, 64);
    memset(robInfo, 0, 64);
    memset(recover, 0, 64);
  }
  PhyRegsMap() {
    clear();
    for (int i = 32; i < 64; i++) {
      freeListInfo[i] = 1;
    }
  }
  void freeListAdd(uint8_t num) { freeListInfo[num] += 1; }
  void robAdd(uint8_t num) { robInfo[num] += 1; }
  void recoverAdd(uint8_t num) { recover[num] += 1; }
  uint32_t count() {
    __ASSERT_SIM__(freeListInfo[0] == 0, "PRF[0] should not exist in FreeList");
    uint8_t count = 0;
    for (int i = 0; i < 64; i++) {
      uint8_t bits = freeListInfo[i] + robInfo[i] + recover[i];
      if (bits == 0)
        continue;
      if (bits == 1) {
        count += 1;
        continue;
      }
      __ASSERT_SIM__(false, "PRF[{}] apears more than once", i);
      fmt::print("FreeList: {}, ROB: {}, Recover: {}\n", freeListInfo[i],
                 robInfo[i], recover[i]);
    }
    return count;
  }
  PhyPosition getPos(uint8_t num) {
    if ((freeListInfo[num] == 1) && (robInfo[num] == 0) && (recover[num] == 0))
      return inFreeList;
    else if ((freeListInfo[num] == 0) && (robInfo[num] == 1) &&
             (recover[num] == 0))
      return inROB;
    else if ((freeListInfo[num] == 0) && (robInfo[num] == 0) &&
             (recover[num] == 1))
      return inRecover;
    else if ((freeListInfo[num] == 0) && (robInfo[num] == 0) &&
             (recover[num] == 0))
      return Non;
    else
      return errorPlace;
  }
};

static std::map<PhyPosition, std::string> PosStr = {
    std::make_pair(inFreeList, "FreeList"),
    std::make_pair(inROB, "ROB"),
    std::make_pair(Non, "Non"),
};
static unsigned char oldMap = 0;
static unsigned char newMap = 1;

static PhyRegsMap pregMaps[2];

void difftest_clean_phySign() {
  auto tmp = oldMap;
  oldMap = newMap;
  newMap = tmp;
  pregMaps[newMap].clear();
}

void logPhyRegsMove() {
  for (int i = 0; i < 64; i++) {
    auto oldPos = pregMaps[oldMap].getPos(i);
    auto newPos = pregMaps[newMap].getPos(i);
    if ((oldPos == errorPlace) || (newPos == errorPlace))
      return;
    if (oldPos != newPos) {
      if (oldPos == Non) {
        __ASSERT_SIM__(newPos == inFreeList,
                       "PRF {} apear not in {} and last cycle it not valid", i,
                       PosStr[newPos]);
        mycpu_log->trace(fmt::format("[P] retire back prf {} to freeList", i));
      } else {
        if (newPos == Non) {
          __ASSERT_SIM__(oldPos == inROB,
                         "PRF {} disapear but last cycle it not in ROB", i);
          mycpu_log->trace(fmt::format("[P] retire clean prf {} from rob", i));
        } else {
          if ((oldPos == inFreeList) && (newPos == inROB))
            mycpu_log->trace(fmt::format("[P] dispatcher prf {} to rob", i));
          else if ((oldPos == inROB) && (newPos == inRecover))
            mycpu_log->trace(
                fmt::format("[P] flush move prf {} to Recover", i));
          else if ((oldPos == inRecover) && (newPos == inFreeList))
            mycpu_log->trace(
                fmt::format("[P] Recover pop prf {} to FreeList", i));
          else
            __ASSERT_SIM__(false, "not expected move from {} to {}", oldPos,
                           newPos);
        }
      }
    }
  }
}

void difftest_count_phySign() {
  auto count = pregMaps[newMap].count();
  if (count != 32) {
    __ASSERT_SIM__(false, "phy alloc total is not 32 but {}", count);
    logPhyRegsMove();
  }
}

extern "C" void v_difftest_PhyRegInFreeList(char io_flHead, char io_flTail,
                                            const char *io_fl) {
  for (int i = io_flTail; i != io_flHead; i = (i + 1) % 64) {
    auto prfNum = (unsigned char)io_fl[i & 0x1f];
    pregMaps[newMap].freeListAdd(prfNum);
  }
}

extern "C" void v_difftest_PhyRegInROB(char io_robHead, char io_robTail,
                                       const char *io_rob, char io_flrHead,
                                       char io_flrTail, const char *io_flr,
                                       unsigned char io_isRecover) {
  for (int i = io_robTail; i != io_robHead; i = (i + 1) % 64) {
    auto prfNum = (unsigned char)io_rob[i & 0x1f];
    if (prfNum) {
      pregMaps[newMap].robAdd(prfNum);
    }
  }
  if (io_isRecover)
    for (int i = io_flrTail; i != io_flrHead; i = (i + 1) % 64) {
      auto prfNum = (unsigned char)io_flr[i & 0x1f];
      if (prfNum) {
        pregMaps[newMap].recoverAdd(prfNum);
      }
    }
}
#else
extern "C" void v_difftest_PhyRegInROB(char io_robHead, char io_robTail,
                                       const char *io_rob, char io_flrHead,
                                       char io_flrTail, const char *io_flr,
                                       unsigned char io_isRecover) {}

extern "C" void v_difftest_PhyRegInFreeList(char io_flHead, char io_flTail,
                                            const char *io_fl) {}
#endif