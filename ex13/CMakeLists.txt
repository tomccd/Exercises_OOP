cmake_minimum_required(VERSION 3.5)

project(ex13)

add_library(
	Certificate
	${CMAKE_CURRENT_SOURCE_DIR}/src/Certificate.cpp
)

add_library(
	Employee_Classify
	${CMAKE_CURRENT_SOURCE_DIR}/src/Employee_Classify.cpp
)

target_link_libraries(
	Employee_Classify
	Certificate
)

add_library(
	Employee_Manager
	${CMAKE_CURRENT_SOURCE_DIR}/src/Employee_Manager.cpp
)

target_link_libraries(
	Employee_Manager
	Employee_Classify
)

add_executable(
	main
	${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/header/Employee_Manager.hpp
	${CMAKE_CURRENT_SOURCE_DIR}/header/Employee_Manager.hpp
)

target_link_libraries(
	main
	Employee_Manager
)