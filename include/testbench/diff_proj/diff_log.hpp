#ifndef __DIFF_LOG_H__
#define __DIFF_LOG_H__
#ifdef CONFIG_LRING_ENABLE
extern char lring[CONFIG_LRING_ENABLE][CONFIG_LRING_NR];\
extern int lring_head;\
#define log_write(...) \
    do { \
        snprintf(lring[lring_head] __VA_ARGS__); \
        lring_head = (lring_head+1)%CONFIG_LRING_NR;\
    } while(0)
#else 
#define log_write(...) \
    do { \
        extern FILE* log_dt; \
        fprintf(log_dt, __VA_ARGS__); \
        fflush(log_dt); \
    } while (0)
#endif
#endif /* !__DIFF_LOG_H__ */
