# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/daniil/cpp/Otus_Matrix

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/daniil/cpp/Otus_Matrix/.gitignore

# Include any dependencies generated for this target.
include CMakeFiles/TEST_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TEST_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TEST_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TEST_lib.dir/flags.make

CMakeFiles/TEST_lib.dir/test_lib.cpp.o: CMakeFiles/TEST_lib.dir/flags.make
CMakeFiles/TEST_lib.dir/test_lib.cpp.o: ../test_lib.cpp
CMakeFiles/TEST_lib.dir/test_lib.cpp.o: CMakeFiles/TEST_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/daniil/cpp/Otus_Matrix/.gitignore/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TEST_lib.dir/test_lib.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/TEST_lib.dir/test_lib.cpp.o -MF CMakeFiles/TEST_lib.dir/test_lib.cpp.o.d -o CMakeFiles/TEST_lib.dir/test_lib.cpp.o -c /home/daniil/cpp/Otus_Matrix/test_lib.cpp

CMakeFiles/TEST_lib.dir/test_lib.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TEST_lib.dir/test_lib.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/daniil/cpp/Otus_Matrix/test_lib.cpp > CMakeFiles/TEST_lib.dir/test_lib.cpp.i

CMakeFiles/TEST_lib.dir/test_lib.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TEST_lib.dir/test_lib.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/daniil/cpp/Otus_Matrix/test_lib.cpp -o CMakeFiles/TEST_lib.dir/test_lib.cpp.s

# Object files for target TEST_lib
TEST_lib_OBJECTS = \
"CMakeFiles/TEST_lib.dir/test_lib.cpp.o"

# External object files for target TEST_lib
TEST_lib_EXTERNAL_OBJECTS =

TEST_lib: CMakeFiles/TEST_lib.dir/test_lib.cpp.o
TEST_lib: CMakeFiles/TEST_lib.dir/build.make
TEST_lib: /usr/lib/x86_64-linux-gnu/libgtest.a
TEST_lib: /usr/lib/x86_64-linux-gnu/libgtest_main.a
TEST_lib: /usr/lib/x86_64-linux-gnu/libgtest.a
TEST_lib: CMakeFiles/TEST_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/daniil/cpp/Otus_Matrix/.gitignore/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TEST_lib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TEST_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TEST_lib.dir/build: TEST_lib
.PHONY : CMakeFiles/TEST_lib.dir/build

CMakeFiles/TEST_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TEST_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TEST_lib.dir/clean

CMakeFiles/TEST_lib.dir/depend:
	cd /home/daniil/cpp/Otus_Matrix/.gitignore && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/daniil/cpp/Otus_Matrix /home/daniil/cpp/Otus_Matrix /home/daniil/cpp/Otus_Matrix/.gitignore /home/daniil/cpp/Otus_Matrix/.gitignore /home/daniil/cpp/Otus_Matrix/.gitignore/CMakeFiles/TEST_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TEST_lib.dir/depend

