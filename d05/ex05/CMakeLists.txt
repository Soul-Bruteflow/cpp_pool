cmake_minimum_required(VERSION 3.7)
project(d05_ex05)

set(CMAKE_CXX_STANDARD 98)

file(GLOB SOURCES ./*.cpp)

add_executable(d05_ex05 ${SOURCES})

target_compile_options(d05_ex05 PUBLIC -Wall -Wextra -Werror)