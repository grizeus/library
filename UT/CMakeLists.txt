cmake_minimum_required(VERSION 3.1)

project(test_program)

file(GLOB src
        "../*.h"
        "../*.c"
        "main.c"
)

add_executable(test_program ${src})