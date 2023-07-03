#include "common.hpp"
#include <fmt/core.h>
class tlb_entry {
    public:
        bool g : 1;
        bool v0 : 1;
        bool v1 : 1;
        bool d0 : 1;
        bool d1 : 1;
        unsigned c0 : 3;
        unsigned c1 : 3;
        word_t pfn0 : 20;
        word_t pfn1 : 20;
        word_t vpn2 : 19;
        unsigned asid : 8;
        tlb_entry(
                bool _g = 0, 
                bool _v0 = 0, 
                bool _v1 = 0, 
                bool _d0 = 0, 
                bool _d1 = 0, 
                unsigned _c0 = 0, 
                unsigned _c1 = 0, 
                word_t _pfn0 = 0, 
                word_t _pfn1 = 0, 
                word_t _vpn2 = 0, 
                unsigned _asid = 0
                ): 
            g(_g), 
            v0(_v0), 
            v1(_v1),
            d0(_d0),
            d1(_d1),
            c0(_c0),
            c1(_c1),
            pfn0(_pfn0),
            pfn1(_pfn1),
            vpn2(_vpn2),
            asid(_asid) {}

        void print() const {
            fmt::print("{{VPN2:{}, ASID:{}, G:{}, PFN0:{}, V0:{}, D0:{}, C0:{}, PFN1:{}, V1:{}, D1:{}, C1:{}}}\n",
                    vpn2<<13,(uint8_t)asid, (bool)g, 
                    pfn0<<12,(bool)v0,(bool)d0,(unsigned)c0,
                    pfn1<<12,(bool)v1,(bool)d1,(unsigned)c1);
        }
};

