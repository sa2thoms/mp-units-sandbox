cmake_minimum_required(VERSION 3.25)

project(MpUnitsSandbox
    VERSION 0.1.0
    DESCRIPTION "A Sandbox Project"
    LANGUAGES CXX)

add_executable(app
    src/main.cpp
    src/compute_speed.cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
