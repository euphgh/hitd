#include "common.hpp"

enum CacheMainState {

};
enum CacheWriteState {

};
extern "C" void v_difftest_CacheRun(char io_mainState, bool io_cancel,
                                    bool io_hasValid, int io_reqAddr,
                                    char io_hitWays, int io_retData,
                                    char io_victimWay, int io_vicTag,
                                    bool io_vicDirty, bool io_vicValid,
                                    const int *io_vicLine, char io_writeState,
                                    int io_writeData) {}