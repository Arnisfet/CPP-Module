cmake_minimum_required(VERSION 3.20)
project(cpp_0)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex01)

add_executable(cpp_0
        ex01/header.hpp
        ex01/main.cpp
        ex01/telephone.cpp
        ex01/contact.cpp)
