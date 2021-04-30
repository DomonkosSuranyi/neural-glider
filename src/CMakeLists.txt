file(GLOB SOURCE_FILES *.cpp)
add_library(neglib SHARED ${SOURCE_FILES})
add_executable(negli main.cpp)
target_link_libraries(negli neglib ${LIBS})
