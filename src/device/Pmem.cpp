#include <fstream>
#include <iostream>
#include "diff_sim.hpp"
#include "PaddrInterface.hpp"

Pmem::Pmem(word_t size_bytes) {/*{{{*/
    Assert(IS_2_POW(size_bytes),"Pmem size is not 2 power: %x",size_bytes);
    mem = new unsigned char[size_bytes];
    mem_size = size_bytes;
}/*}}}*/
Pmem::Pmem(const AddrIntv &_range): Pmem(_range.mask+1) {}
Pmem::Pmem(const AddrIntv &_range, unsigned char *init_binary){/*{{{*/
    word_t size_bytes = _range.mask+1;
    Assert(IS_2_POW(size_bytes),"Pmem size is not 2 power: %x",size_bytes);
    mem = init_binary;
    mem_size = size_bytes;
}/*}}}*/
Pmem::Pmem(size_t size_bytes, const char *init_file): Pmem(size_bytes) {/*{{{*/
    std::ifstream file(init_file,std::ios::in | std::ios::binary | std::ios::ate);
    size_t file_size = file.tellg();
    file.seekg(std::ios_base::beg);
    if (file_size > mem_size) {
        std::cerr << "mmio_mem size is not big enough for init file." << std::endl;
        file_size = size_bytes;
    }
    file.read((char*)mem,file_size);
}/*}}}*/
Pmem::Pmem(Pmem &src){/*{{{*/
    mem_size = src.mem_size;
    mem = new unsigned char[mem_size];
    memcpy(mem,src.get_mem_ptr(),mem_size);
}/*}}}*/
Pmem::~Pmem() { delete [] mem; }

bool Pmem::do_read (word_t addr, wen_t info, word_t* data){/*{{{*/
    bool res = true;
    switch (info.size) {
        case 1: 
            *(uint8_t*) data = *(uint8_t*)(mem+addr);
            break;
        case 2: 
            *(uint16_t*) data = *(uint16_t*)(mem+addr);
            break;
        case 4: 
            *(uint32_t*) data = *(uint32_t*)(mem+addr);
            break;
        default:
            res = false;
            Assert(0,"Pmem read not support size:%x",info.size);
    }
    return res;
}/*}}}*/
bool Pmem::do_write(word_t addr, wen_t info, const word_t data){/*{{{*/
    bool res = true;
    switch (info.size) {
        case 1: 
            *(uint8_t*)(mem+addr) = (uint8_t)data ;
            break;
        case 2: 
            *(uint16_t*)(mem+addr) = (uint16_t)data ;
            break;
        case 4: 
            if (likely(info.wstrb==0xf)) *(uint32_t*)(mem+addr) = data;
            else {
                if (BITS(info.wstrb,0,0)) *(uint8_t *)(mem+addr+0) = BITS(data,7,0); 
                if (BITS(info.wstrb,1,1)) *(uint8_t *)(mem+addr+1) = BITS(data,15,8);
                if (BITS(info.wstrb,2,2)) *(uint8_t *)(mem+addr+2) = BITS(data,23,16);
                if (BITS(info.wstrb,3,3)) *(uint8_t *)(mem+addr+3) = BITS(data,31,24);
            }
            break;
        default:
            res = false;
            Assert(0,"Pmem read not support size:%x",info.size);
    }
    return res;
}/*}}}*/
void Pmem::load_binary(uint64_t offset, const char *init_file) {/*{{{*/
    std::ifstream file(init_file,std::ios::in | std::ios::binary | std::ios::ate);
    size_t file_size = file.tellg();
    file.seekg(std::ios_base::beg);
    if (offset >= mem_size || file_size+offset > mem_size) {
        std::cerr << "memory size is not big enough for init file." << std::endl;
        file_size = mem_size;
    }
    file.read((char*)mem+offset,file_size);
}/*}}}*/
void Pmem::save_binary(const char *filename) {/*{{{*/
    std::ofstream file(filename, std::ios::out | std::ios::binary);
    file.write((char*)mem, mem_size);
}/*}}}*/
uint8_t* Pmem::get_mem_ptr() { return mem; }
PaddrInterface* Pmem::deep_copy(){ return new Pmem(*this); }
