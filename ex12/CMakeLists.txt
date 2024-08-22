cmake_minimum_required(VERSION 3.5)

project(ex12)

add_library(
	Vehicle_Classify
	${CMAKE_CURRENT_SOURCE_DIR}/src/Vehicle_Classify.cpp
)

add_library(
	Vehicle_Manager
	${CMAKE_CURRENT_SOURCE_DIR}/src/Vehicle_Manager.cpp
)

target_link_libraries(
	Vehicle_Manager
	Vehicle_Classify
)

add_executable(
	main
	${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/header/Vehicle_Classify.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/header/Vehicle_Manager.hpp
)

target_link_libraries(
	main
	Vehicle_Manager
)