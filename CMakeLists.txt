cmake_minimum_required(VERSION 3.17)
project(algorithm)

set(CMAKE_CXX_STANDARD 14)

include_directories(Programmers_Level_1)
include_directories(Programmers_Level_2)
include_directories(Programmers_Level_3)

add_executable(algorithm
        main.cpp 
        Programmers_Level_1
        Programmers_Level_2
        Programmers_Level_3
        )
