cmake_minimum_required(VERSION 3.20)
project(cpp_0)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex01)

add_executable(cpp_0
        ex02/Account.cpp
        ex02/Account.hpp
        ex02/tests.cpp)
