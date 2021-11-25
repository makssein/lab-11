cmake_minimum_required(VERSION 3.20)
project(lab_11)

set(CMAKE_CXX_STANDARD 17)

include_directories("inc/")

add_executable(lab_11 main.cpp classes.hpp classes.cpp)
