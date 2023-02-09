#ifndef __PADDR_TOP_H__
#define __PADDR_TOP_H__

#include "common.h"
#include "diff_struct.h"

#ifdef __cplusplus
extern "C" {
#endif

void* new_paddr_top();
bool paddr_do_read (void* paddr_top, word_t addr, wen_t info, word_t* data);
bool paddr_do_write(void* paddr_top, word_t addr, wen_t info, const word_t data);

#ifdef __cplusplus
}
#endif


#endif /* !__PADDR_IF_H__ */
