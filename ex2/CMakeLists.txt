cmake_minimum_required(VERSION 3.5)
project(ex2)

add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)
add_library(docs_manager ${CMAKE_CURRENT_SOURCE_DIR}/src/docs_manager.cpp)

target_link_libraries(main docs_manager)