add_definitions(-Wno-deprecated-declarations)
include_directories(igloo)

set(TEST_SOURCE_FILES
    Position.cpp
    )

add_executable(test_runner ${TEST_SOURCE_FILES})

