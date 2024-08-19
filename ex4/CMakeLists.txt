cmake_minimum_required(VERSION 3.5)
project(ex4)

add_executable(main
${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
)

add_library(
	house_hold
	${CMAKE_CURRENT_SOURCE_DIR}/src/house_hold.cpp
)

add_library(
	manage_residential_area
	${CMAKE_CURRENT_SOURCE_DIR}/src/manage_residential_area.cpp
)

target_link_libraries(main house_hold manage_residential_area)