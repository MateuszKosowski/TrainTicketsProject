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
include library/CMakeFiles/LibraryTester.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include library/CMakeFiles/LibraryTester.dir/compiler_depend.make

# Include the progress variables for this target.
include library/CMakeFiles/LibraryTester.dir/progress.make

# Include the compile flags for this target's objects.
include library/CMakeFiles/LibraryTester.dir/flags.make

library/CMakeFiles/LibraryTester.dir/test/master.cpp.o: library/CMakeFiles/LibraryTester.dir/flags.make
library/CMakeFiles/LibraryTester.dir/test/master.cpp.o: /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/test/master.cpp
library/CMakeFiles/LibraryTester.dir/test/master.cpp.o: library/CMakeFiles/LibraryTester.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object library/CMakeFiles/LibraryTester.dir/test/master.cpp.o"
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT library/CMakeFiles/LibraryTester.dir/test/master.cpp.o -MF CMakeFiles/LibraryTester.dir/test/master.cpp.o.d -o CMakeFiles/LibraryTester.dir/test/master.cpp.o -c /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/test/master.cpp

library/CMakeFiles/LibraryTester.dir/test/master.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LibraryTester.dir/test/master.cpp.i"
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/test/master.cpp > CMakeFiles/LibraryTester.dir/test/master.cpp.i

library/CMakeFiles/LibraryTester.dir/test/master.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LibraryTester.dir/test/master.cpp.s"
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/test/master.cpp -o CMakeFiles/LibraryTester.dir/test/master.cpp.s

library/CMakeFiles/LibraryTester.dir/test/ClientTest.cpp.o: library/CMakeFiles/LibraryTester.dir/flags.make
library/CMakeFiles/LibraryTester.dir/test/ClientTest.cpp.o: /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/test/ClientTest.cpp
library/CMakeFiles/LibraryTester.dir/test/ClientTest.cpp.o: library/CMakeFiles/LibraryTester.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object library/CMakeFiles/LibraryTester.dir/test/ClientTest.cpp.o"
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT library/CMakeFiles/LibraryTester.dir/test/ClientTest.cpp.o -MF CMakeFiles/LibraryTester.dir/test/ClientTest.cpp.o.d -o CMakeFiles/LibraryTester.dir/test/ClientTest.cpp.o -c /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/test/ClientTest.cpp

library/CMakeFiles/LibraryTester.dir/test/ClientTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LibraryTester.dir/test/ClientTest.cpp.i"
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/test/ClientTest.cpp > CMakeFiles/LibraryTester.dir/test/ClientTest.cpp.i

library/CMakeFiles/LibraryTester.dir/test/ClientTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LibraryTester.dir/test/ClientTest.cpp.s"
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/test/ClientTest.cpp -o CMakeFiles/LibraryTester.dir/test/ClientTest.cpp.s

library/CMakeFiles/LibraryTester.dir/test/AddressTest.cpp.o: library/CMakeFiles/LibraryTester.dir/flags.make
library/CMakeFiles/LibraryTester.dir/test/AddressTest.cpp.o: /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/test/AddressTest.cpp
library/CMakeFiles/LibraryTester.dir/test/AddressTest.cpp.o: library/CMakeFiles/LibraryTester.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object library/CMakeFiles/LibraryTester.dir/test/AddressTest.cpp.o"
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT library/CMakeFiles/LibraryTester.dir/test/AddressTest.cpp.o -MF CMakeFiles/LibraryTester.dir/test/AddressTest.cpp.o.d -o CMakeFiles/LibraryTester.dir/test/AddressTest.cpp.o -c /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/test/AddressTest.cpp

library/CMakeFiles/LibraryTester.dir/test/AddressTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LibraryTester.dir/test/AddressTest.cpp.i"
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/test/AddressTest.cpp > CMakeFiles/LibraryTester.dir/test/AddressTest.cpp.i

library/CMakeFiles/LibraryTester.dir/test/AddressTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LibraryTester.dir/test/AddressTest.cpp.s"
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/test/AddressTest.cpp -o CMakeFiles/LibraryTester.dir/test/AddressTest.cpp.s

library/CMakeFiles/LibraryTester.dir/test/RentTest.cpp.o: library/CMakeFiles/LibraryTester.dir/flags.make
library/CMakeFiles/LibraryTester.dir/test/RentTest.cpp.o: /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/test/RentTest.cpp
library/CMakeFiles/LibraryTester.dir/test/RentTest.cpp.o: library/CMakeFiles/LibraryTester.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object library/CMakeFiles/LibraryTester.dir/test/RentTest.cpp.o"
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT library/CMakeFiles/LibraryTester.dir/test/RentTest.cpp.o -MF CMakeFiles/LibraryTester.dir/test/RentTest.cpp.o.d -o CMakeFiles/LibraryTester.dir/test/RentTest.cpp.o -c /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/test/RentTest.cpp

library/CMakeFiles/LibraryTester.dir/test/RentTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LibraryTester.dir/test/RentTest.cpp.i"
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/test/RentTest.cpp > CMakeFiles/LibraryTester.dir/test/RentTest.cpp.i

library/CMakeFiles/LibraryTester.dir/test/RentTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LibraryTester.dir/test/RentTest.cpp.s"
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library/test/RentTest.cpp -o CMakeFiles/LibraryTester.dir/test/RentTest.cpp.s

# Object files for target LibraryTester
LibraryTester_OBJECTS = \
"CMakeFiles/LibraryTester.dir/test/master.cpp.o" \
"CMakeFiles/LibraryTester.dir/test/ClientTest.cpp.o" \
"CMakeFiles/LibraryTester.dir/test/AddressTest.cpp.o" \
"CMakeFiles/LibraryTester.dir/test/RentTest.cpp.o"

# External object files for target LibraryTester
LibraryTester_EXTERNAL_OBJECTS =

library/LibraryTester: library/CMakeFiles/LibraryTester.dir/test/master.cpp.o
library/LibraryTester: library/CMakeFiles/LibraryTester.dir/test/ClientTest.cpp.o
library/LibraryTester: library/CMakeFiles/LibraryTester.dir/test/AddressTest.cpp.o
library/LibraryTester: library/CMakeFiles/LibraryTester.dir/test/RentTest.cpp.o
library/LibraryTester: library/CMakeFiles/LibraryTester.dir/build.make
library/LibraryTester: library/libLibrary.a
library/LibraryTester: /usr/lib/x86_64-linux-gnu/libboost_unit_test_framework.so.1.74.0
library/LibraryTester: library/CMakeFiles/LibraryTester.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable LibraryTester"
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LibraryTester.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
library/CMakeFiles/LibraryTester.dir/build: library/LibraryTester
.PHONY : library/CMakeFiles/LibraryTester.dir/build

library/CMakeFiles/LibraryTester.dir/clean:
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library && $(CMAKE_COMMAND) -P CMakeFiles/LibraryTester.dir/cmake_clean.cmake
.PHONY : library/CMakeFiles/LibraryTester.dir/clean

library/CMakeFiles/LibraryTester.dir/depend:
	cd /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/student/Pulpit/CLionProjects/start/kosowski/workshop /home/student/Pulpit/CLionProjects/start/kosowski/workshop/library /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library /home/student/Pulpit/CLionProjects/start/kosowski/workshop/build/library/CMakeFiles/LibraryTester.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : library/CMakeFiles/LibraryTester.dir/depend

