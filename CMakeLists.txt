# SPDX-License-Identifier: MIT
# Copyright (c) 2026 Nihilai Collective Corp
cmake_minimum_required(VERSION 3.18)

set(CMAKE_CXX_STANDARD 20)

project (
    rtc-digit-count
    LANGUAGES CXX
)

set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/install/)

if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_INTERPROCEDURAL_OPTIMIZATION ON)

include(FetchContent)
include(GetCommitHash.cmake)

FetchContent_Declare(
  benchmarksuite
  GIT_REPOSITORY https://github.com/RealTimeChris/benchmarksuite.git
  GIT_TAG main
  GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(benchmarksuite)
getCommitHash(${benchmarksuite_SOURCE_DIR} BNCH_SWT_COMMIT_HASH)

FetchContent_Declare(
  rt-ut
  GIT_REPOSITORY https://github.com/RealTimeChris/rt-ut.git
  GIT_TAG main
  GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(rt-ut)

add_executable (rtc-digit-count "rtc-digit-count.cpp")

target_link_libraries(
	${PROJECT_NAME} PUBLIC 
	benchmarksuite::benchmarksuite
	rt-ut::rt-ut
)

set(RTC_DIGIT_COUNT_MSVC_COMPILER_OPTIONS
    /O2
    /Oi
    /Ot
    /Ob3
    /GL
    /GS-
    /Gy
    /Gw
    /fp:precise
    /arch:AVX2
    /Zc:inline
    /favor:blend
)

set(RTC_DIGIT_COUNT_CLANG_COMPILER_OPTIONS
    -O3
    -march=native
    -mtune=native
    -fomit-frame-pointer
    -funroll-loops
    -fmerge-all-constants
    -fstrict-aliasing
    -fno-semantic-interposition
    -fvectorize
    -fslp-vectorize
)

set(RTC_DIGIT_COUNT_MSVC_LINKER_OPTIONS
    /LTCG
    /OPT:REF
    /OPT:ICF
)

set(RTC_DIGIT_COUNT_CLANG_LINKER_OPTIONS
)

set(RTC_DIGIT_COUNT_APPLE_CLANG_COMPILER_OPTIONS
    ${RTC_DIGIT_COUNT_CLANG_COMPILER_OPTIONS}
)

if(APPLE)
    set(RTC_DIGIT_COUNT_GCC_LTO)
else()
    set(RTC_DIGIT_COUNT_GCC_LTO -flto=auto -ffat-lto-objects)
endif()

set(RTC_DIGIT_COUNT_GCC_COMPILER_OPTIONS
    -O3
    -march=native
    -mtune=native
    -fomit-frame-pointer
    -funroll-loops
    -fmerge-all-constants
    -fstrict-aliasing
    -fno-semantic-interposition
    -ftree-vectorize
    ${RTC_DIGIT_COUNT_GCC_LTO}
)

set(RTC_DIGIT_COUNT_GCC_LINKER_OPTIONS
)

target_compile_options(
    ${PROJECT_NAME} PUBLIC
    $<$<CXX_COMPILER_ID:Clang>:${RTC_DIGIT_COUNT_CLANG_COMPILER_OPTIONS}>
    $<$<CXX_COMPILER_ID:AppleClang>:${RTC_DIGIT_COUNT_APPLE_CLANG_COMPILER_OPTIONS}>
    $<$<CXX_COMPILER_ID:GNU>:${RTC_DIGIT_COUNT_GCC_COMPILER_OPTIONS}>
    $<$<CXX_COMPILER_ID:MSVC>:${RTC_DIGIT_COUNT_MSVC_COMPILER_OPTIONS}>
)

target_link_options(
    ${PROJECT_NAME} PUBLIC
    $<$<AND:$<CXX_COMPILER_ID:Clang>,$<NOT:$<STREQUAL:${CMAKE_SYSTEM_NAME},Darwin>>>:-fuse-ld=lld;-Wl,-O2;-Wl,--gc-sections;-Wl,-z,now;${RTC_DIGIT_COUNT_CLANG_LINKER_OPTIONS}>
    $<$<AND:$<CXX_COMPILER_ID:Clang>,$<STREQUAL:${CMAKE_SYSTEM_NAME},Darwin>>:-Wl,-dead_strip>
    $<$<AND:$<CXX_COMPILER_ID:GNU>,$<NOT:$<STREQUAL:${CMAKE_SYSTEM_NAME},Darwin>>>:-Wl,-O2;-Wl,--gc-sections;-Wl,-z,now;${RTC_DIGIT_COUNT_GCC_LINKER_OPTIONS}>
    $<$<AND:$<CXX_COMPILER_ID:GNU>,$<STREQUAL:${CMAKE_SYSTEM_NAME},Darwin>>:-Wl,-dead_strip>
    $<$<AND:$<CXX_COMPILER_ID:AppleClang>,$<STREQUAL:${CMAKE_SYSTEM_NAME},Darwin>>:-Wl,-dead_strip>
    $<$<CXX_COMPILER_ID:MSVC>:${RTC_DIGIT_COUNT_MSVC_LINKER_OPTIONS}>
)

target_compile_definitions(
	${PROJECT_NAME} PUBLIC 
	"BASE_PATH=\"${CMAKE_CURRENT_SOURCE_DIR}\""
    "BNCH_SWT_COMMIT=\"${BNCH_SWT_COMMIT_HASH}\""
    RDC_CI_RUN=$<BOOL:${RDC_CI_RUN}>
)

install(
    TARGETS rtc-digit-count
    DESTINATION bin
)