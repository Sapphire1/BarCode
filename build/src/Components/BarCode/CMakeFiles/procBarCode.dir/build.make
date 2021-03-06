# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lzmuda/DCL/BarCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lzmuda/DCL/BarCode/build

# Include any dependencies generated for this target.
include src/Components/BarCode/CMakeFiles/procBarCode.dir/depend.make

# Include the progress variables for this target.
include src/Components/BarCode/CMakeFiles/procBarCode.dir/progress.make

# Include the compile flags for this target's objects.
include src/Components/BarCode/CMakeFiles/procBarCode.dir/flags.make

src/Components/BarCode/CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.o: src/Components/BarCode/CMakeFiles/procBarCode.dir/flags.make
src/Components/BarCode/CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.o: ../src/Components/BarCode/BarCode_Processor.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lzmuda/DCL/BarCode/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/Components/BarCode/CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.o"
	cd /home/lzmuda/DCL/BarCode/build/src/Components/BarCode && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.o -c /home/lzmuda/DCL/BarCode/src/Components/BarCode/BarCode_Processor.cpp

src/Components/BarCode/CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.i"
	cd /home/lzmuda/DCL/BarCode/build/src/Components/BarCode && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lzmuda/DCL/BarCode/src/Components/BarCode/BarCode_Processor.cpp > CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.i

src/Components/BarCode/CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.s"
	cd /home/lzmuda/DCL/BarCode/build/src/Components/BarCode && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lzmuda/DCL/BarCode/src/Components/BarCode/BarCode_Processor.cpp -o CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.s

src/Components/BarCode/CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.o.requires:
.PHONY : src/Components/BarCode/CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.o.requires

src/Components/BarCode/CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.o.provides: src/Components/BarCode/CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.o.requires
	$(MAKE) -f src/Components/BarCode/CMakeFiles/procBarCode.dir/build.make src/Components/BarCode/CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.o.provides.build
.PHONY : src/Components/BarCode/CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.o.provides

src/Components/BarCode/CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.o.provides.build: src/Components/BarCode/CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.o

# Object files for target procBarCode
procBarCode_OBJECTS = \
"CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.o"

# External object files for target procBarCode
procBarCode_EXTERNAL_OBJECTS =

src/Components/BarCode/libprocBarCode.so: src/Components/BarCode/CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.o
src/Components/BarCode/libprocBarCode.so: src/Components/BarCode/CMakeFiles/procBarCode.dir/build.make
src/Components/BarCode/libprocBarCode.so: /usr/local/lib/libopencv_calib3d.so
src/Components/BarCode/libprocBarCode.so: /usr/local/lib/libopencv_contrib.so
src/Components/BarCode/libprocBarCode.so: /usr/local/lib/libopencv_core.so
src/Components/BarCode/libprocBarCode.so: /usr/local/lib/libopencv_features2d.so
src/Components/BarCode/libprocBarCode.so: /usr/local/lib/libopencv_flann.so
src/Components/BarCode/libprocBarCode.so: /usr/local/lib/libopencv_gpu.so
src/Components/BarCode/libprocBarCode.so: /usr/local/lib/libopencv_highgui.so
src/Components/BarCode/libprocBarCode.so: /usr/local/lib/libopencv_imgproc.so
src/Components/BarCode/libprocBarCode.so: /usr/local/lib/libopencv_legacy.so
src/Components/BarCode/libprocBarCode.so: /usr/local/lib/libopencv_ml.so
src/Components/BarCode/libprocBarCode.so: /usr/local/lib/libopencv_nonfree.so
src/Components/BarCode/libprocBarCode.so: /usr/local/lib/libopencv_objdetect.so
src/Components/BarCode/libprocBarCode.so: /usr/local/lib/libopencv_photo.so
src/Components/BarCode/libprocBarCode.so: /usr/local/lib/libopencv_stitching.so
src/Components/BarCode/libprocBarCode.so: /usr/local/lib/libopencv_superres.so
src/Components/BarCode/libprocBarCode.so: /usr/local/lib/libopencv_ts.so
src/Components/BarCode/libprocBarCode.so: /usr/local/lib/libopencv_video.so
src/Components/BarCode/libprocBarCode.so: /usr/local/lib/libopencv_videostab.so
src/Components/BarCode/libprocBarCode.so: src/Components/BarCode/CMakeFiles/procBarCode.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library libprocBarCode.so"
	cd /home/lzmuda/DCL/BarCode/build/src/Components/BarCode && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/procBarCode.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/Components/BarCode/CMakeFiles/procBarCode.dir/build: src/Components/BarCode/libprocBarCode.so
.PHONY : src/Components/BarCode/CMakeFiles/procBarCode.dir/build

src/Components/BarCode/CMakeFiles/procBarCode.dir/requires: src/Components/BarCode/CMakeFiles/procBarCode.dir/BarCode_Processor.cpp.o.requires
.PHONY : src/Components/BarCode/CMakeFiles/procBarCode.dir/requires

src/Components/BarCode/CMakeFiles/procBarCode.dir/clean:
	cd /home/lzmuda/DCL/BarCode/build/src/Components/BarCode && $(CMAKE_COMMAND) -P CMakeFiles/procBarCode.dir/cmake_clean.cmake
.PHONY : src/Components/BarCode/CMakeFiles/procBarCode.dir/clean

src/Components/BarCode/CMakeFiles/procBarCode.dir/depend:
	cd /home/lzmuda/DCL/BarCode/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lzmuda/DCL/BarCode /home/lzmuda/DCL/BarCode/src/Components/BarCode /home/lzmuda/DCL/BarCode/build /home/lzmuda/DCL/BarCode/build/src/Components/BarCode /home/lzmuda/DCL/BarCode/build/src/Components/BarCode/CMakeFiles/procBarCode.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/Components/BarCode/CMakeFiles/procBarCode.dir/depend

