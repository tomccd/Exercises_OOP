cmake_minimum_required(VERSION 3.5)
project(ex4)

add_library(
	Hotel_Manager
	${CMAKE_CURRENT_SOURCE_DIR}/src/Hotel_Manager.cpp
)

add_executable(
	main
	${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
)

target_link_libraries(main Hotel_Manager)