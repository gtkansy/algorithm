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
include CMakeFiles/SelectSort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SelectSort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SelectSort.dir/flags.make

CMakeFiles/SelectSort.dir/Sort/SelectSort.cpp.o: CMakeFiles/SelectSort.dir/flags.make
CMakeFiles/SelectSort.dir/Sort/SelectSort.cpp.o: ../Sort/SelectSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gtkansy/CLionProjects/algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SelectSort.dir/Sort/SelectSort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SelectSort.dir/Sort/SelectSort.cpp.o -c /home/gtkansy/CLionProjects/algorithm/Sort/SelectSort.cpp

CMakeFiles/SelectSort.dir/Sort/SelectSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SelectSort.dir/Sort/SelectSort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gtkansy/CLionProjects/algorithm/Sort/SelectSort.cpp > CMakeFiles/SelectSort.dir/Sort/SelectSort.cpp.i

CMakeFiles/SelectSort.dir/Sort/SelectSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SelectSort.dir/Sort/SelectSort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gtkansy/CLionProjects/algorithm/Sort/SelectSort.cpp -o CMakeFiles/SelectSort.dir/Sort/SelectSort.cpp.s

# Object files for target SelectSort
SelectSort_OBJECTS = \
"CMakeFiles/SelectSort.dir/Sort/SelectSort.cpp.o"

# External object files for target SelectSort
SelectSort_EXTERNAL_OBJECTS =

SelectSort: CMakeFiles/SelectSort.dir/Sort/SelectSort.cpp.o
SelectSort: CMakeFiles/SelectSort.dir/build.make
SelectSort: CMakeFiles/SelectSort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gtkansy/CLionProjects/algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SelectSort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SelectSort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SelectSort.dir/build: SelectSort

.PHONY : CMakeFiles/SelectSort.dir/build

CMakeFiles/SelectSort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SelectSort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SelectSort.dir/clean

CMakeFiles/SelectSort.dir/depend:
	cd /home/gtkansy/CLionProjects/algorithm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gtkansy/CLionProjects/algorithm /home/gtkansy/CLionProjects/algorithm /home/gtkansy/CLionProjects/algorithm/cmake-build-debug /home/gtkansy/CLionProjects/algorithm/cmake-build-debug /home/gtkansy/CLionProjects/algorithm/cmake-build-debug/CMakeFiles/SelectSort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SelectSort.dir/depend
