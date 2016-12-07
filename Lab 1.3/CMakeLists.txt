cmake_minimum_required(VERSION 3.6)
project(Equation)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Equation.cpp Equation.h)
add_executable(Equation ${SOURCE_FILES})
