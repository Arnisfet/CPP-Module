cmake_minimum_required(VERSION 3.20)
project(ex03)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ex03
        HumanA.cpp
        HumanA.hpp
        HumanB.cpp
        HumanB.hpp
        main.cpp
        Weapon.cpp
        Weapon.hpp)
