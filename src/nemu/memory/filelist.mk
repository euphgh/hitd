# Copyright (c) 2023 Hu Gunaghui. Harbin Institute of Technology.
ifdef CONFIG_NEMU_SELF
SRCS-BLACKLIST-y += src/memory/nsc_paddr.c
else
SRCS-BLACKLIST-y += src/memory/paddr.c
endif
