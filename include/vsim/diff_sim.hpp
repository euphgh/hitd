#ifndef __DIFF_SIM__
#define __DIFF_SIM__

typedef enum{
    SIM_RUN,    // still run
    SIM_STOP,   // gdb breakpoint or watchpoint
    SIM_ABORT,  // difftest error or mem check error
    SIM_END,    // finish run sim
    SIM_QUIT,   // wait to static
}sim_status_t;

#define __ASSERT_SIM__(cond,fmt,...) \
    do { \
        if (!(cond)) { \
            Error(fmt, ## __VA_ARGS__);\
            sim_status = SIM_ABORT;\
        } \
    } while (0)

#ifdef __DIFF_PROJ__
#define Assert(cond, format, ...) \
    do { \
        if (!(cond)) { \
            fflush(stdout);\
            fprintf(stderr, ANSI_FMT(format, ANSI_FG_RED) "\n", ##  __VA_ARGS__);\
            assert(cond);\
        } \
    } while (0)
#endif // __DIFF_PROJ__

extern sim_status_t sim_status;
#define __FUNC_BIN__ NSCSCC_HOME "/func_test_v0.01/soft/func/obj/main.bin"
#define __WAVE_DIR__ DIFF_HOME "/vlogs/wave/"
#endif /* !__DIFF_SIM__ */
