# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/gtkansy/software/clion-2018.1.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/gtkansy/software/clion-2018.1.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gtkansy/CLionProjects/algorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gtkansy/CLionProjects/algorithm/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HeapSort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HeapSort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HeapSort.dir/flags.make

CMakeFiles/HeapSort.dir/Sort/HeapSort.cpp.o: CMakeFiles/HeapSort.dir/flags.make
CMakeFiles/HeapSort.dir/Sort/HeapSort.cpp.o: ../Sort/HeapSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gtkansy/CLionProjects/algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HeapSort.dir/Sort/HeapSort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HeapSort.dir/Sort/HeapSort.cpp.o -c /home/gtkansy/CLionProjects/algorithm/Sort/HeapSort.cpp

CMakeFiles/HeapSort.dir/Sort/HeapSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HeapSort.dir/Sort/HeapSort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gtkansy/CLionProjects/algorithm/Sort/HeapSort.cpp > CMakeFiles/HeapSort.dir/Sort/HeapSort.cpp.i

CMakeFiles/HeapSort.dir/Sort/HeapSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HeapSort.dir/Sort/HeapSort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gtkansy/CLionProjects/algorithm/Sort/HeapSort.cpp -o CMakeFiles/HeapSort.dir/Sort/HeapSort.cpp.s

# Object files for target HeapSort
HeapSort_OBJECTS = \
"CMakeFiles/HeapSort.dir/Sort/HeapSort.cpp.o"

# External object files for target HeapSort
HeapSort_EXTERNAL_OBJECTS =

HeapSort: CMakeFiles/HeapSort.dir/Sort/HeapSort.cpp.o
HeapSort: CMakeFiles/HeapSort.dir/build.make
HeapSort: CMakeFiles/HeapSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gtkansy/CLionProjects/algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HeapSort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HeapSort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HeapSort.dir/build: HeapSort

.PHONY : CMakeFiles/HeapSort.dir/build

CMakeFiles/HeapSort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/HeapSort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/HeapSort.dir/clean

CMakeFiles/HeapSort.dir/depend:
	cd /home/gtkansy/CLionProjects/algorithm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gtkansy/CLionProjects/algorithm /home/gtkansy/CLionProjects/algorithm /home/gtkansy/CLionProjects/algorithm/cmake-build-debug /home/gtkansy/CLionProjects/algorithm/cmake-build-debug /home/gtkansy/CLionProjects/algorithm/cmake-build-debug/CMakeFiles/HeapSort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HeapSort.dir/depend

