#include "Vmycpu_top__Dpi.h"
#include "cp0.hpp"
#include "debug.hpp"
#include "testbench/dpic.hpp"

/* initalize dpi */
void dpi_init() { TODO(); }

/* pass regfile num and get the value of arch regfile in this cycle */
uint32_t dpi_regfile(uint8_t num) { TODO(); }

/* return the number of retire instructions in this cycle */
uint8_t dpi_retire() { TODO(); }

/* return the PC value of the last retire instruction in this cycle */
uint32_t dpi_retirePC() { TODO(); }

/* return the two regiter value: cat(hi,lo) */
uint64_t dpi_get_hilo() { TODO(); }

/* return 0 if all retire instruction is not interrrupted
 * else return which instruction is interrrupted */
uint8_t dpi_interrupt_seq() { TODO(); }

/* get CP0 value by rd and select */
uint32_t dpi_get_cp0(int rd, int sel) { TODO(); }

/* return true if cp0 change in this cycle
 * and write the PC of instruction who
 * change the cp0 */
bool dpi_is_cp0_change(uint32_t *changed_pc) { TODO(); }

/* hitd user do not pay attention, only contributor need */
void dpi_get_debug_info0(debug_info_t &debug_info) { TODO(); }
void dpi_get_debug_info1(debug_info_t &debug_info) { TODO(); }
