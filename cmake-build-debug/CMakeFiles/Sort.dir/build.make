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
include CMakeFiles/Sort.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Sort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Sort.dir/flags.make

CMakeFiles/Sort.dir/Sort/BubbleSort.cpp.o: CMakeFiles/Sort.dir/flags.make
CMakeFiles/Sort.dir/Sort/BubbleSort.cpp.o: ../Sort/BubbleSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gtkansy/CLionProjects/algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Sort.dir/Sort/BubbleSort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sort.dir/Sort/BubbleSort.cpp.o -c /home/gtkansy/CLionProjects/algorithm/Sort/BubbleSort.cpp

CMakeFiles/Sort.dir/Sort/BubbleSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sort.dir/Sort/BubbleSort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gtkansy/CLionProjects/algorithm/Sort/BubbleSort.cpp > CMakeFiles/Sort.dir/Sort/BubbleSort.cpp.i

CMakeFiles/Sort.dir/Sort/BubbleSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sort.dir/Sort/BubbleSort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gtkansy/CLionProjects/algorithm/Sort/BubbleSort.cpp -o CMakeFiles/Sort.dir/Sort/BubbleSort.cpp.s

CMakeFiles/Sort.dir/Sort/SelectSort.cpp.o: CMakeFiles/Sort.dir/flags.make
CMakeFiles/Sort.dir/Sort/SelectSort.cpp.o: ../Sort/SelectSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gtkansy/CLionProjects/algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Sort.dir/Sort/SelectSort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sort.dir/Sort/SelectSort.cpp.o -c /home/gtkansy/CLionProjects/algorithm/Sort/SelectSort.cpp

CMakeFiles/Sort.dir/Sort/SelectSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sort.dir/Sort/SelectSort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gtkansy/CLionProjects/algorithm/Sort/SelectSort.cpp > CMakeFiles/Sort.dir/Sort/SelectSort.cpp.i

CMakeFiles/Sort.dir/Sort/SelectSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sort.dir/Sort/SelectSort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gtkansy/CLionProjects/algorithm/Sort/SelectSort.cpp -o CMakeFiles/Sort.dir/Sort/SelectSort.cpp.s

CMakeFiles/Sort.dir/Sort/InsertionSort.cpp.o: CMakeFiles/Sort.dir/flags.make
CMakeFiles/Sort.dir/Sort/InsertionSort.cpp.o: ../Sort/InsertionSort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gtkansy/CLionProjects/algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Sort.dir/Sort/InsertionSort.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Sort.dir/Sort/InsertionSort.cpp.o -c /home/gtkansy/CLionProjects/algorithm/Sort/InsertionSort.cpp

CMakeFiles/Sort.dir/Sort/InsertionSort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Sort.dir/Sort/InsertionSort.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gtkansy/CLionProjects/algorithm/Sort/InsertionSort.cpp > CMakeFiles/Sort.dir/Sort/InsertionSort.cpp.i

CMakeFiles/Sort.dir/Sort/InsertionSort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Sort.dir/Sort/InsertionSort.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gtkansy/CLionProjects/algorithm/Sort/InsertionSort.cpp -o CMakeFiles/Sort.dir/Sort/InsertionSort.cpp.s

# Object files for target Sort
Sort_OBJECTS = \
"CMakeFiles/Sort.dir/Sort/BubbleSort.cpp.o" \
"CMakeFiles/Sort.dir/Sort/SelectSort.cpp.o" \
"CMakeFiles/Sort.dir/Sort/InsertionSort.cpp.o"

# External object files for target Sort
Sort_EXTERNAL_OBJECTS =

Sort: CMakeFiles/Sort.dir/Sort/BubbleSort.cpp.o
Sort: CMakeFiles/Sort.dir/Sort/SelectSort.cpp.o
Sort: CMakeFiles/Sort.dir/Sort/InsertionSort.cpp.o
Sort: CMakeFiles/Sort.dir/build.make
Sort: CMakeFiles/Sort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gtkansy/CLionProjects/algorithm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Sort"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Sort.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Sort.dir/build: Sort

.PHONY : CMakeFiles/Sort.dir/build

CMakeFiles/Sort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Sort.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Sort.dir/clean

CMakeFiles/Sort.dir/depend:
	cd /home/gtkansy/CLionProjects/algorithm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gtkansy/CLionProjects/algorithm /home/gtkansy/CLionProjects/algorithm /home/gtkansy/CLionProjects/algorithm/cmake-build-debug /home/gtkansy/CLionProjects/algorithm/cmake-build-debug /home/gtkansy/CLionProjects/algorithm/cmake-build-debug/CMakeFiles/Sort.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Sort.dir/depend

