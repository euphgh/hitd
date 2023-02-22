#ifndef __DPIC_HPP__
#define __DPIC_HPP__
#include "difftest/struct.hpp"
#include "cp0.hpp"
void dpi_init();
uint32_t dpi_regfile(uint8_t num);
uint64_t dpi_get_hilo();
uint8_t dpi_retire();
uint32_t dpi_retirePC();
void dpi_get_debug_info0(debug_info_t & debug_info);
void dpi_get_debug_info1(debug_info_t & debug_info);
void dpi_api_get_state(diff_state *mycpu);
uint8_t dpi_interrupt_seq();
uint32_t dpi_get_cp0(int rd, int sel);
bool dpi_is_cp0_change(uint32_t* changed_pc);
#define dpi_get_cp0_count() dpi_get_cp0(9,0)
#endif // !__DPIC_HPP__
