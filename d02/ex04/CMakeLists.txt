cmake_minimum_required(VERSION 3.7)

project(d02_e04)

set(PROJECT_NAME d02_e04)

set(CMAKE_CXX_STANDARD 98)

file(GLOB SOURCES ./*.cpp)

add_executable(PROJECT_NAME ${SOURCES})

target_compile_options(PROJECT_NAME PUBLIC -I ./inc/*.hpp -Wall -Wextra -Werror)