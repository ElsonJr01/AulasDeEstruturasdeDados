cmake_minimum_required(VERSION 3.30)
project(FilaPrioridade C)

set(CMAKE_C_STANDARD 11)

add_executable(FilaPrioridade main.c
        FilaPrioridade.c
        FilaPrioridade.h)
