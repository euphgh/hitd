#include "diff_sim.hpp"
#include "PaddrInterface.hpp"
#include "debug.h"
#include <utility>

PaddrTop::PaddrTop(){ devices.clear(); };

bool PaddrTop::add_dev(AddrIntv &new_range, PaddrInterface *dev) {
    // check overlap
    for (auto it: devices){
        AddrIntv old_range = it.first;
        word_t l_max = std::max(old_range.start,new_range.start);
        word_t r_min = std::min(old_range.end(),new_range.end());
        if (l_max < r_min) return false; // overleap
    }
    devices.push_back(std::make_pair(new_range, dev));
    return true;
}
bool PaddrTop::do_read (word_t addr, wen_t info, word_t* data){
    for (auto it: devices){
        AddrIntv dev_range = it.first;
        if (dev_range.start<=addr && addr+info.size<=dev_range.end()){
            return it.second->do_read(addr & dev_range.mask, info, data);
        }
    }
    return false;
}
bool PaddrTop::do_write(word_t addr, wen_t info, const word_t data){
    for (auto it: devices){
        AddrIntv dev_range = it.first;
        if (dev_range.start<=addr && addr+info.size<=dev_range.end()){
            return it.second->do_write(addr & dev_range.mask, info, data);
        }
    }
    return false;
}
PaddrTop::PaddrTop(PaddrTop &src){
    for (auto element: src.devices) {
        PaddrInterface* new_dev = element.second->deep_copy();
        devices.push_back(std::make_pair(element.first, new_dev));
    }
}
PaddrInterface* PaddrTop::deep_copy(){ return new PaddrTop(*this); }
