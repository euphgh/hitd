#include "nemu/mytrace.hpp"
#include <elf.h>
#include <string>
#include <tuple>
#include <vector>
#ifdef CONFIG_ISA64
#define Elf_Ehdr Elf64_Ehdr
#define Elf_Ehdr Elf64_Ehdr 
#define Elf_Shdr Elf64_Shdr 
#define Elf_Off Elf64_Off
#define Elf_Addr Elf64_Addr 
#define Elf_Sym Elf64_Sym 
#define ELFCLASS ELFCLASS64
#else 
#define Elf_Ehdr Elf32_Ehdr
#define Elf_Ehdr Elf32_Ehdr 
#define Elf_Shdr Elf32_Shdr 
#define Elf_Off Elf32_Off
#define Elf_Addr Elf32_Addr 
#define Elf_Sym Elf32_Sym 
#define ELFCLASS ELFCLASS32
#endif
static FILE* fp;
static Elf_Ehdr head;
static Elf_Shdr shstr_shd;
static Elf_Shdr str_shd;
#define NAME_LEN 32

static int fread_at(FILE* fp, size_t offset, int bytes, void* addr){/*{{{*/
    int res1 = fseek(fp, offset, SEEK_SET);
    int res2 = fread(addr, bytes, 1, fp);
    return (res2!=0) && (res1==0);
}/*}}}*/
static void get_sec_name(Elf_Shdr target, char* name){/*{{{*/
    Elf_Off name_off = shstr_shd.sh_offset+target.sh_name;
    fread_at(fp, name_off, NAME_LEN, name);
}/*}}}*/
static void find_shd(const char* name, Elf_Shdr* target){/*{{{*/
    for (size_t i = 0; i < head.e_shnum; i++){
        fread_at(fp, head.e_shoff + head.e_shentsize*i, sizeof(Elf_Shdr), target);
        char tmp_name[NAME_LEN] = {0};
        get_sec_name(*target, tmp_name);
        if (strcmp(name,tmp_name)==0) break;
    }
}/*}}}*/
static void init_readelf(const char* filename){/*{{{*/
    fp = fopen(filename, "rb");
    assert(fp!=NULL);
    /*read elf file head to get section head{{{*/
    fread_at(fp, 0,  sizeof(Elf_Ehdr), &head);
    assert(head.e_ident[EI_CLASS]==ELFCLASS);
    assert(head.e_ident[EI_DATA]==ELFDATA2LSB);
    assert(head.e_shoff!=0);// no section head table
    assert(head.e_shstrndx!=SHN_UNDEF);/*}}}*/
    fread_at(fp, head.e_shoff + head.e_shentsize*head.e_shstrndx, sizeof(Elf_Shdr), &shstr_shd);
    assert(shstr_shd.sh_type==SHT_STRTAB);
}/*}}}*/
static void get_sym_name(Elf_Sym sym, char* name){/*{{{*/
    Elf_Off name_off = str_shd.sh_offset + sym.st_name;
    fread_at(fp, name_off, NAME_LEN, name);
}/*}}}*/

void load_elf_info(const char* filename, 
        std::vector<std::tuple<word_t, word_t, std::string>>& func_list){/*{{{*/
    init_readelf(filename);
    /* read section head to get section{{{*/
    Elf_Shdr symbol_shd;
    find_shd(".symtab", &symbol_shd);
    find_shd(".strtab", &str_shd);
    /*}}}*/
    Elf_Off  symbol_tb_a;
    symbol_tb_a = symbol_shd.sh_offset;
    int total = symbol_shd.sh_size/symbol_shd.sh_entsize;
    std::vector<std::tuple<word_t, word_t, std::string>> res;
    for (int i = 0; i < total; i++) {
        Elf_Sym sym;
        int res = fread_at(fp, symbol_tb_a+symbol_shd.sh_entsize*i, symbol_shd.sh_entsize, &sym);
        assert (res);
        if (ELF32_ST_TYPE(sym.st_info)==STT_FUNC){
            Elf_Addr value = sym.st_value;
            uint64_t size = sym.st_size;
            char fun_name[NAME_LEN] = {0};
            get_sym_name(sym, fun_name);
            fun_name[NAME_LEN-1] = '\0';
            func_list.push_back(std::make_tuple(value,size,fun_name));
        }
    }
    fclose(fp);
}/*}}}*/
