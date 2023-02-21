#ifndef __DPIC_HPP__
#define __DPIC_HPP__
#include "difftest/struct.hpp"
uint32_t dpi_regfile(uint8_t num);
uint8_t dpi_retire();
uint32_t dpi_retirePC();
uint32_t dpi_cp0_count();
void dpi_get_debug_info0(debug_info_t & debug_info);
void dpi_get_debug_info1(debug_info_t & debug_info);
void dpi_api_get_state(diff_state *mycpu);
uint8_t dpi_interrupt_seq();
#endif // !__DPIC_HPP__
