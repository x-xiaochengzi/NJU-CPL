cmake_minimum_required(VERSION 3.30)
project(8_c_strings C)

set(CMAKE_C_STANDARD 17)

add_executable(str-literals str-literals.c)
add_executable(strlen strlen.c)
add_executable(strcpy strcpy.c)