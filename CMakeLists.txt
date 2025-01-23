cmake_minimum_required(VERSION 3.29)
project(Sorting)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
include_directories(include)
set(SOURCES
        src/SortAlgorithms.cpp
        src/Utility.cpp
        main.cpp
        src/Student.cpp
)

add_executable(Sorting ${SOURCES})