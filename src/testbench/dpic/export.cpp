#include "testbench/dpic.hpp"
#include "Vmycpu_top__Dpi.h"
#include "debug.hpp"
#include "cp0.hpp"

static svScope RegFile_u ; 
static svScope u_PrimaryBranchAmend ; 
static svScope u_WriteBack ; 
static svScope u_PrimaryExceptionProcessor ; 

void dpi_init(){
    RegFile_u = svGetScopeFromName("TOP.mycpu_top.u_Main.u_ID.RegFile_u"); 
    u_PrimaryBranchAmend = svGetScopeFromName("TOP.mycpu_top.u_Main.u_PrimaryBranchAmend"); 
    u_WriteBack = svGetScopeFromName("TOP.mycpu_top.u_Main.u_WriteBack"); 
    u_PrimaryExceptionProcessor = svGetScopeFromName("TOP.mycpu_top.u_Main.u_PrimaryExceptionProcessor"); 
}

uint64_t dpi_get_hilo(){
    TODO();
}
uint32_t dpi_regfile(uint8_t num){
    svSetScope(RegFile_u);
    return get_regfile(num);
}

uint8_t dpi_retire(){
    svSetScope(u_PrimaryBranchAmend);
    bool down = commit0();

    svSetScope(u_WriteBack);
    bool up = commit1();
    return up + down;
}

uint32_t dpi_retirePC(){
    svSetScope(u_WriteBack);
    uint32_t last_pc = commitPC1();
    if (!commit1()){
        svSetScope(u_PrimaryBranchAmend);
        last_pc = commitPC0();
    }
    return last_pc;
}

void dpi_get_debug_info0(debug_info_t & debug_info){
    svSetScope(u_PrimaryBranchAmend);
    debug_info.pc = commitPC0();
    debug_info.wen = commitWEN0();
    debug_info.wnum = commitWNUM0();
    debug_info.wdata = commitWDATA0();
}

void dpi_get_debug_info1(debug_info_t & debug_info){
    svSetScope(u_WriteBack);
    debug_info.pc = commitPC1();
    debug_info.wen = commitWEN1();
    debug_info.wnum = commitWNUM1();
    debug_info.wdata = commitWDATA1();
}

uint8_t dpi_interrupt_seq(){
    svSetScope(u_WriteBack);
    uint8_t res = 0;
    if (is_interrupt()){
        svSetScope(u_PrimaryBranchAmend);
        res = commit0() ? 2 : 1;
    }
    return res;
}
uint32_t dpi_get_cp0(int rd, int sel){
    svSetScope(u_PrimaryExceptionProcessor);
    return get_cp0_value(rd<<3|sel);
}

bool dpi_is_cp0_change(uint32_t* changed_pc){
    svSetScope(u_PrimaryExceptionProcessor);
    bool changed = cp0_change();
    if (changed) {
        *changed_pc = cp0_change_pc();
    }
    return changed;
}
