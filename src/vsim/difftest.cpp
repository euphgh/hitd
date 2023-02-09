#include <cassert>
#include <string>
#include "Vmycpu_top__Dpi.h"
#include "diff_func.hpp"
#include "diff_struct.h"
#include "dpic.hpp"
#include <diff_proj/diff_log.h>
#include "diff_sim.hpp"
#include <dlfcn.h>

REF_INIT ref_init = nullptr;
REF_TICK_INT ref_tick_int = nullptr;
REF_HILO_SET ref_hilo_set = nullptr;
REF_EXEC_ONCE ref_exec_once = nullptr;
REF_GPR_SET ref_gpr_set = nullptr;
REF_GET_STATE ref_get_state = nullptr;
REF_GET_DEBUG_INFO ref_get_debug_info = nullptr;

typedef bool (*LOG_ENABLE)(); 

void difftest_init(const char* ref_so_file){
    assert(ref_so_file != NULL);

    void *handle;
    handle = dlopen(ref_so_file, RTLD_LAZY);
    Assert(handle, "Can not open %s file",ref_so_file);

    ref_init = (REF_INIT)dlsym(handle, "ref_init");
    Assert(ref_init, "Can not find ref_init");  
    ref_tick_int = (REF_TICK_INT)dlsym(handle, "ref_tick_int");
    Assert(ref_tick_int, "Can not find ref_tick_int");  
    ref_hilo_set = (REF_HILO_SET)dlsym(handle, "ref_hilo_set");
    Assert(ref_hilo_set, "Can not find ref_hilo_set");  
    ref_exec_once = (REF_EXEC_ONCE)dlsym(handle, "ref_exec_once");
    Assert(ref_exec_once, "Can not find ref_exec_once");  
    ref_gpr_set = (REF_GPR_SET)dlsym(handle, "ref_gpr_set");
    Assert(ref_gpr_set, "Can not find ref_gpr_set");  
    ref_get_state = (REF_GET_STATE)dlsym(handle, "ref_get_state");
    Assert(ref_get_state, "Can not find ref_get_state");  
    ref_get_debug_info = (REF_GET_DEBUG_INFO)dlsym(handle, "ref_get_debug_info");
    Assert(ref_get_debug_info, "Can not find ref_get_debug_info");  

    Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
    Log("The result of every instruction will be compared with %s.", ref_so_file);
}

bool difftest_check(diff_state *cpu, diff_state *ref_r){
    bool ans = ref_r->pc==cpu->pc;
    for (uint8_t i = 0; i < 32; i++) {
        ans &= (ref_r->gpr[i]==cpu->gpr[i]);
    }
    return ans;
}
void difftest_show_error(diff_state *cpu, diff_state *ref_r){
#define FMT_REG  "%-8s" FMT_WORD "%20d\n"
    Log("Difftest FAIL for " ANSI_FMT("reference",ANSI_FG_GREEN) " is different from " ANSI_FMT("nemu",ANSI_FG_RED));
    for (size_t i = 0; i < ARRLEN(ref_r->gpr); i++) {
        bool error = ref_r->gpr[i]!=cpu->gpr[i];
        const char *my_fmt = error ? ANSI_FMT(FMT_REG, ANSI_FG_RED) : FMT_REG;
        printf(my_fmt,std::to_string(i).c_str(),cpu->gpr[i],cpu->gpr[i]);
        if (error) printf(ANSI_FMT(FMT_REG, ANSI_FG_GREEN),
            std::to_string(i).c_str(),ref_r->gpr[i],ref_r->gpr[i]);
    }
    bool error = ref_r->pc!=cpu->pc;
    const char *my_fmt = error ? ANSI_FMT(FMT_REG, ANSI_FG_RED) : FMT_REG;
    printf(my_fmt,"pc",cpu->pc,cpu->pc);
    if (error) printf(ANSI_FMT(FMT_REG, ANSI_FG_GREEN),
            "pc",ref_r->pc,ref_r->pc);
}

void dut_get_state(diff_state *mycpu){
    for (uint8_t i = 0; i < 32; i++) {
        mycpu->gpr[i] = dpi_regfile(i);
    }
    mycpu->pc = dpi_retirePC();
}
