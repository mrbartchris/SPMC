cmake_minimum_required(VERSION 2.8)
project(SPMCalc)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -std=c99")

set(SOURCE_FILES main.c main.c)
add_executable(main ${SOURCE_FILES})