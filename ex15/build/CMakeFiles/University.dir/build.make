# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tomccd/Documents/Code/C++/exercise/ex15

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tomccd/Documents/Code/C++/exercise/ex15/build

# Include any dependencies generated for this target.
include CMakeFiles/University.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/University.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/University.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/University.dir/flags.make

CMakeFiles/University.dir/src/University.cpp.o: CMakeFiles/University.dir/flags.make
CMakeFiles/University.dir/src/University.cpp.o: /home/tomccd/Documents/Code/C++/exercise/ex15/src/University.cpp
CMakeFiles/University.dir/src/University.cpp.o: CMakeFiles/University.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/tomccd/Documents/Code/C++/exercise/ex15/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/University.dir/src/University.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/University.dir/src/University.cpp.o -MF CMakeFiles/University.dir/src/University.cpp.o.d -o CMakeFiles/University.dir/src/University.cpp.o -c /home/tomccd/Documents/Code/C++/exercise/ex15/src/University.cpp

CMakeFiles/University.dir/src/University.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/University.dir/src/University.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tomccd/Documents/Code/C++/exercise/ex15/src/University.cpp > CMakeFiles/University.dir/src/University.cpp.i

CMakeFiles/University.dir/src/University.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/University.dir/src/University.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tomccd/Documents/Code/C++/exercise/ex15/src/University.cpp -o CMakeFiles/University.dir/src/University.cpp.s

# Object files for target University
University_OBJECTS = \
"CMakeFiles/University.dir/src/University.cpp.o"

# External object files for target University
University_EXTERNAL_OBJECTS =

libUniversity.a: CMakeFiles/University.dir/src/University.cpp.o
libUniversity.a: CMakeFiles/University.dir/build.make
libUniversity.a: CMakeFiles/University.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/tomccd/Documents/Code/C++/exercise/ex15/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libUniversity.a"
	$(CMAKE_COMMAND) -P CMakeFiles/University.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/University.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/University.dir/build: libUniversity.a
.PHONY : CMakeFiles/University.dir/build

CMakeFiles/University.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/University.dir/cmake_clean.cmake
.PHONY : CMakeFiles/University.dir/clean

CMakeFiles/University.dir/depend:
	cd /home/tomccd/Documents/Code/C++/exercise/ex15/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tomccd/Documents/Code/C++/exercise/ex15 /home/tomccd/Documents/Code/C++/exercise/ex15 /home/tomccd/Documents/Code/C++/exercise/ex15/build /home/tomccd/Documents/Code/C++/exercise/ex15/build /home/tomccd/Documents/Code/C++/exercise/ex15/build/CMakeFiles/University.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/University.dir/depend

