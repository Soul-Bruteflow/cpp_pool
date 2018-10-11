cmake_minimum_required(VERSION 3.7)
project(d07_ex02)

set(CMAKE_CXX_STANDARD 98)

file(GLOB SOURCES ./*.cpp)

add_executable(d07_ex02 ${SOURCES})

target_compile_options(d07_ex02 PUBLIC -Wall -Wextra -Werror)