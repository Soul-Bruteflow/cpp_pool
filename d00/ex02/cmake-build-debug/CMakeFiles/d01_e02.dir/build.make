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
CMAKE_SOURCE_DIR = /Users/bruteflow/_projects/_unit/cpp_pool/d00/ex02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bruteflow/_projects/_unit/cpp_pool/d00/ex02/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/d01_e02.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/d01_e02.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/d01_e02.dir/flags.make

CMakeFiles/d01_e02.dir/Account.class.cpp.o: CMakeFiles/d01_e02.dir/flags.make
CMakeFiles/d01_e02.dir/Account.class.cpp.o: ../Account.class.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bruteflow/_projects/_unit/cpp_pool/d00/ex02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/d01_e02.dir/Account.class.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/d01_e02.dir/Account.class.cpp.o -c /Users/bruteflow/_projects/_unit/cpp_pool/d00/ex02/Account.class.cpp

CMakeFiles/d01_e02.dir/Account.class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/d01_e02.dir/Account.class.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bruteflow/_projects/_unit/cpp_pool/d00/ex02/Account.class.cpp > CMakeFiles/d01_e02.dir/Account.class.cpp.i

CMakeFiles/d01_e02.dir/Account.class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/d01_e02.dir/Account.class.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bruteflow/_projects/_unit/cpp_pool/d00/ex02/Account.class.cpp -o CMakeFiles/d01_e02.dir/Account.class.cpp.s

CMakeFiles/d01_e02.dir/tests.cpp.o: CMakeFiles/d01_e02.dir/flags.make
CMakeFiles/d01_e02.dir/tests.cpp.o: ../tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bruteflow/_projects/_unit/cpp_pool/d00/ex02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/d01_e02.dir/tests.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/d01_e02.dir/tests.cpp.o -c /Users/bruteflow/_projects/_unit/cpp_pool/d00/ex02/tests.cpp

CMakeFiles/d01_e02.dir/tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/d01_e02.dir/tests.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bruteflow/_projects/_unit/cpp_pool/d00/ex02/tests.cpp > CMakeFiles/d01_e02.dir/tests.cpp.i

CMakeFiles/d01_e02.dir/tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/d01_e02.dir/tests.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bruteflow/_projects/_unit/cpp_pool/d00/ex02/tests.cpp -o CMakeFiles/d01_e02.dir/tests.cpp.s

# Object files for target d01_e02
d01_e02_OBJECTS = \
"CMakeFiles/d01_e02.dir/Account.class.cpp.o" \
"CMakeFiles/d01_e02.dir/tests.cpp.o"

# External object files for target d01_e02
d01_e02_EXTERNAL_OBJECTS =

d01_e02: CMakeFiles/d01_e02.dir/Account.class.cpp.o
d01_e02: CMakeFiles/d01_e02.dir/tests.cpp.o
d01_e02: CMakeFiles/d01_e02.dir/build.make
d01_e02: CMakeFiles/d01_e02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bruteflow/_projects/_unit/cpp_pool/d00/ex02/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable d01_e02"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/d01_e02.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/d01_e02.dir/build: d01_e02

.PHONY : CMakeFiles/d01_e02.dir/build

CMakeFiles/d01_e02.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/d01_e02.dir/cmake_clean.cmake
.PHONY : CMakeFiles/d01_e02.dir/clean

CMakeFiles/d01_e02.dir/depend:
	cd /Users/bruteflow/_projects/_unit/cpp_pool/d00/ex02/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bruteflow/_projects/_unit/cpp_pool/d00/ex02 /Users/bruteflow/_projects/_unit/cpp_pool/d00/ex02 /Users/bruteflow/_projects/_unit/cpp_pool/d00/ex02/cmake-build-debug /Users/bruteflow/_projects/_unit/cpp_pool/d00/ex02/cmake-build-debug /Users/bruteflow/_projects/_unit/cpp_pool/d00/ex02/cmake-build-debug/CMakeFiles/d01_e02.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/d01_e02.dir/depend
