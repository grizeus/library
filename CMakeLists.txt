cmake_minimum_required(VERSION 3.22)
project(my_c_library)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

include_directories(include)

file(GLOB SOURCES "src/*.c")

add_library(_my_c_library STATIC ${SOURCES})