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
CMAKE_SOURCE_DIR = "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab5-switch cases-exercises\exercise2-4"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab5-switch cases-exercises\exercise2-4\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/exercise2_4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exercise2_4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exercise2_4.dir/flags.make

CMakeFiles/exercise2_4.dir/main.c.obj: CMakeFiles/exercise2_4.dir/flags.make
CMakeFiles/exercise2_4.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab5-switch cases-exercises\exercise2-4\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/exercise2_4.dir/main.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\exercise2_4.dir\main.c.obj -c "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab5-switch cases-exercises\exercise2-4\main.c"

CMakeFiles/exercise2_4.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/exercise2_4.dir/main.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab5-switch cases-exercises\exercise2-4\main.c" > CMakeFiles\exercise2_4.dir\main.c.i

CMakeFiles/exercise2_4.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/exercise2_4.dir/main.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab5-switch cases-exercises\exercise2-4\main.c" -o CMakeFiles\exercise2_4.dir\main.c.s

# Object files for target exercise2_4
exercise2_4_OBJECTS = \
"CMakeFiles/exercise2_4.dir/main.c.obj"

# External object files for target exercise2_4
exercise2_4_EXTERNAL_OBJECTS =

exercise2_4.exe: CMakeFiles/exercise2_4.dir/main.c.obj
exercise2_4.exe: CMakeFiles/exercise2_4.dir/build.make
exercise2_4.exe: CMakeFiles/exercise2_4.dir/linklibs.rsp
exercise2_4.exe: CMakeFiles/exercise2_4.dir/objects1.rsp
exercise2_4.exe: CMakeFiles/exercise2_4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab5-switch cases-exercises\exercise2-4\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable exercise2_4.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\exercise2_4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exercise2_4.dir/build: exercise2_4.exe

.PHONY : CMakeFiles/exercise2_4.dir/build

CMakeFiles/exercise2_4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\exercise2_4.dir\cmake_clean.cmake
.PHONY : CMakeFiles/exercise2_4.dir/clean

CMakeFiles/exercise2_4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab5-switch cases-exercises\exercise2-4" "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab5-switch cases-exercises\exercise2-4" "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab5-switch cases-exercises\exercise2-4\cmake-build-debug" "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab5-switch cases-exercises\exercise2-4\cmake-build-debug" "D:\ACADEMIC 1ST SEM-1ST YEAR\Programming Fundamentals\C projects\lab5-switch cases-exercises\exercise2-4\cmake-build-debug\CMakeFiles\exercise2_4.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/exercise2_4.dir/depend

