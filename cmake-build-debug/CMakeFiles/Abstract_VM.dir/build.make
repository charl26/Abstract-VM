# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /goinfre/chtheron/Desktop/Abstract-VM

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /goinfre/chtheron/Desktop/Abstract-VM/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Abstract_VM.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Abstract_VM.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Abstract_VM.dir/flags.make

CMakeFiles/Abstract_VM.dir/main.cpp.o: CMakeFiles/Abstract_VM.dir/flags.make
CMakeFiles/Abstract_VM.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/goinfre/chtheron/Desktop/Abstract-VM/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Abstract_VM.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Abstract_VM.dir/main.cpp.o -c /goinfre/chtheron/Desktop/Abstract-VM/main.cpp

CMakeFiles/Abstract_VM.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Abstract_VM.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /goinfre/chtheron/Desktop/Abstract-VM/main.cpp > CMakeFiles/Abstract_VM.dir/main.cpp.i

CMakeFiles/Abstract_VM.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Abstract_VM.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /goinfre/chtheron/Desktop/Abstract-VM/main.cpp -o CMakeFiles/Abstract_VM.dir/main.cpp.s

CMakeFiles/Abstract_VM.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Abstract_VM.dir/main.cpp.o.requires

CMakeFiles/Abstract_VM.dir/main.cpp.o.provides: CMakeFiles/Abstract_VM.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Abstract_VM.dir/build.make CMakeFiles/Abstract_VM.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Abstract_VM.dir/main.cpp.o.provides

CMakeFiles/Abstract_VM.dir/main.cpp.o.provides.build: CMakeFiles/Abstract_VM.dir/main.cpp.o


CMakeFiles/Abstract_VM.dir/Operand.cpp.o: CMakeFiles/Abstract_VM.dir/flags.make
CMakeFiles/Abstract_VM.dir/Operand.cpp.o: ../Operand.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/goinfre/chtheron/Desktop/Abstract-VM/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Abstract_VM.dir/Operand.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Abstract_VM.dir/Operand.cpp.o -c /goinfre/chtheron/Desktop/Abstract-VM/Operand.cpp

CMakeFiles/Abstract_VM.dir/Operand.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Abstract_VM.dir/Operand.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /goinfre/chtheron/Desktop/Abstract-VM/Operand.cpp > CMakeFiles/Abstract_VM.dir/Operand.cpp.i

CMakeFiles/Abstract_VM.dir/Operand.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Abstract_VM.dir/Operand.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /goinfre/chtheron/Desktop/Abstract-VM/Operand.cpp -o CMakeFiles/Abstract_VM.dir/Operand.cpp.s

CMakeFiles/Abstract_VM.dir/Operand.cpp.o.requires:

.PHONY : CMakeFiles/Abstract_VM.dir/Operand.cpp.o.requires

CMakeFiles/Abstract_VM.dir/Operand.cpp.o.provides: CMakeFiles/Abstract_VM.dir/Operand.cpp.o.requires
	$(MAKE) -f CMakeFiles/Abstract_VM.dir/build.make CMakeFiles/Abstract_VM.dir/Operand.cpp.o.provides.build
.PHONY : CMakeFiles/Abstract_VM.dir/Operand.cpp.o.provides

CMakeFiles/Abstract_VM.dir/Operand.cpp.o.provides.build: CMakeFiles/Abstract_VM.dir/Operand.cpp.o


CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.o: CMakeFiles/Abstract_VM.dir/flags.make
CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.o: ../OperandFactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/goinfre/chtheron/Desktop/Abstract-VM/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.o -c /goinfre/chtheron/Desktop/Abstract-VM/OperandFactory.cpp

CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /goinfre/chtheron/Desktop/Abstract-VM/OperandFactory.cpp > CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.i

CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /goinfre/chtheron/Desktop/Abstract-VM/OperandFactory.cpp -o CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.s

CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.o.requires:

.PHONY : CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.o.requires

CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.o.provides: CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.o.requires
	$(MAKE) -f CMakeFiles/Abstract_VM.dir/build.make CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.o.provides.build
.PHONY : CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.o.provides

CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.o.provides.build: CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.o


CMakeFiles/Abstract_VM.dir/VmStack.cpp.o: CMakeFiles/Abstract_VM.dir/flags.make
CMakeFiles/Abstract_VM.dir/VmStack.cpp.o: ../VmStack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/goinfre/chtheron/Desktop/Abstract-VM/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Abstract_VM.dir/VmStack.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Abstract_VM.dir/VmStack.cpp.o -c /goinfre/chtheron/Desktop/Abstract-VM/VmStack.cpp

CMakeFiles/Abstract_VM.dir/VmStack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Abstract_VM.dir/VmStack.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /goinfre/chtheron/Desktop/Abstract-VM/VmStack.cpp > CMakeFiles/Abstract_VM.dir/VmStack.cpp.i

CMakeFiles/Abstract_VM.dir/VmStack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Abstract_VM.dir/VmStack.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /goinfre/chtheron/Desktop/Abstract-VM/VmStack.cpp -o CMakeFiles/Abstract_VM.dir/VmStack.cpp.s

CMakeFiles/Abstract_VM.dir/VmStack.cpp.o.requires:

.PHONY : CMakeFiles/Abstract_VM.dir/VmStack.cpp.o.requires

CMakeFiles/Abstract_VM.dir/VmStack.cpp.o.provides: CMakeFiles/Abstract_VM.dir/VmStack.cpp.o.requires
	$(MAKE) -f CMakeFiles/Abstract_VM.dir/build.make CMakeFiles/Abstract_VM.dir/VmStack.cpp.o.provides.build
.PHONY : CMakeFiles/Abstract_VM.dir/VmStack.cpp.o.provides

CMakeFiles/Abstract_VM.dir/VmStack.cpp.o.provides.build: CMakeFiles/Abstract_VM.dir/VmStack.cpp.o


# Object files for target Abstract_VM
Abstract_VM_OBJECTS = \
"CMakeFiles/Abstract_VM.dir/main.cpp.o" \
"CMakeFiles/Abstract_VM.dir/Operand.cpp.o" \
"CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.o" \
"CMakeFiles/Abstract_VM.dir/VmStack.cpp.o"

# External object files for target Abstract_VM
Abstract_VM_EXTERNAL_OBJECTS =

Abstract_VM: CMakeFiles/Abstract_VM.dir/main.cpp.o
Abstract_VM: CMakeFiles/Abstract_VM.dir/Operand.cpp.o
Abstract_VM: CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.o
Abstract_VM: CMakeFiles/Abstract_VM.dir/VmStack.cpp.o
Abstract_VM: CMakeFiles/Abstract_VM.dir/build.make
Abstract_VM: CMakeFiles/Abstract_VM.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/goinfre/chtheron/Desktop/Abstract-VM/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable Abstract_VM"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Abstract_VM.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Abstract_VM.dir/build: Abstract_VM

.PHONY : CMakeFiles/Abstract_VM.dir/build

CMakeFiles/Abstract_VM.dir/requires: CMakeFiles/Abstract_VM.dir/main.cpp.o.requires
CMakeFiles/Abstract_VM.dir/requires: CMakeFiles/Abstract_VM.dir/Operand.cpp.o.requires
CMakeFiles/Abstract_VM.dir/requires: CMakeFiles/Abstract_VM.dir/OperandFactory.cpp.o.requires
CMakeFiles/Abstract_VM.dir/requires: CMakeFiles/Abstract_VM.dir/VmStack.cpp.o.requires

.PHONY : CMakeFiles/Abstract_VM.dir/requires

CMakeFiles/Abstract_VM.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Abstract_VM.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Abstract_VM.dir/clean

CMakeFiles/Abstract_VM.dir/depend:
	cd /goinfre/chtheron/Desktop/Abstract-VM/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /goinfre/chtheron/Desktop/Abstract-VM /goinfre/chtheron/Desktop/Abstract-VM /goinfre/chtheron/Desktop/Abstract-VM/cmake-build-debug /goinfre/chtheron/Desktop/Abstract-VM/cmake-build-debug /goinfre/chtheron/Desktop/Abstract-VM/cmake-build-debug/CMakeFiles/Abstract_VM.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Abstract_VM.dir/depend
