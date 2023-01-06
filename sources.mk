# SPDX-License-Identifier: MIT

ifneq ($(PL4_ROOT),)
pl4-basedir := $(PL4_ROOT)/
endif

ifeq ($(TARGET_PLATFORM), esp32)
PL4_SRCS += $(pl4-basedir)src/esp32_tls.c
else
$(warning "No target specified. Building with dummy target.")
PL4_SRCS += $(pl4-basedir)src/dummy.c
endif

PL4_INCS := $(pl4-basedir)include
