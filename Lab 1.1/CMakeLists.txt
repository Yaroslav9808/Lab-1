cmake_minimum_required(VERSION 3.6)
project(Polygon)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Polygon.cpp Polygon.h)
add_executable(Polygon ${SOURCE_FILES})
