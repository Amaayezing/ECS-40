# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /cygdrive/c/Users/maaye/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/maaye/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/c/Users/maaye/Desktop/ECS 40 Gygi/Homework0"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/c/Users/maaye/Desktop/ECS 40 Gygi/Homework0/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Homework0.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Homework0.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Homework0.dir/flags.make

CMakeFiles/Homework0.dir/hello.cpp.o: CMakeFiles/Homework0.dir/flags.make
CMakeFiles/Homework0.dir/hello.cpp.o: ../hello.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/c/Users/maaye/Desktop/ECS 40 Gygi/Homework0/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Homework0.dir/hello.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Homework0.dir/hello.cpp.o -c "/cygdrive/c/Users/maaye/Desktop/ECS 40 Gygi/Homework0/hello.cpp"

CMakeFiles/Homework0.dir/hello.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Homework0.dir/hello.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/c/Users/maaye/Desktop/ECS 40 Gygi/Homework0/hello.cpp" > CMakeFiles/Homework0.dir/hello.cpp.i

CMakeFiles/Homework0.dir/hello.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Homework0.dir/hello.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/c/Users/maaye/Desktop/ECS 40 Gygi/Homework0/hello.cpp" -o CMakeFiles/Homework0.dir/hello.cpp.s

CMakeFiles/Homework0.dir/hello.cpp.o.requires:

.PHONY : CMakeFiles/Homework0.dir/hello.cpp.o.requires

CMakeFiles/Homework0.dir/hello.cpp.o.provides: CMakeFiles/Homework0.dir/hello.cpp.o.requires
	$(MAKE) -f CMakeFiles/Homework0.dir/build.make CMakeFiles/Homework0.dir/hello.cpp.o.provides.build
.PHONY : CMakeFiles/Homework0.dir/hello.cpp.o.provides

CMakeFiles/Homework0.dir/hello.cpp.o.provides.build: CMakeFiles/Homework0.dir/hello.cpp.o


# Object files for target Homework0
Homework0_OBJECTS = \
"CMakeFiles/Homework0.dir/hello.cpp.o"

# External object files for target Homework0
Homework0_EXTERNAL_OBJECTS =

Homework0.exe: CMakeFiles/Homework0.dir/hello.cpp.o
Homework0.exe: CMakeFiles/Homework0.dir/build.make
Homework0.exe: CMakeFiles/Homework0.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/c/Users/maaye/Desktop/ECS 40 Gygi/Homework0/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Homework0.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Homework0.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Homework0.dir/build: Homework0.exe

.PHONY : CMakeFiles/Homework0.dir/build

CMakeFiles/Homework0.dir/requires: CMakeFiles/Homework0.dir/hello.cpp.o.requires

.PHONY : CMakeFiles/Homework0.dir/requires

CMakeFiles/Homework0.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Homework0.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Homework0.dir/clean

CMakeFiles/Homework0.dir/depend:
	cd "/cygdrive/c/Users/maaye/Desktop/ECS 40 Gygi/Homework0/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/c/Users/maaye/Desktop/ECS 40 Gygi/Homework0" "/cygdrive/c/Users/maaye/Desktop/ECS 40 Gygi/Homework0" "/cygdrive/c/Users/maaye/Desktop/ECS 40 Gygi/Homework0/cmake-build-debug" "/cygdrive/c/Users/maaye/Desktop/ECS 40 Gygi/Homework0/cmake-build-debug" "/cygdrive/c/Users/maaye/Desktop/ECS 40 Gygi/Homework0/cmake-build-debug/CMakeFiles/Homework0.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Homework0.dir/depend

