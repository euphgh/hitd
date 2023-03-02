#include "debug.hpp"
#include "paddr/paddr_interface.hpp"
#include "testbench/sim_state.hpp"
#include <map>
#include <utility>
#ifndef __SOC_HPP__
#define __SOC_HPP__

class dual_soc {/*{{{*/
    public:
        enum soc_who  { DUT = 0, REF = 1};
        dual_soc(int test_code);
        inline PaddrTop* get_dut_soc(){ return ptop[DUT]; }
        inline PaddrTop* get_ref_soc(){ return ptop[REF]; }

        inline void tick() { /*{{{*/
            if(has_confreg) {
                pcfreg[0]->tick();
                pcfreg[1]->tick();
            }
        }/*}}}*/
        inline void set_switch(uint8_t value){/*{{{*/
            if(has_confreg) {
                pcfreg[0]->set_switch(value);
                pcfreg[1]->set_switch(value);
            }
        }/*}}}*/
    private:
        PaddrTop* ptop[2];
        PaddrConfreg *pcfreg[2];
        bool has_confreg;
        void create_basic_soc(int test_code);
        void create_boot_soc(int test_code);
        void create_kernel_soc(int test_code);
};/*}}}*/

class single_soc {/*{{{*/
    public:
        single_soc(int test_code);
        inline PaddrTop* get_single_soc(){ return ptop; }
        inline void tick() { if(pcfreg) pcfreg->tick(); }
        inline void set_switch(uint8_t value) { if(pcfreg) pcfreg->set_switch(value); } 

    private:
        PaddrTop* ptop;
        PaddrConfreg *pcfreg;
        void create_basic_soc(int test_code);
        void create_boot_soc(int test_code);
        void create_kernel_soc(int test_code);
};/*}}}*/

#endif // !__SOC_HPP__
