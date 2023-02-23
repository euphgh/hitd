#ifndef __DIFF_SIM__
#define __DIFF_SIM__

#include <string>
typedef enum{
    SIM_RUN,    // still run
    SIM_STOP,   // gdb breakpoint or watchpoint
    SIM_ABORT,  // difftest error or mem check error
    SIM_END,    // finish run sim
    SIM_INT,   // wait to static
    SIM_NEMU_QUIT,   // wait to static
}sim_status_t;
extern sim_status_t sim_status;
#define __ASSERT_SIM__(cond, str, ...) \
    do { \
        if (!(cond)) { \
            extern el::Logger *mycpu_log; \
            mycpu_log->error(fmt::format(str, ## __VA_ARGS__));\
            sim_status = SIM_ABORT; \
        } \
  } while (0)
#define __WAVE_DIR__ HITD_HOME "/vlogs/wave/"
#endif /* !__DIFF_SIM__ */
