cmake_minimum_required(VERSION 3.5)

project(ex15)

add_library(
    Result_Report
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Result_Report.cpp
)


add_library(
    Semester
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Semester.cpp
)

target_link_libraries(
    Semester
    Result_Report
)
    
add_library(
    Student_Classify
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Student_Classify.cpp
)

add_library(
    Department
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Department.cpp
)

target_link_libraries(
    Department
    Semester
    Student_Classify
)

add_library(
    University
    ${CMAKE_CURRENT_SOURCE_DIR}/src/University.cpp
)

target_link_libraries(
    University
    Department
)

add_executable(
    main
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/header/University.hpp
)

target_link_libraries(
    main
    University
)