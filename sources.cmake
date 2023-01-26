# SPDX-License-Identifier: MIT

if(TARGET_PLATFORM STREQUAL esp32)
	list(APPEND PL4_SRCS ${CMAKE_CURRENT_LIST_DIR}/src/esp32_tls.c)
else()
	message(WARN "No target specified. Building with dummy target")
	list(APPEND PL4_SRCS ${CMAKE_CURRENT_LIST_DIR}/src/dummy.c)
endif()

list(APPEND PL4_INCS ${CMAKE_CURRENT_LIST_DIR}/include)
