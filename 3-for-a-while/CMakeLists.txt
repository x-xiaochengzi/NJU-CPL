cmake_minimum_required(VERSION 3.30)
project(3_for_a_while C)

set(CMAKE_C_STANDARD 17)

add_executable(stars stars.c)
add_executable(binary-search binary-search.c)
add_executable(digits digits-while.c)
add_executable(selection-sort selection-sort.c)
add_executable(palindrome palindrome.c)
