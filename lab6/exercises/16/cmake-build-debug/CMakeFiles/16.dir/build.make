# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "A:\clion\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "A:\clion\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab6\exercises\16"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab6\exercises\16\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/16.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/16.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/16.dir/flags.make

CMakeFiles/16.dir/main.c.obj: CMakeFiles/16.dir/flags.make
CMakeFiles/16.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab6\exercises\16\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/16.dir/main.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\16.dir\main.c.obj -c "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab6\exercises\16\main.c"

CMakeFiles/16.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/16.dir/main.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab6\exercises\16\main.c" > CMakeFiles\16.dir\main.c.i

CMakeFiles/16.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/16.dir/main.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab6\exercises\16\main.c" -o CMakeFiles\16.dir\main.c.s

# Object files for target 16
16_OBJECTS = \
"CMakeFiles/16.dir/main.c.obj"

# External object files for target 16
16_EXTERNAL_OBJECTS =

16.exe: CMakeFiles/16.dir/main.c.obj
16.exe: CMakeFiles/16.dir/build.make
16.exe: CMakeFiles/16.dir/linklibs.rsp
16.exe: CMakeFiles/16.dir/objects1.rsp
16.exe: CMakeFiles/16.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab6\exercises\16\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 16.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\16.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/16.dir/build: 16.exe

.PHONY : CMakeFiles/16.dir/build

CMakeFiles/16.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\16.dir\cmake_clean.cmake
.PHONY : CMakeFiles/16.dir/clean

CMakeFiles/16.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab6\exercises\16" "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab6\exercises\16" "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab6\exercises\16\cmake-build-debug" "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab6\exercises\16\cmake-build-debug" "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab6\exercises\16\cmake-build-debug\CMakeFiles\16.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/16.dir/depend

