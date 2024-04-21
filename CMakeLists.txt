cmake_minimum_required(VERSION 3.25)

project(MpUnitsSandbox
    VERSION 0.1.0
    DESCRIPTION "A Sandbox Project"
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(app
    src/main.cpp
    src/compute_speed.cpp)

add_subdirectory(dependencies/gsl-lite)
add_subdirectory(dependencies/fmt)
add_subdirectory(dependencies/mp-units/src)

target_link_libraries(app PRIVATE gsl-lite)
target_link_libraries(app PRIVATE fmt::fmt)
target_link_libraries(app PRIVATE mp-units::mp-units)
