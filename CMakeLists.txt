cmake_minimum_required(VERSION 2.8.5)
project(CPack C)

set(CMAKE_C_STANDARD 99)

set(LIBRARY_OUTPUT_PATH ../lib)

install(FILES
        src/CPack/CPack.h
        src/CPack/CNode.h
        src/CPack/CList.h
        src/CPack/CStack.h
        src/CPack/CQueue.h
        DESTINATION /usr/include
)

install(FILES lib/libCPack.a DESTINATION /usr/lib)

add_library(CPack
        src/CPack/CNode.c
        src/CPack/CList.c
        src/CPack/CStack.c
        src/CPack/CQueue.c
)