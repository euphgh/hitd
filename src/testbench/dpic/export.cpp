#include "testbench/dpic.hpp"
#include <cstdint>
#include "Vmycpu_top__Dpi.h"
#include "testbench/dpic.hpp"
uint32_t dpi_regfile(uint8_t num){
    const svScope scope = svGetScopeFromName("TOP.mycpu_top.u_Main.u_ID.RegFile_u"); 
    svSetScope(scope);
    return get_regfile(num);
}

uint8_t dpi_retire(){
    const svScope u_PrimaryBranchAmend = svGetScopeFromName("TOP.mycpu_top.u_Main.u_PrimaryBranchAmend"); 
    svSetScope(u_PrimaryBranchAmend);
    bool down = commit0();

    const svScope u_WriteBack = svGetScopeFromName("TOP.mycpu_top.u_Main.u_WriteBack"); 
    svSetScope(u_WriteBack);
    bool up = commit1();
    return up + down;
}

uint32_t dpi_retirePC(){
    const svScope u_WriteBack = svGetScopeFromName("TOP.mycpu_top.u_Main.u_WriteBack"); 
    svSetScope(u_WriteBack);
    uint32_t last_pc = commitPC1();
    if (!commit1()){
        const svScope u_PrimaryBranchAmend = svGetScopeFromName("TOP.mycpu_top.u_Main.u_PrimaryBranchAmend"); 
        svSetScope(u_PrimaryBranchAmend);
        last_pc = commitPC0();
    }
    return last_pc;
}

uint32_t dpi_cp0_count(){
    const svScope u_PrimaryExceptionProcessor = svGetScopeFromName("TOP.mycpu_top.u_Main.u_PrimaryExceptionProcessor"); 
    svSetScope(u_PrimaryExceptionProcessor);
    return get_cp0_count();
}
void dpi_get_debug_info0(debug_info_t & debug_info){
    const svScope u_PrimaryBranchAmend = svGetScopeFromName("TOP.mycpu_top.u_Main.u_PrimaryBranchAmend"); 
    svSetScope(u_PrimaryBranchAmend);
    debug_info.pc = commitPC0();
    debug_info.wen = commitWEN0();
    debug_info.wnum = commitWNUM0();
    debug_info.wdata = commitWDATA0();
}
void dpi_get_debug_info1(debug_info_t & debug_info){
    const svScope u_WriteBack = svGetScopeFromName("TOP.mycpu_top.u_Main.u_WriteBack"); 
    svSetScope(u_WriteBack);
    debug_info.pc = commitPC1();
    debug_info.wen = commitWEN1();
    debug_info.wnum = commitWNUM1();
    debug_info.wdata = commitWDATA1();
}
uint8_t dpi_interrupt_seq(){
    const svScope u_WriteBack = svGetScopeFromName("TOP.mycpu_top.u_Main.u_WriteBack"); 
    svSetScope(u_WriteBack);
    uint8_t res = 0;
    if (is_interrupt()){
        const svScope u_PrimaryBranchAmend = svGetScopeFromName("TOP.mycpu_top.u_Main.u_PrimaryBranchAmend"); 
        svSetScope(u_PrimaryBranchAmend);
        res = commit0() ? 2 : 1;
    }
    return res;
}
