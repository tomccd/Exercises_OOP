cmake_minimum_required(VERSION 3.5)

project(ex14)

add_library(
	Student_Classify
	${CMAKE_CURRENT_SOURCE_DIR}/src/Student_Classify.cpp
)

add_library(
	Candidate_Manager
	${CMAKE_CURRENT_SOURCE_DIR}/src/Candidate_Manager.cpp
)

target_link_libraries(
	Candidate_Manager
	Student_Classify
)

add_executable(
	main
	${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp
)

target_link_libraries(
	main
	Candidate_Manager
)