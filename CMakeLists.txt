# SPDX-License-Identifier: MIT
# Copyright (c) 2026 Nihilai Collective Corp
cmake_minimum_required (VERSION 3.8)

set(CMAKE_CXX_STANDARD 20)

project ("rtc-digit-count")

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

target_compile_definitions(
	${PROJECT_NAME} PUBLIC 
	"BASE_PATH=\"${CMAKE_CURRENT_SOURCE_DIR}\""
)

install(
    FILES
        $<TARGET_FILE:rtc-digit-count>
    DESTINATION bin
    OPTIONAL
)