cmake_minimum_required(VERSION 3.7)
project(d04_ex03)

set(CMAKE_CXX_STANDARD 98)

file(GLOB SOURCES ./*.cpp)

add_executable(d04_ex03 ${SOURCES})

target_compile_options(d04_ex03 PUBLIC -Wall -Wextra -Werror)