#include "paddr/paddr_interface.hpp"
#ifndef __SOC_HPP__
#define __SOC_HPP__
// using namespace std;
class basic_soc {
    public:
        enum { 
            BIN_FUNC, 
            BIN_PERF 
        };
        basic_soc(int test_code);

        enum { 
            SOC_REF = 0,
            SOC_DUT = 1,
            SOC_NOR
        };
        PaddrTop* get_paddr(int who);

        void set_switch(uint8_t value);
        void tick();
    private:
        std::vector<PaddrConfreg*> confreg_vct;
        std::vector<PaddrTop*> paddr_top_vct;
};
#endif // !__SOC_HPP__
