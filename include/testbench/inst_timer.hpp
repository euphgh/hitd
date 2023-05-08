#ifndef __INST_TIMER__
#define __INST_TIMER__
#include "common.hpp"
#include "nemu/cpu/decode.hpp"
#include "paddr/paddr_interface.hpp"
#include <memory>
#include <vector>
typedef float       consume_t;
typedef uint32_t    runtime_t;
typedef uint32_t    iindex_t;
class inst_info{
    public:
        bool        is_enter;
        runtime_t   runtime;
        consume_t   consume;
        std::vector<std::tuple<uint64_t, consume_t>> verbose;
        inst_info(): is_enter(false), runtime(0), consume(0) {}
};
class inst_timer {
    public:
    inst_timer(AddrIntv _range);
    void add_inst(Decode& inst_state, consume_t consumed_time, uint64_t ticks);
    bool save_date(std::string filename);

    private:
    word_t mask;
    iindex_t item_nr;
    std::unique_ptr<inst_info[]> data;
    inline iindex_t pc2index(word_t pc){return (pc & mask) >> 2;}
    inline word_t index2pc(iindex_t index){return ((index<<2)|0x9fc00000); }
};
#endif // !__INST_TIMER__
