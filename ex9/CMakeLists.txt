cmake_minimum_required(VERSION 3.5)

project(ex9)

add_library(
	Receipt
	${CMAKE_CURRENT_SOURCE_DIR}/src/Receipt.cpp
)

add_library(
	Receipt_Manager
	${CMAKE_CURRENT_SOURCE_DIR}/src/Receipt_Manager.cpp
)

target_link_libraries(
	Receipt_Manager
	Receipt
)

add_executable(
	main
	${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/header/Receipt.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/header/Receipt_Manager.hpp
)

target_link_libraries(
	main
	Receipt_Manager
)