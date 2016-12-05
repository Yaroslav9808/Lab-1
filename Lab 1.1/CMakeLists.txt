cmake_minimum_required(VERSION 3.6)
project(Ship)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Ship.cpp Ship.h)
add_executable(Ship ${SOURCE_FILES})