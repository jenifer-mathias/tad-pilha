cmake_minimum_required(VERSION 3.20)
project(tad-pilha)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(
        tad_pilha
        Main.cpp
        PilhaImpl.cpp
        Pilha.h
)

