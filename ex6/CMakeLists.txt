cmake_minimum_required(VERSION 3.5)

project(ex6)

add_library(
	Class
	${CMAKE_CURRENT_SOURCE_DIR}/src/Class.cpp
)

add_library(
	School
	${CMAKE_CURRENT_SOURCE_DIR}/src/School.cpp
)

add_executable(
	main
	${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/header/Class.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/header/School.hpp
)

target_link_libraries(
	main
	School
	Class
)