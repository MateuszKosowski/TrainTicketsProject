# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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

# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /home/student/Pulpit/CLionProjects/start/kosowski/workshop

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build

# Include any dependencies generated for this target.
include library/CMakeFiles/Client.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include library/CMakeFiles/Client.dir/compiler_depend.make

# Include the progress variables for this target.
include library/CMakeFiles/Client.dir/progress.make

# Include the compile flags for this target's objects.
include library/CMakeFiles/Client.dir/flags.make

library/CMakeFiles/Client.dir/src/model/Client.cpp.o: library/CMakeFiles/Client.dir/flags.make
library/CMakeFiles/Client.dir/src/model/Client.cpp.o: /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/src/model/Client.cpp
library/CMakeFiles/Client.dir/src/model/Client.cpp.o: library/CMakeFiles/Client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object library/CMakeFiles/Client.dir/src/model/Client.cpp.o"
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT library/CMakeFiles/Client.dir/src/model/Client.cpp.o -MF CMakeFiles/Client.dir/src/model/Client.cpp.o.d -o CMakeFiles/Client.dir/src/model/Client.cpp.o -c /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/src/model/Client.cpp

library/CMakeFiles/Client.dir/src/model/Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Client.dir/src/model/Client.cpp.i"
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/src/model/Client.cpp > CMakeFiles/Client.dir/src/model/Client.cpp.i

library/CMakeFiles/Client.dir/src/model/Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Client.dir/src/model/Client.cpp.s"
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/src/model/Client.cpp -o CMakeFiles/Client.dir/src/model/Client.cpp.s

# Object files for target Client
Client_OBJECTS = \
"CMakeFiles/Client.dir/src/model/Client.cpp.o"

# External object files for target Client
Client_EXTERNAL_OBJECTS =

library/libClient.a: library/CMakeFiles/Client.dir/src/model/Client.cpp.o
library/libClient.a: library/CMakeFiles/Client.dir/build.make
library/libClient.a: library/CMakeFiles/Client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libClient.a"
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && $(CMAKE_COMMAND) -P CMakeFiles/Client.dir/cmake_clean_target.cmake
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
library/CMakeFiles/Client.dir/build: library/libClient.a
.PHONY : library/CMakeFiles/Client.dir/build

library/CMakeFiles/Client.dir/clean:
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && $(CMAKE_COMMAND) -P CMakeFiles/Client.dir/cmake_clean.cmake
.PHONY : library/CMakeFiles/Client.dir/clean

library/CMakeFiles/Client.dir/depend:
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/student/Pulpit/CLionProjects/start/kosowski/workshop /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library/CMakeFiles/Client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : library/CMakeFiles/Client.dir/depend

