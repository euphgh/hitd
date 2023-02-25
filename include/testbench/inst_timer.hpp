#ifndef __INST_TIMER__
#define __INST_TIMER__
#include "common.hpp"
#include "paddr/paddr_interface.hpp"
#include <cstdint>
#include <map>
#include <memory>
#include <utility>
typedef double consume_t;
struct inst_info{
    uint32_t first;
    consume_t second;
    uint64_t now_ticks;
};
class basic_block {
    public:
        int point;
        word_t match_pc;
        word_t start_pc;
        std::vector<inst_info> time_barrel;
        basic_block(word_t pc): point(0), match_pc(pc), start_pc(pc) {}
        inline bool is_block(word_t pc){ return match_pc==pc; }
        void add_inst(consume_t consumed_time, bool end);
};
class inst_timer {
    public:
        void add_inst(word_t pc, consume_t consumed_time, bool end);
        bool save_date(std::string filename);

    private:
        std::vector<std::shared_ptr<basic_block>> block_list;
};
#endif // !__INST_TIMER__
