cmake_minimum_required(VERSION 3.24)
project(Logger)

set(CMAKE_CXX_STANDARD 17)

add_executable(Logger main.cpp Log.cpp Log.h Time.h)
