cmake_minimum_required(VERSION 3.10)
project(List C)

set(CMAKE_C_STANDARD 99)

add_library(List List.c List.h Node.c Node.h)