# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.4

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.4.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.4.0/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/julienfausty/workspace/personnalStuff/HiDiMesher

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/julienfausty/workspace/personnalStuff/HiDiMesher

# Include any dependencies generated for this target.
include src/CMakeFiles/src.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/src.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/src.dir/flags.make

src/CMakeFiles/src.dir/dPoint.cpp.o: src/CMakeFiles/src.dir/flags.make
src/CMakeFiles/src.dir/dPoint.cpp.o: src/dPoint.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/julienfausty/workspace/personnalStuff/HiDiMesher/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/src.dir/dPoint.cpp.o"
	cd /Users/julienfausty/workspace/personnalStuff/HiDiMesher/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/src.dir/dPoint.cpp.o -c /Users/julienfausty/workspace/personnalStuff/HiDiMesher/src/dPoint.cpp

src/CMakeFiles/src.dir/dPoint.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/dPoint.cpp.i"
	cd /Users/julienfausty/workspace/personnalStuff/HiDiMesher/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/julienfausty/workspace/personnalStuff/HiDiMesher/src/dPoint.cpp > CMakeFiles/src.dir/dPoint.cpp.i

src/CMakeFiles/src.dir/dPoint.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/dPoint.cpp.s"
	cd /Users/julienfausty/workspace/personnalStuff/HiDiMesher/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/julienfausty/workspace/personnalStuff/HiDiMesher/src/dPoint.cpp -o CMakeFiles/src.dir/dPoint.cpp.s

src/CMakeFiles/src.dir/dPoint.cpp.o.requires:

.PHONY : src/CMakeFiles/src.dir/dPoint.cpp.o.requires

src/CMakeFiles/src.dir/dPoint.cpp.o.provides: src/CMakeFiles/src.dir/dPoint.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/src.dir/build.make src/CMakeFiles/src.dir/dPoint.cpp.o.provides.build
.PHONY : src/CMakeFiles/src.dir/dPoint.cpp.o.provides

src/CMakeFiles/src.dir/dPoint.cpp.o.provides.build: src/CMakeFiles/src.dir/dPoint.cpp.o


src/CMakeFiles/src.dir/dSimplex.cpp.o: src/CMakeFiles/src.dir/flags.make
src/CMakeFiles/src.dir/dSimplex.cpp.o: src/dSimplex.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/julienfausty/workspace/personnalStuff/HiDiMesher/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/src.dir/dSimplex.cpp.o"
	cd /Users/julienfausty/workspace/personnalStuff/HiDiMesher/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/src.dir/dSimplex.cpp.o -c /Users/julienfausty/workspace/personnalStuff/HiDiMesher/src/dSimplex.cpp

src/CMakeFiles/src.dir/dSimplex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/src.dir/dSimplex.cpp.i"
	cd /Users/julienfausty/workspace/personnalStuff/HiDiMesher/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/julienfausty/workspace/personnalStuff/HiDiMesher/src/dSimplex.cpp > CMakeFiles/src.dir/dSimplex.cpp.i

src/CMakeFiles/src.dir/dSimplex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/src.dir/dSimplex.cpp.s"
	cd /Users/julienfausty/workspace/personnalStuff/HiDiMesher/src && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/julienfausty/workspace/personnalStuff/HiDiMesher/src/dSimplex.cpp -o CMakeFiles/src.dir/dSimplex.cpp.s

src/CMakeFiles/src.dir/dSimplex.cpp.o.requires:

.PHONY : src/CMakeFiles/src.dir/dSimplex.cpp.o.requires

src/CMakeFiles/src.dir/dSimplex.cpp.o.provides: src/CMakeFiles/src.dir/dSimplex.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/src.dir/build.make src/CMakeFiles/src.dir/dSimplex.cpp.o.provides.build
.PHONY : src/CMakeFiles/src.dir/dSimplex.cpp.o.provides

src/CMakeFiles/src.dir/dSimplex.cpp.o.provides.build: src/CMakeFiles/src.dir/dSimplex.cpp.o


# Object files for target src
src_OBJECTS = \
"CMakeFiles/src.dir/dPoint.cpp.o" \
"CMakeFiles/src.dir/dSimplex.cpp.o"

# External object files for target src
src_EXTERNAL_OBJECTS =

lib/libsrc.a: src/CMakeFiles/src.dir/dPoint.cpp.o
lib/libsrc.a: src/CMakeFiles/src.dir/dSimplex.cpp.o
lib/libsrc.a: src/CMakeFiles/src.dir/build.make
lib/libsrc.a: src/CMakeFiles/src.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/julienfausty/workspace/personnalStuff/HiDiMesher/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library ../lib/libsrc.a"
	cd /Users/julienfausty/workspace/personnalStuff/HiDiMesher/src && $(CMAKE_COMMAND) -P CMakeFiles/src.dir/cmake_clean_target.cmake
	cd /Users/julienfausty/workspace/personnalStuff/HiDiMesher/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/src.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/src.dir/build: lib/libsrc.a

.PHONY : src/CMakeFiles/src.dir/build

src/CMakeFiles/src.dir/requires: src/CMakeFiles/src.dir/dPoint.cpp.o.requires
src/CMakeFiles/src.dir/requires: src/CMakeFiles/src.dir/dSimplex.cpp.o.requires

.PHONY : src/CMakeFiles/src.dir/requires

src/CMakeFiles/src.dir/clean:
	cd /Users/julienfausty/workspace/personnalStuff/HiDiMesher/src && $(CMAKE_COMMAND) -P CMakeFiles/src.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/src.dir/clean

src/CMakeFiles/src.dir/depend:
	cd /Users/julienfausty/workspace/personnalStuff/HiDiMesher && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/julienfausty/workspace/personnalStuff/HiDiMesher /Users/julienfausty/workspace/personnalStuff/HiDiMesher/src /Users/julienfausty/workspace/personnalStuff/HiDiMesher /Users/julienfausty/workspace/personnalStuff/HiDiMesher/src /Users/julienfausty/workspace/personnalStuff/HiDiMesher/src/CMakeFiles/src.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/src.dir/depend

