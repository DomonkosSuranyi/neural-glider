cmake_minimum_required(VERSION 2.8.8)
project(elfparser)

set(CMAKE_C_COMPILER "clang")
set(CMAKE_CXX_COMPILER "clang++")
message("--> CXX: ${CMAKE_CXX_COMPILER}")

include_directories(include)

add_definitions(-std=c++14
                -Wall
                -Werror
                -g
                )

include_directories(SYSTEM thirdparty/include)
link_directories(${CMAKE_SOURCE_DIR}/thirdparty/lib)

list(APPEND EXTPROJ_CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_SOURCE_DIR}/thirdparty/)
list(APPEND EXTPROJ_CMAKE_ARGS -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER})

message("--> EXTPROJ_CMAKE_ARGS: ${EXTPROJ_CMAKE_ARGS}")

set(LIBS ${LIBS})
list(APPEND LIBS goodies)

add_subdirectory(src)
add_subdirectory(test)

install(DIRECTORY include DESTINATION .)
