cmake_minimum_required(VERSION 3.5)

project(ex11)

add_library(
    QL_SoPhuc
    ${CMAKE_CURRENT_SOURCE_DIR}/src/QL_SoPhuc.cpp
)

add_executable(
    main
    ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
)

target_link_libraries(
    main
    QL_SoPhuc
)