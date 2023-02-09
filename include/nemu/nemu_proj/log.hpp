#ifndef __NEMU_LOG_H__
#define __NEMU_LOG_H__
#ifdef __NEMU_PROJ__

#ifdef __cplusplus // only use when run nemu with nscscc SoC
extern "C" FILE* log_fp;
extern "C" bool log_enable();
#else
extern FILE* log_fp;
extern bool log_enable();
#endif

#define log_write(...) \
  do { \
    if (log_enable()) { \
      fprintf(log_fp, __VA_ARGS__); \
      fflush(log_fp); \
    } \
  } while (0)

#endif // __NEMU_PROJ__

#endif /* !__NEMU_LOG_H__ */
