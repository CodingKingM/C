cmake_minimum_required(VERSION 3.28)
project(C C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(calebYT)

add_executable(C
        calebYT/helloworld.c
        calebYT/9_variables_expressions_statements.c)
