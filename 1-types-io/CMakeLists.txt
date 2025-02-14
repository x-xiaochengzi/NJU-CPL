cmake_minimum_required(VERSION 3.30)
project(1_types_io C)

set(CMAKE_C_STANDARD 17)

add_executable(circle circle.c)
add_executable(sphere sphere.c)
add_executable(mol mol.c)
add_executable(name scanf_name.c)