cmake_minimum_required(VERSION 3.5.1)
project(CPack C)

set(CMAKE_C_STANDARD 99)

add_library(CPack CNode.c CList.c CStack.c CQueue.c)
