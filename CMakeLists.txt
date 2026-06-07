# SPDX-License-Identifier: MIT
# Copyright (c) 2026 Nihilai Collective Corp
cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 20)

project ("rtc-digit-count")

set(CMAKE_INSTALL_PREFIX ${CMAKE_CURRENT_SOURCE_DIR}/install/)

include(FetchContent)

FetchContent_Declare(
  benchmarksuite
  GIT_REPOSITORY https://github.com/RealTimeChris/benchmarksuite.git
  GIT_TAG main
  GIT_SHALLOW TRUE
)
FetchContent_MakeAvailable(benchmarksuite)

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
    /wd4324 /wd4820 /wd5039 /wd4710 /wd5045 /wd4711
    /Wall /W4 /bigobj
    /O2 /arch:AVX2 /fp:fast /GL /Oi /Ot
    /Zc:preprocessor /EHsc /GS-
)

set(RTC_DIGIT_COUNT_CLANG_COMPILER_OPTIONS
    -Weverything -Wpedantic
    -Wno-unsafe-buffer-usage
    -Wno-c++20-extensions
    -Wextra -Wall
    -Wno-c++98-compat-pedantic
    -Wno-c++98-compat
    -Wno-padded
    -O3 -march=native -ffast-math
    -funroll-loops -fomit-frame-pointer
    -flto=thin -finline-functions
    -ffunction-sections
    -fdata-sections
)

set(RTC_DIGIT_COUNT_APPLE_CLANG_COMPILER_OPTIONS
    ${RTC_DIGIT_COUNT_CLANG_COMPILER_OPTIONS}
)

if(APPLE)
    set(RTC_DIGIT_COUNT_GCC_LTO)
else()
    set(RTC_DIGIT_COUNT_GCC_LTO -flto=auto)
endif()

set(RTC_DIGIT_COUNT_GCC_COMPILER_OPTIONS
    -Wpedantic -Wall
    -O3 -march=native -ffast-math
    -funroll-loops -fomit-frame-pointer
    ${RTC_DIGIT_COUNT_GCC_LTO}
    -fvect-cost-model=unlimited
    -falign-functions=64 -falign-loops=64
    -ffunction-sections
    -fdata-sections
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
    $<$<AND:$<CXX_COMPILER_ID:Clang>,$<NOT:$<STREQUAL:${CMAKE_SYSTEM_NAME},Darwin>>>:-fuse-ld=lld;-Wl,-O2;-Wl,--gc-sections;-Wl,-z,now>
    $<$<AND:$<CXX_COMPILER_ID:Clang>,$<STREQUAL:${CMAKE_SYSTEM_NAME},Darwin>>:-Wl,-dead_strip>
    $<$<AND:$<CXX_COMPILER_ID:GNU>,$<NOT:$<STREQUAL:${CMAKE_SYSTEM_NAME},Darwin>>>:-Wl,-O2;-Wl,--gc-sections;-Wl,-z,now>
    $<$<AND:$<CXX_COMPILER_ID:GNU>,$<STREQUAL:${CMAKE_SYSTEM_NAME},Darwin>>:-Wl,-dead_strip>
    $<$<AND:$<CXX_COMPILER_ID:AppleClang>,$<STREQUAL:${CMAKE_SYSTEM_NAME},Darwin>>:-Wl,-dead_strip>
    $<$<CXX_COMPILER_ID:MSVC>:${RTC_DIGIT_COUNT_MSVC_LINKER_OPTIONS}>
)

target_compile_definitions(
	${PROJECT_NAME} PUBLIC 
	"BASE_PATH=\"${CMAKE_CURRENT_SOURCE_DIR}\""
)

install(
    TARGETS rtc-digit-count
    DESTINATION bin
)