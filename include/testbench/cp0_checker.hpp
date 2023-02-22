#include "cp0.hpp"
#include <memory>
#include <queue>
class cp0_checker{
    private:
        std::queue<word_t>  pc_when_changed;
        std::queue<std::unique_ptr<CP0_t>>   saved_cp0;
    public:
        void check_change();
        void check_value(word_t pc, const CP0_t& ref);
};

