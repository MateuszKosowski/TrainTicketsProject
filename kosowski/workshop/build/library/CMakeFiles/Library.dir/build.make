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
CMAKE_SOURCE_DIR = /home/student/CLionProjects/start/kosowski/workshop

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/student/CLionProjects/start/kosowski/workshop/build

# Include any dependencies generated for this target.
include library/CMakeFiles/Library.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include library/CMakeFiles/Library.dir/compiler_depend.make

# Include the progress variables for this target.
include library/CMakeFiles/Library.dir/progress.make

# Include the compile flags for this target's objects.
include library/CMakeFiles/Library.dir/flags.make

library/CMakeFiles/Library.dir/src/model/Client.cpp.o: library/CMakeFiles/Library.dir/flags.make
library/CMakeFiles/Library.dir/src/model/Client.cpp.o: /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Client.cpp
library/CMakeFiles/Library.dir/src/model/Client.cpp.o: library/CMakeFiles/Library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object library/CMakeFiles/Library.dir/src/model/Client.cpp.o"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT library/CMakeFiles/Library.dir/src/model/Client.cpp.o -MF CMakeFiles/Library.dir/src/model/Client.cpp.o.d -o CMakeFiles/Library.dir/src/model/Client.cpp.o -c /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Client.cpp

library/CMakeFiles/Library.dir/src/model/Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/model/Client.cpp.i"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Client.cpp > CMakeFiles/Library.dir/src/model/Client.cpp.i

library/CMakeFiles/Library.dir/src/model/Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/model/Client.cpp.s"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Client.cpp -o CMakeFiles/Library.dir/src/model/Client.cpp.s

library/CMakeFiles/Library.dir/src/model/Address.cpp.o: library/CMakeFiles/Library.dir/flags.make
library/CMakeFiles/Library.dir/src/model/Address.cpp.o: /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Address.cpp
library/CMakeFiles/Library.dir/src/model/Address.cpp.o: library/CMakeFiles/Library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object library/CMakeFiles/Library.dir/src/model/Address.cpp.o"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT library/CMakeFiles/Library.dir/src/model/Address.cpp.o -MF CMakeFiles/Library.dir/src/model/Address.cpp.o.d -o CMakeFiles/Library.dir/src/model/Address.cpp.o -c /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Address.cpp

library/CMakeFiles/Library.dir/src/model/Address.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/model/Address.cpp.i"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Address.cpp > CMakeFiles/Library.dir/src/model/Address.cpp.i

library/CMakeFiles/Library.dir/src/model/Address.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/model/Address.cpp.s"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Address.cpp -o CMakeFiles/Library.dir/src/model/Address.cpp.s

library/CMakeFiles/Library.dir/src/model/Rent.cpp.o: library/CMakeFiles/Library.dir/flags.make
library/CMakeFiles/Library.dir/src/model/Rent.cpp.o: /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Rent.cpp
library/CMakeFiles/Library.dir/src/model/Rent.cpp.o: library/CMakeFiles/Library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object library/CMakeFiles/Library.dir/src/model/Rent.cpp.o"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT library/CMakeFiles/Library.dir/src/model/Rent.cpp.o -MF CMakeFiles/Library.dir/src/model/Rent.cpp.o.d -o CMakeFiles/Library.dir/src/model/Rent.cpp.o -c /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Rent.cpp

library/CMakeFiles/Library.dir/src/model/Rent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/model/Rent.cpp.i"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Rent.cpp > CMakeFiles/Library.dir/src/model/Rent.cpp.i

library/CMakeFiles/Library.dir/src/model/Rent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/model/Rent.cpp.s"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Rent.cpp -o CMakeFiles/Library.dir/src/model/Rent.cpp.s

library/CMakeFiles/Library.dir/src/model/Vehicle.cpp.o: library/CMakeFiles/Library.dir/flags.make
library/CMakeFiles/Library.dir/src/model/Vehicle.cpp.o: /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Vehicle.cpp
library/CMakeFiles/Library.dir/src/model/Vehicle.cpp.o: library/CMakeFiles/Library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object library/CMakeFiles/Library.dir/src/model/Vehicle.cpp.o"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT library/CMakeFiles/Library.dir/src/model/Vehicle.cpp.o -MF CMakeFiles/Library.dir/src/model/Vehicle.cpp.o.d -o CMakeFiles/Library.dir/src/model/Vehicle.cpp.o -c /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Vehicle.cpp

library/CMakeFiles/Library.dir/src/model/Vehicle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/model/Vehicle.cpp.i"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Vehicle.cpp > CMakeFiles/Library.dir/src/model/Vehicle.cpp.i

library/CMakeFiles/Library.dir/src/model/Vehicle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/model/Vehicle.cpp.s"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Vehicle.cpp -o CMakeFiles/Library.dir/src/model/Vehicle.cpp.s

library/CMakeFiles/Library.dir/src/model/Bicycle.cpp.o: library/CMakeFiles/Library.dir/flags.make
library/CMakeFiles/Library.dir/src/model/Bicycle.cpp.o: /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Bicycle.cpp
library/CMakeFiles/Library.dir/src/model/Bicycle.cpp.o: library/CMakeFiles/Library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object library/CMakeFiles/Library.dir/src/model/Bicycle.cpp.o"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT library/CMakeFiles/Library.dir/src/model/Bicycle.cpp.o -MF CMakeFiles/Library.dir/src/model/Bicycle.cpp.o.d -o CMakeFiles/Library.dir/src/model/Bicycle.cpp.o -c /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Bicycle.cpp

library/CMakeFiles/Library.dir/src/model/Bicycle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/model/Bicycle.cpp.i"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Bicycle.cpp > CMakeFiles/Library.dir/src/model/Bicycle.cpp.i

library/CMakeFiles/Library.dir/src/model/Bicycle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/model/Bicycle.cpp.s"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Bicycle.cpp -o CMakeFiles/Library.dir/src/model/Bicycle.cpp.s

library/CMakeFiles/Library.dir/src/model/MotorVehicle.cpp.o: library/CMakeFiles/Library.dir/flags.make
library/CMakeFiles/Library.dir/src/model/MotorVehicle.cpp.o: /home/student/CLionProjects/start/kosowski/workshop/library/src/model/MotorVehicle.cpp
library/CMakeFiles/Library.dir/src/model/MotorVehicle.cpp.o: library/CMakeFiles/Library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object library/CMakeFiles/Library.dir/src/model/MotorVehicle.cpp.o"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT library/CMakeFiles/Library.dir/src/model/MotorVehicle.cpp.o -MF CMakeFiles/Library.dir/src/model/MotorVehicle.cpp.o.d -o CMakeFiles/Library.dir/src/model/MotorVehicle.cpp.o -c /home/student/CLionProjects/start/kosowski/workshop/library/src/model/MotorVehicle.cpp

library/CMakeFiles/Library.dir/src/model/MotorVehicle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/model/MotorVehicle.cpp.i"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/CLionProjects/start/kosowski/workshop/library/src/model/MotorVehicle.cpp > CMakeFiles/Library.dir/src/model/MotorVehicle.cpp.i

library/CMakeFiles/Library.dir/src/model/MotorVehicle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/model/MotorVehicle.cpp.s"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/CLionProjects/start/kosowski/workshop/library/src/model/MotorVehicle.cpp -o CMakeFiles/Library.dir/src/model/MotorVehicle.cpp.s

library/CMakeFiles/Library.dir/src/model/Moped.cpp.o: library/CMakeFiles/Library.dir/flags.make
library/CMakeFiles/Library.dir/src/model/Moped.cpp.o: /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Moped.cpp
library/CMakeFiles/Library.dir/src/model/Moped.cpp.o: library/CMakeFiles/Library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object library/CMakeFiles/Library.dir/src/model/Moped.cpp.o"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT library/CMakeFiles/Library.dir/src/model/Moped.cpp.o -MF CMakeFiles/Library.dir/src/model/Moped.cpp.o.d -o CMakeFiles/Library.dir/src/model/Moped.cpp.o -c /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Moped.cpp

library/CMakeFiles/Library.dir/src/model/Moped.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/model/Moped.cpp.i"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Moped.cpp > CMakeFiles/Library.dir/src/model/Moped.cpp.i

library/CMakeFiles/Library.dir/src/model/Moped.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/model/Moped.cpp.s"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Moped.cpp -o CMakeFiles/Library.dir/src/model/Moped.cpp.s

library/CMakeFiles/Library.dir/src/model/Car.cpp.o: library/CMakeFiles/Library.dir/flags.make
library/CMakeFiles/Library.dir/src/model/Car.cpp.o: /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Car.cpp
library/CMakeFiles/Library.dir/src/model/Car.cpp.o: library/CMakeFiles/Library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object library/CMakeFiles/Library.dir/src/model/Car.cpp.o"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT library/CMakeFiles/Library.dir/src/model/Car.cpp.o -MF CMakeFiles/Library.dir/src/model/Car.cpp.o.d -o CMakeFiles/Library.dir/src/model/Car.cpp.o -c /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Car.cpp

library/CMakeFiles/Library.dir/src/model/Car.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/model/Car.cpp.i"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Car.cpp > CMakeFiles/Library.dir/src/model/Car.cpp.i

library/CMakeFiles/Library.dir/src/model/Car.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/model/Car.cpp.s"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/CLionProjects/start/kosowski/workshop/library/src/model/Car.cpp -o CMakeFiles/Library.dir/src/model/Car.cpp.s

library/CMakeFiles/Library.dir/src/model/ClientType.cpp.o: library/CMakeFiles/Library.dir/flags.make
library/CMakeFiles/Library.dir/src/model/ClientType.cpp.o: /home/student/CLionProjects/start/kosowski/workshop/library/src/model/ClientType.cpp
library/CMakeFiles/Library.dir/src/model/ClientType.cpp.o: library/CMakeFiles/Library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object library/CMakeFiles/Library.dir/src/model/ClientType.cpp.o"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT library/CMakeFiles/Library.dir/src/model/ClientType.cpp.o -MF CMakeFiles/Library.dir/src/model/ClientType.cpp.o.d -o CMakeFiles/Library.dir/src/model/ClientType.cpp.o -c /home/student/CLionProjects/start/kosowski/workshop/library/src/model/ClientType.cpp

library/CMakeFiles/Library.dir/src/model/ClientType.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/model/ClientType.cpp.i"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/CLionProjects/start/kosowski/workshop/library/src/model/ClientType.cpp > CMakeFiles/Library.dir/src/model/ClientType.cpp.i

library/CMakeFiles/Library.dir/src/model/ClientType.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/model/ClientType.cpp.s"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/CLionProjects/start/kosowski/workshop/library/src/model/ClientType.cpp -o CMakeFiles/Library.dir/src/model/ClientType.cpp.s

library/CMakeFiles/Library.dir/src/repositories/ClientRepository.cpp.o: library/CMakeFiles/Library.dir/flags.make
library/CMakeFiles/Library.dir/src/repositories/ClientRepository.cpp.o: /home/student/CLionProjects/start/kosowski/workshop/library/src/repositories/ClientRepository.cpp
library/CMakeFiles/Library.dir/src/repositories/ClientRepository.cpp.o: library/CMakeFiles/Library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object library/CMakeFiles/Library.dir/src/repositories/ClientRepository.cpp.o"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT library/CMakeFiles/Library.dir/src/repositories/ClientRepository.cpp.o -MF CMakeFiles/Library.dir/src/repositories/ClientRepository.cpp.o.d -o CMakeFiles/Library.dir/src/repositories/ClientRepository.cpp.o -c /home/student/CLionProjects/start/kosowski/workshop/library/src/repositories/ClientRepository.cpp

library/CMakeFiles/Library.dir/src/repositories/ClientRepository.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/repositories/ClientRepository.cpp.i"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/CLionProjects/start/kosowski/workshop/library/src/repositories/ClientRepository.cpp > CMakeFiles/Library.dir/src/repositories/ClientRepository.cpp.i

library/CMakeFiles/Library.dir/src/repositories/ClientRepository.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/repositories/ClientRepository.cpp.s"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/CLionProjects/start/kosowski/workshop/library/src/repositories/ClientRepository.cpp -o CMakeFiles/Library.dir/src/repositories/ClientRepository.cpp.s

library/CMakeFiles/Library.dir/src/repositories/RentRepository.cpp.o: library/CMakeFiles/Library.dir/flags.make
library/CMakeFiles/Library.dir/src/repositories/RentRepository.cpp.o: /home/student/CLionProjects/start/kosowski/workshop/library/src/repositories/RentRepository.cpp
library/CMakeFiles/Library.dir/src/repositories/RentRepository.cpp.o: library/CMakeFiles/Library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object library/CMakeFiles/Library.dir/src/repositories/RentRepository.cpp.o"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT library/CMakeFiles/Library.dir/src/repositories/RentRepository.cpp.o -MF CMakeFiles/Library.dir/src/repositories/RentRepository.cpp.o.d -o CMakeFiles/Library.dir/src/repositories/RentRepository.cpp.o -c /home/student/CLionProjects/start/kosowski/workshop/library/src/repositories/RentRepository.cpp

library/CMakeFiles/Library.dir/src/repositories/RentRepository.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/repositories/RentRepository.cpp.i"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/CLionProjects/start/kosowski/workshop/library/src/repositories/RentRepository.cpp > CMakeFiles/Library.dir/src/repositories/RentRepository.cpp.i

library/CMakeFiles/Library.dir/src/repositories/RentRepository.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/repositories/RentRepository.cpp.s"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/CLionProjects/start/kosowski/workshop/library/src/repositories/RentRepository.cpp -o CMakeFiles/Library.dir/src/repositories/RentRepository.cpp.s

library/CMakeFiles/Library.dir/src/repositories/VehicleRepository.cpp.o: library/CMakeFiles/Library.dir/flags.make
library/CMakeFiles/Library.dir/src/repositories/VehicleRepository.cpp.o: /home/student/CLionProjects/start/kosowski/workshop/library/src/repositories/VehicleRepository.cpp
library/CMakeFiles/Library.dir/src/repositories/VehicleRepository.cpp.o: library/CMakeFiles/Library.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/student/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object library/CMakeFiles/Library.dir/src/repositories/VehicleRepository.cpp.o"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT library/CMakeFiles/Library.dir/src/repositories/VehicleRepository.cpp.o -MF CMakeFiles/Library.dir/src/repositories/VehicleRepository.cpp.o.d -o CMakeFiles/Library.dir/src/repositories/VehicleRepository.cpp.o -c /home/student/CLionProjects/start/kosowski/workshop/library/src/repositories/VehicleRepository.cpp

library/CMakeFiles/Library.dir/src/repositories/VehicleRepository.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Library.dir/src/repositories/VehicleRepository.cpp.i"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/student/CLionProjects/start/kosowski/workshop/library/src/repositories/VehicleRepository.cpp > CMakeFiles/Library.dir/src/repositories/VehicleRepository.cpp.i

library/CMakeFiles/Library.dir/src/repositories/VehicleRepository.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Library.dir/src/repositories/VehicleRepository.cpp.s"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/student/CLionProjects/start/kosowski/workshop/library/src/repositories/VehicleRepository.cpp -o CMakeFiles/Library.dir/src/repositories/VehicleRepository.cpp.s

# Object files for target Library
Library_OBJECTS = \
"CMakeFiles/Library.dir/src/model/Client.cpp.o" \
"CMakeFiles/Library.dir/src/model/Address.cpp.o" \
"CMakeFiles/Library.dir/src/model/Rent.cpp.o" \
"CMakeFiles/Library.dir/src/model/Vehicle.cpp.o" \
"CMakeFiles/Library.dir/src/model/Bicycle.cpp.o" \
"CMakeFiles/Library.dir/src/model/MotorVehicle.cpp.o" \
"CMakeFiles/Library.dir/src/model/Moped.cpp.o" \
"CMakeFiles/Library.dir/src/model/Car.cpp.o" \
"CMakeFiles/Library.dir/src/model/ClientType.cpp.o" \
"CMakeFiles/Library.dir/src/repositories/ClientRepository.cpp.o" \
"CMakeFiles/Library.dir/src/repositories/RentRepository.cpp.o" \
"CMakeFiles/Library.dir/src/repositories/VehicleRepository.cpp.o"

# External object files for target Library
Library_EXTERNAL_OBJECTS =

library/libLibrary.a: library/CMakeFiles/Library.dir/src/model/Client.cpp.o
library/libLibrary.a: library/CMakeFiles/Library.dir/src/model/Address.cpp.o
library/libLibrary.a: library/CMakeFiles/Library.dir/src/model/Rent.cpp.o
library/libLibrary.a: library/CMakeFiles/Library.dir/src/model/Vehicle.cpp.o
library/libLibrary.a: library/CMakeFiles/Library.dir/src/model/Bicycle.cpp.o
library/libLibrary.a: library/CMakeFiles/Library.dir/src/model/MotorVehicle.cpp.o
library/libLibrary.a: library/CMakeFiles/Library.dir/src/model/Moped.cpp.o
library/libLibrary.a: library/CMakeFiles/Library.dir/src/model/Car.cpp.o
library/libLibrary.a: library/CMakeFiles/Library.dir/src/model/ClientType.cpp.o
library/libLibrary.a: library/CMakeFiles/Library.dir/src/repositories/ClientRepository.cpp.o
library/libLibrary.a: library/CMakeFiles/Library.dir/src/repositories/RentRepository.cpp.o
library/libLibrary.a: library/CMakeFiles/Library.dir/src/repositories/VehicleRepository.cpp.o
library/libLibrary.a: library/CMakeFiles/Library.dir/build.make
library/libLibrary.a: library/CMakeFiles/Library.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/student/CLionProjects/start/kosowski/workshop/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX static library libLibrary.a"
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && $(CMAKE_COMMAND) -P CMakeFiles/Library.dir/cmake_clean_target.cmake
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Library.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
library/CMakeFiles/Library.dir/build: library/libLibrary.a
.PHONY : library/CMakeFiles/Library.dir/build

library/CMakeFiles/Library.dir/clean:
	cd /home/student/CLionProjects/start/kosowski/workshop/build/library && $(CMAKE_COMMAND) -P CMakeFiles/Library.dir/cmake_clean.cmake
.PHONY : library/CMakeFiles/Library.dir/clean

library/CMakeFiles/Library.dir/depend:
	cd /home/student/CLionProjects/start/kosowski/workshop/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/student/CLionProjects/start/kosowski/workshop /home/student/CLionProjects/start/kosowski/workshop/library /home/student/CLionProjects/start/kosowski/workshop/build /home/student/CLionProjects/start/kosowski/workshop/build/library /home/student/CLionProjects/start/kosowski/workshop/build/library/CMakeFiles/Library.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : library/CMakeFiles/Library.dir/depend

