DIRS-y += src/nemu/monitor/sdb
SRCS-y += src/nemu/monitor/execute.cpp
SRCS-y += src/nemu/monitor/monitor.cpp
DIRS-$(CONFIG_DWARF) += src/nemu/monitor/sdb/dwarf
