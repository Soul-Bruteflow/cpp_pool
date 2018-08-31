cmake_minimum_required(VERSION 3.7)
project(d03_ex03)

set(CMAKE_CXX_STANDARD 98)

file(GLOB SOURCES ./*.cpp)

add_executable(d03_ex03 ${SOURCES})

target_compile_options(d03_ex03 PUBLIC -Wall -Wextra -Werror)