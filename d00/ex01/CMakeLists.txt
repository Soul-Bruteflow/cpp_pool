cmake_minimum_required(VERSION 3.10)
project(ex01)

set(CMAKE_CXX_STANDARD 98)

include_directories(inc)


file(GLOB SOURCES ./src/*.cpp)

add_executable(ex01 ${SOURCES})

target_compile_options(ex01 PUBLIC -I ./inc/*.hpp -Wall -Wextra -Werror)

#add_executable(ex01
#        inc/Contact.hpp
#        inc/defines.hpp
#        inc/PhoneBook.hpp
#        src/Contact.cpp
#        src/main.cpp)
