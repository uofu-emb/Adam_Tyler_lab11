# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.30.1/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.30.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/tyler/Documents/fall2024/ECE5785-adv_emb/lab11/lab113/Adam_Tyler_lab11

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tyler/Documents/fall2024/ECE5785-adv_emb/lab11/lab113/Adam_Tyler_lab11/build

# Utility rule file for flash_server.

# Include any custom commands dependencies for this target.
include server/CMakeFiles/flash_server.dir/compiler_depend.make

# Include the progress variables for this target.
include server/CMakeFiles/flash_server.dir/progress.make

server/CMakeFiles/flash_server: server/lab11_server.elf
	cd /Users/tyler/Documents/fall2024/ECE5785-adv_emb/lab11/lab113/Adam_Tyler_lab11/build/server && /Users/tyler/.pico-sdk/picotool/2.0.0/picotool/picotool load -f /Users/tyler/Documents/fall2024/ECE5785-adv_emb/lab11/lab113/Adam_Tyler_lab11/build/server/lab11_server.elf

flash_server: server/CMakeFiles/flash_server
flash_server: server/CMakeFiles/flash_server.dir/build.make
.PHONY : flash_server

# Rule to build all files generated by this target.
server/CMakeFiles/flash_server.dir/build: flash_server
.PHONY : server/CMakeFiles/flash_server.dir/build

server/CMakeFiles/flash_server.dir/clean:
	cd /Users/tyler/Documents/fall2024/ECE5785-adv_emb/lab11/lab113/Adam_Tyler_lab11/build/server && $(CMAKE_COMMAND) -P CMakeFiles/flash_server.dir/cmake_clean.cmake
.PHONY : server/CMakeFiles/flash_server.dir/clean

server/CMakeFiles/flash_server.dir/depend:
	cd /Users/tyler/Documents/fall2024/ECE5785-adv_emb/lab11/lab113/Adam_Tyler_lab11/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tyler/Documents/fall2024/ECE5785-adv_emb/lab11/lab113/Adam_Tyler_lab11 /Users/tyler/Documents/fall2024/ECE5785-adv_emb/lab11/lab113/Adam_Tyler_lab11/server /Users/tyler/Documents/fall2024/ECE5785-adv_emb/lab11/lab113/Adam_Tyler_lab11/build /Users/tyler/Documents/fall2024/ECE5785-adv_emb/lab11/lab113/Adam_Tyler_lab11/build/server /Users/tyler/Documents/fall2024/ECE5785-adv_emb/lab11/lab113/Adam_Tyler_lab11/build/server/CMakeFiles/flash_server.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : server/CMakeFiles/flash_server.dir/depend

