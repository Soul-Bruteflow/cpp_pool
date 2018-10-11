cmake_minimum_required(VERSION 3.7)
project(d06_ex01)

set(CMAKE_CXX_STANDARD 98)

file(GLOB SOURCES ./*.cpp)

add_executable(d06_ex01 ${SOURCES})

target_compile_options(d06_ex01 PUBLIC -Wall -Wextra -Werror)