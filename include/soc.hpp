#include "debug.hpp"
#include "paddr/paddr_interface.hpp"
#include "testbench/sim_state.hpp"
#include <map>
#include <string>
#include <utility>
#ifndef __SOC_HPP__
#define __SOC_HPP__

#ifdef CONFIG_DIFFTEST
#define SoC_t dual_soc
#else
#define SoC_t single_soc
#endif

class dual_soc {/*{{{*/
    public:
        enum soc_who  { DUT = 0, REF = 1};
        dual_soc(bool useSnapShot = false, std::string snapShotName = "");
        inline PaddrTop* get_dut_soc(){ return ptop[DUT]; }
        inline PaddrTop* get_ref_soc(){ return ptop[REF]; }

        void tick();
        void set_switch(uint8_t value);
        inline uint8_t dut_ext_int() { return ext_int[DUT]; }
        inline uint8_t ref_ext_int() { return ext_int[REF]; }
        void saveSnapShot(std::string) const;

      private:
        PaddrTop*       ptop[2];
        PaddrConfreg*   pcfreg[2];
        Puart8250*      puart[2];
        uint8_t         ext_int[2];
        Pmem *resetMem[2];
        Pmem *mainMem[2];
        bool has_confreg;
        void create_basic_soc(bool useSnapShot = false,
                              std::string snapShotName = "");
        void create_boot_soc(bool useSnapShot = false,
                             std::string snapShotName = "");
        void create_kernel_soc(bool useSnapShot = false,
                               std::string snapShotName = "");
        void check_uart_tx();
        void check_confreg_tx();
};/*}}}*/

class single_soc {/*{{{*/
    public:
      single_soc(bool useSnapShot = false, std::string snapShotName = "");
      inline PaddrTop *get_single_soc() { return ptop; }
      void tick();
      void set_switch(uint8_t value);
#ifdef CONFIG_BASIC_SOC
        uint8_t ext_int() { return 0; }
#else
        uint8_t ext_int() { return (puart->irq() << 1); }
#endif
        void saveSnapShot(std::string) const;

      private:
        PaddrTop* ptop;
        PaddrConfreg *pcfreg;
        Puart8250 *puart;
        Pmem *resetMem;
        Pmem *mainMem;
        void create_basic_soc(bool useSnapShot = false,
                              std::string snapShotName = "");
        void create_boot_soc(bool useSnapShot = false,
                             std::string snapShotName = "");
        void create_kernel_soc(bool useSnapShot = false,
                               std::string snapShotName = "");
};/*}}}*/

#endif // !__SOC_HPP__
