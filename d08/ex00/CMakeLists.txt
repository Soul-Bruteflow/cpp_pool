cmake_minimum_required(VERSION 3.7)
project(d08_ex00)

set(CMAKE_CXX_STANDARD 98)

file(GLOB SOURCES ./*.cpp)

add_executable(d08_ex00 ${SOURCES})

target_compile_options(d08_ex00 PUBLIC -Wall -Wextra -Werror)