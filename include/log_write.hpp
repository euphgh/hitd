#ifndef __DIFF_LOG_H__
#define __DIFF_LOG_H__
#ifdef CONFIG_LRING_ENABLE
#define log_write(...) \
    do { \
        extern char lring[CONFIG_LRING_NR][CONFIG_LRING_LEN];\
        extern int lring_head;\
        snprintf(lring[lring_head], CONFIG_LRING_LEN, __VA_ARGS__); \
        lring_head = (lring_head+1)%CONFIG_LRING_NR;\
    } while(0)
#else 
#define log_write(...) \
    do { \
        extern FILE* log_fp; \
        fprintf(log_fp, __VA_ARGS__); \
        fflush(log_fp); \
    } while (0)
#endif
#endif /* !__DIFF_LOG_H__ */
