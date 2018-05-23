cmake_minimum_required(VERSION 3.7)
project(d01_e01)

set(CMAKE_CXX_STANDARD 98)

file(GLOB SOURCES ./src/*.cpp)

add_executable(d01_e01 ${SOURCES})

target_compile_options(d01_e01 PUBLIC -I ./inc/*.hpp -Wall -Wextra -Werror)