# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /app/extra/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /app/extra/clion/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/arnisfet/Desktop/CPP-Module/cpp_0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/arnisfet/Desktop/CPP-Module/cpp_0/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cpp_0.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/cpp_0.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpp_0.dir/flags.make

CMakeFiles/cpp_0.dir/ex01/main.cpp.o: CMakeFiles/cpp_0.dir/flags.make
CMakeFiles/cpp_0.dir/ex01/main.cpp.o: ../ex01/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/arnisfet/Desktop/CPP-Module/cpp_0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpp_0.dir/ex01/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp_0.dir/ex01/main.cpp.o -c /home/arnisfet/Desktop/CPP-Module/cpp_0/ex01/main.cpp

CMakeFiles/cpp_0.dir/ex01/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp_0.dir/ex01/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/arnisfet/Desktop/CPP-Module/cpp_0/ex01/main.cpp > CMakeFiles/cpp_0.dir/ex01/main.cpp.i

CMakeFiles/cpp_0.dir/ex01/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp_0.dir/ex01/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/arnisfet/Desktop/CPP-Module/cpp_0/ex01/main.cpp -o CMakeFiles/cpp_0.dir/ex01/main.cpp.s

CMakeFiles/cpp_0.dir/ex01/telephone.cpp.o: CMakeFiles/cpp_0.dir/flags.make
CMakeFiles/cpp_0.dir/ex01/telephone.cpp.o: ../ex01/telephone.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/arnisfet/Desktop/CPP-Module/cpp_0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cpp_0.dir/ex01/telephone.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp_0.dir/ex01/telephone.cpp.o -c /home/arnisfet/Desktop/CPP-Module/cpp_0/ex01/telephone.cpp

CMakeFiles/cpp_0.dir/ex01/telephone.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp_0.dir/ex01/telephone.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/arnisfet/Desktop/CPP-Module/cpp_0/ex01/telephone.cpp > CMakeFiles/cpp_0.dir/ex01/telephone.cpp.i

CMakeFiles/cpp_0.dir/ex01/telephone.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp_0.dir/ex01/telephone.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/arnisfet/Desktop/CPP-Module/cpp_0/ex01/telephone.cpp -o CMakeFiles/cpp_0.dir/ex01/telephone.cpp.s

CMakeFiles/cpp_0.dir/ex01/contact.cpp.o: CMakeFiles/cpp_0.dir/flags.make
CMakeFiles/cpp_0.dir/ex01/contact.cpp.o: ../ex01/contact.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/arnisfet/Desktop/CPP-Module/cpp_0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cpp_0.dir/ex01/contact.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp_0.dir/ex01/contact.cpp.o -c /home/arnisfet/Desktop/CPP-Module/cpp_0/ex01/contact.cpp

CMakeFiles/cpp_0.dir/ex01/contact.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp_0.dir/ex01/contact.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/arnisfet/Desktop/CPP-Module/cpp_0/ex01/contact.cpp > CMakeFiles/cpp_0.dir/ex01/contact.cpp.i

CMakeFiles/cpp_0.dir/ex01/contact.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp_0.dir/ex01/contact.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/arnisfet/Desktop/CPP-Module/cpp_0/ex01/contact.cpp -o CMakeFiles/cpp_0.dir/ex01/contact.cpp.s

# Object files for target cpp_0
cpp_0_OBJECTS = \
"CMakeFiles/cpp_0.dir/ex01/main.cpp.o" \
"CMakeFiles/cpp_0.dir/ex01/telephone.cpp.o" \
"CMakeFiles/cpp_0.dir/ex01/contact.cpp.o"

# External object files for target cpp_0
cpp_0_EXTERNAL_OBJECTS =

cpp_0: CMakeFiles/cpp_0.dir/ex01/main.cpp.o
cpp_0: CMakeFiles/cpp_0.dir/ex01/telephone.cpp.o
cpp_0: CMakeFiles/cpp_0.dir/ex01/contact.cpp.o
cpp_0: CMakeFiles/cpp_0.dir/build.make
cpp_0: CMakeFiles/cpp_0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/arnisfet/Desktop/CPP-Module/cpp_0/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable cpp_0"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpp_0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpp_0.dir/build: cpp_0
.PHONY : CMakeFiles/cpp_0.dir/build

CMakeFiles/cpp_0.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpp_0.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpp_0.dir/clean

CMakeFiles/cpp_0.dir/depend:
	cd /home/arnisfet/Desktop/CPP-Module/cpp_0/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/arnisfet/Desktop/CPP-Module/cpp_0 /home/arnisfet/Desktop/CPP-Module/cpp_0 /home/arnisfet/Desktop/CPP-Module/cpp_0/cmake-build-debug /home/arnisfet/Desktop/CPP-Module/cpp_0/cmake-build-debug /home/arnisfet/Desktop/CPP-Module/cpp_0/cmake-build-debug/CMakeFiles/cpp_0.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpp_0.dir/depend

