cmake_minimum_required(VERSION 3.30)
project(0_intro C)

set(CMAKE_C_STANDARD 17)

# the following implements "gcc -o hello hello.c"
add_executable(hello hello.c)
add_executable(guess guess.c)
