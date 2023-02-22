#include "testbench/dpic.hpp"
void dpi_api_get_state(diff_state *mycpu){
    for (uint8_t i = 0; i < 32; i++) {
        mycpu->gpr[i] = dpi_regfile(i);
    }
#ifdef CONFIG_HILO_DIFF
    uint64_t hilo = dpi_get_hilo();
    mycpu->hi = hilo >> 32;
    mycpu->lo = hilo & 0xffffffff;
#endif 
    mycpu->pc = dpi_retirePC();
}
