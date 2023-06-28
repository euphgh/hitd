#include "cp0.hpp"
#include <queue>
#include "testbench/dpic.hpp"
#include <memory>
#include "testbench/cp0_checker.hpp"
#include "testbench/sim_state.hpp"
#include "fmt/core.h"
#include "easylogging++.h"

void cp0_checker::check_change(){
    word_t pc;
    if (dpi_is_cp0_change(&pc)){
        pc_when_changed.push(pc);
        auto cnt_cp0 = std::make_unique<CP0_t>();
        uint32_t data;
#define __cp0_reg_load__(regname,rd,sel,...) \
        data = dpi_get_cp0(rd, sel); \
        cnt_cp0->regname = { \
            __VA_ARGS__ \
        };
#define __cp0_field_load__(name,msb,lsb,reset,writable,check) \
        .name = static_cast<unsigned int>((data & BITMASK(msb+1)) >> lsb),
        __cp0_info__(__cp0_reg_load__, __cp0_field_load__, );
        saved_cp0.push(std::move(cnt_cp0));
    }
}
void cp0_checker::check_value(word_t pc, const CP0_t& ref){
    if (pc_when_changed.empty()) return;
    if (pc == pc_when_changed.front()){
        bool res = saved_cp0.front()->check(&ref);
        if (res){
            pc_when_changed.pop();
            saved_cp0.pop();
        }
        else {
            __ASSERT_SIM__(0, "CP0 value not correct");
            saved_cp0.front()->log_error(ref);
            pc_when_changed.pop();
            saved_cp0.pop();
        }
    }
}
