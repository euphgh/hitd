#include "paddr/paddr_interface.hpp"
#ifndef __SOC_HPP__
#define __SOC_HPP__
enum { func, perf };
class basic_soc {
    public:
        basic_soc(int number, int bin);
        PaddrTop* get_paddr(int number);
        void set_switch(uint8_t value);
        void tick();
    private:
        std::vector<PaddrConfreg*> confreg_vct;
        std::vector<PaddrTop*> paddr_top_vct;
};
#endif // !__SOC_HPP__
