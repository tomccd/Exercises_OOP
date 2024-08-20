cmake_minimum_required(VERSION 3.5)

project(ex7)

add_library(
    Teacher_Manager
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Teacher_Manager.cpp
)

add_library(
    Teacher
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Teacher.cpp
)

add_executable(
    main
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/header/Teacher_Manager.hpp
    ${CMAKE_CURRENT_SOURCE_DIR}/header/Teacher.hpp
)

target_link_libraries(main Teacher_Manager Teacher)
