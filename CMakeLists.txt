cmake_minimum_required(VERSION 2.8.8)
project(negli)

message("--> CXX: ${CMAKE_CXX_COMPILER}")

include_directories(include)

add_definitions(-std=c++14
                -Wall
                -Werror
                -g
                )

list(APPEND EXTPROJ_CMAKE_ARGS -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER})

message("--> EXTPROJ_CMAKE_ARGS: ${EXTPROJ_CMAKE_ARGS}")

add_subdirectory(src)
add_subdirectory(test)

