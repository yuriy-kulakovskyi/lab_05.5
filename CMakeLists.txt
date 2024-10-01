cmake_minimum_required(VERSION 3.14)
project(PR5_5)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(lib/googletest)

add_executable(PR5_5
        src/main.cpp
        src/h.cpp
)

add_executable(PR5_5_tests
        src/h.cpp
        tests/test_h.cpp
)

target_link_libraries(PR5_5_tests gtest gtest_main)

enable_testing()
include(GoogleTest)
gtest_discover_tests(PR5_5_tests)