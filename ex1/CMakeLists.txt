cmake_minimum_required(VERSION 3.5)
project(ex1)

add_executable(main ${CMAKE_SOURCE_DIR}/src/main.cpp)

add_library(manage_officer  ${CMAKE_SOURCE_DIR}/src/manage_officer.cpp)

target_link_libraries(main manage_officer)