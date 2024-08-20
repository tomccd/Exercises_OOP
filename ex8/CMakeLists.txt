cmake_minimum_required(VERSION 3.5)

project(ex8)

add_library(
    Library_Manager
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Library_Manager.cpp
)

add_library(
    Student
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Student.cpp
)

add_library(
    Ticket
    ${CMAKE_CURRENT_SOURCE_DIR}/src/Ticket.cpp 
)

target_link_libraries(Library_Manager Student Ticket)

add_executable(
    main
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
)

target_link_libraries(main Library_Manager)