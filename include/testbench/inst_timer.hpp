#ifndef __INST_TIMER__
#define __INST_TIMER__
#include "common.hpp"
#include "paddr/paddr_interface.hpp"
#include <cstdint>
typedef double consume_t;
class inst_timer {
    public:
        inst_timer(AddrIntv inst_range);
        inst_timer(inst_timer &&) = default;
        ~inst_timer();
        void add_inst(word_t pc, consume_t consumed_time);
        bool save_date(std::string filename);

    private:
        int32_t total_size;
        word_t mask;
        word_t prefix;
        std::unique_ptr<std::pair<word_t, consume_t>[]> time_barrel;
};
#endif // !__INST_TIMER__
