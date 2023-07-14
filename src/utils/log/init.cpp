#include "easylogging++.h"
#include "common.hpp"
#include <fmt/core.h>

extern char* arg_log_file;
extern uint32_t log_pc;
extern uint64_t ticks;
static std::string now_pc(const el::LogMessage* msg){
    return fmt::format(HEX_WORD, log_pc);
}
static std::string now_ticks(const el::LogMessage* msg){
    return std::to_string(ticks);
}
static bool is_first = true;
inline static void first_init(){
    el::Helpers::installCustomFormatSpecifier(el::CustomFormatSpecifier("%pc", now_pc));
    el::Helpers::installCustomFormatSpecifier(el::CustomFormatSpecifier("%ticks", now_ticks));
    el::Loggers::addFlag(el::LoggingFlag::ColoredTerminalOutput);
    // el::Configurations per_conf;
    // per_conf.setToDefault();
    // per_conf.setGlobally(el::ConfigurationType::Format, "%msg");
    // per_conf.setGlobally(el::ConfigurationType::Filename, "performance.log");
    // per_conf.set(el::Level::Info, el::ConfigurationType::ToStandardOutput, "false");
    // el::Loggers::getLogger("performance")->configure(per_conf);
    is_first = false;
}

el::Logger* logger_init(std::string name){
    if (is_first) first_init();

    el::Configurations log_conf;
    log_conf.setToDefault();
    log_conf.setGlobally(el::ConfigurationType::Enabled, "true");

    log_conf.setGlobally(el::ConfigurationType::Format, "[" + name + "][%ticks][%pc][%levshort]:%msg");
    log_conf.setGlobally(el::ConfigurationType::ToFile, MUXDEF(CONFIG_TRACE,"true","false"));
#ifdef CONFIG_TRACE
    log_conf.setGlobally(el::ConfigurationType::MaxLogFileSize, std::to_string(CONFIG_TRACE_FILE_SIZE << 10));
    log_conf.setGlobally(el::ConfigurationType::Filename, arg_log_file);
#endif
    log_conf.set(el::Level::Trace,   el::ConfigurationType::ToStandardOutput, "false");
    log_conf.set(el::Level::Info,    el::ConfigurationType::ToStandardOutput, "true");
    log_conf.set(el::Level::Error,   el::ConfigurationType::ToStandardOutput, "true");
    log_conf.set(el::Level::Warning, el::ConfigurationType::ToStandardOutput, "true");

    el::Logger* logger = el::Loggers::getLogger(name);
    logger->configure(log_conf);
    LOG(INFO) << "Init logger with name:" << name;
    return logger;
}

void disableLogger(el::Logger *logger) {
    auto conf = logger->configurations();
    conf->setGlobally(el::ConfigurationType::Enabled, "false");
    logger->configure(*conf);
}
void enableLogger(el::Logger *logger) {
    auto conf = logger->configurations();
    conf->setGlobally(el::ConfigurationType::Enabled, "true");
    logger->configure(*conf);
}