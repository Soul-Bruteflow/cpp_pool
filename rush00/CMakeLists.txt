
cmake_minimum_required(VERSION 3.7)
project(rush00)

set(CMAKE_CXX_STANDARD 98)

include_directories(inc)

file(GLOB SOURCES ./src/*.cpp)

add_executable(rush00 ${SOURCES})

target_link_libraries(${PROJECT_NAME} ncurses)

target_compile_options(rush00 PUBLIC -Wall -Wextra -Werror)