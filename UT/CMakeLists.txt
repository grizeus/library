cmake_minimum_required(VERSION 3.22)

project(test_program)

file(GLOB src
        "../include/*.h"
        "../src/*.c"
        "main.c"
)

add_executable(test_program ${src})