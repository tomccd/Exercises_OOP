cmake_minimum_required(VERSION 3.5)

set(CMAKE_CURRENT_BINARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/build/bin)

project(ex3)

add_library(student_manager ${CMAKE_CURRENT_SOURCE_DIR}/src/student_manager.cpp)
add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)

target_link_libraries(main PUBLIC student_manager)
