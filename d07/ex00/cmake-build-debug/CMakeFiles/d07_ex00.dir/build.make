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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bruteflow/_projects/_unit/cpp_pool/d07/ex00

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bruteflow/_projects/_unit/cpp_pool/d07/ex00/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/d07_ex00.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/d07_ex00.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/d07_ex00.dir/flags.make

CMakeFiles/d07_ex00.dir/whatever.cpp.o: CMakeFiles/d07_ex00.dir/flags.make
CMakeFiles/d07_ex00.dir/whatever.cpp.o: ../whatever.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bruteflow/_projects/_unit/cpp_pool/d07/ex00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/d07_ex00.dir/whatever.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/d07_ex00.dir/whatever.cpp.o -c /Users/bruteflow/_projects/_unit/cpp_pool/d07/ex00/whatever.cpp

CMakeFiles/d07_ex00.dir/whatever.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/d07_ex00.dir/whatever.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bruteflow/_projects/_unit/cpp_pool/d07/ex00/whatever.cpp > CMakeFiles/d07_ex00.dir/whatever.cpp.i

CMakeFiles/d07_ex00.dir/whatever.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/d07_ex00.dir/whatever.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bruteflow/_projects/_unit/cpp_pool/d07/ex00/whatever.cpp -o CMakeFiles/d07_ex00.dir/whatever.cpp.s

# Object files for target d07_ex00
d07_ex00_OBJECTS = \
"CMakeFiles/d07_ex00.dir/whatever.cpp.o"

# External object files for target d07_ex00
d07_ex00_EXTERNAL_OBJECTS =

d07_ex00: CMakeFiles/d07_ex00.dir/whatever.cpp.o
d07_ex00: CMakeFiles/d07_ex00.dir/build.make
d07_ex00: CMakeFiles/d07_ex00.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bruteflow/_projects/_unit/cpp_pool/d07/ex00/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable d07_ex00"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/d07_ex00.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/d07_ex00.dir/build: d07_ex00

.PHONY : CMakeFiles/d07_ex00.dir/build

CMakeFiles/d07_ex00.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/d07_ex00.dir/cmake_clean.cmake
.PHONY : CMakeFiles/d07_ex00.dir/clean

CMakeFiles/d07_ex00.dir/depend:
	cd /Users/bruteflow/_projects/_unit/cpp_pool/d07/ex00/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bruteflow/_projects/_unit/cpp_pool/d07/ex00 /Users/bruteflow/_projects/_unit/cpp_pool/d07/ex00 /Users/bruteflow/_projects/_unit/cpp_pool/d07/ex00/cmake-build-debug /Users/bruteflow/_projects/_unit/cpp_pool/d07/ex00/cmake-build-debug /Users/bruteflow/_projects/_unit/cpp_pool/d07/ex00/cmake-build-debug/CMakeFiles/d07_ex00.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/d07_ex00.dir/depend

