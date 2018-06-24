cmake_minimum_required(VERSION 3.5.1)
project(CPack C)

set(CMAKE_C_STANDARD 99)

add_library(CPack
            src/CPack/CNode.c
            src/CPack/CList.c
            src/CPack/CStack.c
            src/CPack/CQueue.c
)
