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
CMAKE_SOURCE_DIR = /Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/d01_ex05.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/d01_ex05.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/d01_ex05.dir/flags.make

CMakeFiles/d01_ex05.dir/Brain.cpp.o: CMakeFiles/d01_ex05.dir/flags.make
CMakeFiles/d01_ex05.dir/Brain.cpp.o: ../Brain.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/d01_ex05.dir/Brain.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/d01_ex05.dir/Brain.cpp.o -c /Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05/Brain.cpp

CMakeFiles/d01_ex05.dir/Brain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/d01_ex05.dir/Brain.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05/Brain.cpp > CMakeFiles/d01_ex05.dir/Brain.cpp.i

CMakeFiles/d01_ex05.dir/Brain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/d01_ex05.dir/Brain.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05/Brain.cpp -o CMakeFiles/d01_ex05.dir/Brain.cpp.s

CMakeFiles/d01_ex05.dir/Human.cpp.o: CMakeFiles/d01_ex05.dir/flags.make
CMakeFiles/d01_ex05.dir/Human.cpp.o: ../Human.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/d01_ex05.dir/Human.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/d01_ex05.dir/Human.cpp.o -c /Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05/Human.cpp

CMakeFiles/d01_ex05.dir/Human.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/d01_ex05.dir/Human.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05/Human.cpp > CMakeFiles/d01_ex05.dir/Human.cpp.i

CMakeFiles/d01_ex05.dir/Human.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/d01_ex05.dir/Human.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05/Human.cpp -o CMakeFiles/d01_ex05.dir/Human.cpp.s

CMakeFiles/d01_ex05.dir/main.cpp.o: CMakeFiles/d01_ex05.dir/flags.make
CMakeFiles/d01_ex05.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/d01_ex05.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/d01_ex05.dir/main.cpp.o -c /Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05/main.cpp

CMakeFiles/d01_ex05.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/d01_ex05.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05/main.cpp > CMakeFiles/d01_ex05.dir/main.cpp.i

CMakeFiles/d01_ex05.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/d01_ex05.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05/main.cpp -o CMakeFiles/d01_ex05.dir/main.cpp.s

# Object files for target d01_ex05
d01_ex05_OBJECTS = \
"CMakeFiles/d01_ex05.dir/Brain.cpp.o" \
"CMakeFiles/d01_ex05.dir/Human.cpp.o" \
"CMakeFiles/d01_ex05.dir/main.cpp.o"

# External object files for target d01_ex05
d01_ex05_EXTERNAL_OBJECTS =

d01_ex05: CMakeFiles/d01_ex05.dir/Brain.cpp.o
d01_ex05: CMakeFiles/d01_ex05.dir/Human.cpp.o
d01_ex05: CMakeFiles/d01_ex05.dir/main.cpp.o
d01_ex05: CMakeFiles/d01_ex05.dir/build.make
d01_ex05: CMakeFiles/d01_ex05.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable d01_ex05"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/d01_ex05.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/d01_ex05.dir/build: d01_ex05

.PHONY : CMakeFiles/d01_ex05.dir/build

CMakeFiles/d01_ex05.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/d01_ex05.dir/cmake_clean.cmake
.PHONY : CMakeFiles/d01_ex05.dir/clean

CMakeFiles/d01_ex05.dir/depend:
	cd /Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05 /Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05 /Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05/cmake-build-debug /Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05/cmake-build-debug /Users/bruteflow/_projects/_unit/cpp_pool/d01/ex05/cmake-build-debug/CMakeFiles/d01_ex05.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/d01_ex05.dir/depend

