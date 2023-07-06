#include "common.hpp"
#include "testbench/sim_state.hpp"

#ifdef CONFIG_FREELIST_DIFF
#include "testbench/difftest/global_info.hpp"
enum PhyPosition { inFreeList, inROB, Non };
static std::map<PhyPosition, std::string> PosStr = {
    std::make_pair(inFreeList, "FreeList"),
    std::make_pair(inROB, "ROB"),
    std::make_pair(Non, "Non"),
};
static PhyPosition phyFree[2][64] = {{Non}};
static unsigned char oldMap = 0;
static unsigned char newMap = 1;

void difftest_init_PhyPosition() {
  for (int i = 0; i < 32; i++) {
    phyFree[newMap][i] = Non;
  }
  for (int i = 32; i < 64; i++) {
    phyFree[newMap][i] = inFreeList;
  }
}

void difftest_clean_phySign() {
  auto tmp = oldMap;
  oldMap = newMap;
  newMap = tmp;
  for (int i = 0; i < 64; i++) {
    phyFree[newMap][i] = Non;
  }
}

void logPhyRegsMove() {
  for (int i = 0; i < 64; i++) {
    auto oldPos = phyFree[oldMap][i];
    auto newPos = phyFree[newMap][i];
    if (oldPos != newPos) {
      if (oldPos == Non) {
        __ASSERT_SIM__(newPos != inROB,
                       "PRF {} apear in ROB but last cycle it not in FreeList",
                       i);
        mycpu_log->trace(fmt::format("[P] retire back prf {} to freeList", i));
      } else {
        if (newPos == Non) {
          __ASSERT_SIM__(oldPos != inFreeList,
                         "PRF {} disapear but last cycle it not in ROB", i);
          mycpu_log->trace(fmt::format("[P] retire clean prf {} from rob", i));
        } else {
          if (newPos == inROB)
            mycpu_log->trace(fmt::format("[P] dispatcher prf {} to rob", i));
          else
            mycpu_log->trace(
                fmt::format("[P] flush back prf {} to freeList", i));
        }
      }
    }
  }
}

void difftest_count_phySign() {
  int count = 0;
  for (int i = 0; i < 64; i++) {
    if (phyFree[newMap][i] != Non)
      count += 1;
  }
  if (count != 32) {
    __ASSERT_SIM__(false, "phy alloc total is not 32 but {}", count);
    logPhyRegsMove();
  }
}

extern "C" void v_difftest_PhyRegInFreeList(char io_flHead, char io_flTail,
                                            const char *io_fl) {
  for (int i = io_flTail; i != io_flHead; i = (i + 1) % 64) {
    auto prfNum = (unsigned char)io_fl[i & 0x1f];
    phyFree[newMap][prfNum] = inFreeList;
  }
}

extern "C" void v_difftest_PhyRegInROB(char io_robHead, char io_robTail,
                                       const char *io_rob, char io_flrHead,
                                       char io_flrTail, const char *io_flr,
                                       unsigned char io_isRecover) {
  if (!io_isRecover)
    for (int i = io_robTail; i != io_robHead; i = (i + 1) % 64) {
      auto prfNum = (unsigned char)io_rob[i & 0x1f];
      if (prfNum) {
        phyFree[newMap][prfNum] = inROB;
      }
    }
  else
    for (int i = io_flrTail; i != io_flrHead; i = (i + 1) % 64) {
      auto prfNum = (unsigned char)io_flr[i & 0x1f];
      if (prfNum) {
        phyFree[newMap][prfNum] = inROB;
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