cmake_minimum_required(VERSION 3.5)

project(ex10)

add_library(
	Document
	${CMAKE_CURRENT_SOURCE_DIR}/src/Document.cpp
)

add_executable(
	main
	${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/header/Document.hpp
)
target_link_libraries(
	main
	Document
)