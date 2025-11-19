cmake_minimum_required(VERSION 4.0)
project(Clion C)

set(CMAKE_C_STANDARD 23)

add_library(Clion STATIC library.c
        mary.cpp)
