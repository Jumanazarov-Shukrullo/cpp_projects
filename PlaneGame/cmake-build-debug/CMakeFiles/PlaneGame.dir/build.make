# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /snap/clion/169/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/169/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shukrullo/CLionProjects/PlaneGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shukrullo/CLionProjects/PlaneGame/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PlaneGame.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/PlaneGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PlaneGame.dir/flags.make

CMakeFiles/PlaneGame.dir/PlaneGame_autogen/mocs_compilation.cpp.o: CMakeFiles/PlaneGame.dir/flags.make
CMakeFiles/PlaneGame.dir/PlaneGame_autogen/mocs_compilation.cpp.o: PlaneGame_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shukrullo/CLionProjects/PlaneGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PlaneGame.dir/PlaneGame_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PlaneGame.dir/PlaneGame_autogen/mocs_compilation.cpp.o -c /home/shukrullo/CLionProjects/PlaneGame/cmake-build-debug/PlaneGame_autogen/mocs_compilation.cpp

CMakeFiles/PlaneGame.dir/PlaneGame_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PlaneGame.dir/PlaneGame_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shukrullo/CLionProjects/PlaneGame/cmake-build-debug/PlaneGame_autogen/mocs_compilation.cpp > CMakeFiles/PlaneGame.dir/PlaneGame_autogen/mocs_compilation.cpp.i

CMakeFiles/PlaneGame.dir/PlaneGame_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PlaneGame.dir/PlaneGame_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shukrullo/CLionProjects/PlaneGame/cmake-build-debug/PlaneGame_autogen/mocs_compilation.cpp -o CMakeFiles/PlaneGame.dir/PlaneGame_autogen/mocs_compilation.cpp.s

CMakeFiles/PlaneGame.dir/src/Source/main.cpp.o: CMakeFiles/PlaneGame.dir/flags.make
CMakeFiles/PlaneGame.dir/src/Source/main.cpp.o: ../src/Source/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shukrullo/CLionProjects/PlaneGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PlaneGame.dir/src/Source/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PlaneGame.dir/src/Source/main.cpp.o -c /home/shukrullo/CLionProjects/PlaneGame/src/Source/main.cpp

CMakeFiles/PlaneGame.dir/src/Source/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PlaneGame.dir/src/Source/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shukrullo/CLionProjects/PlaneGame/src/Source/main.cpp > CMakeFiles/PlaneGame.dir/src/Source/main.cpp.i

CMakeFiles/PlaneGame.dir/src/Source/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PlaneGame.dir/src/Source/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shukrullo/CLionProjects/PlaneGame/src/Source/main.cpp -o CMakeFiles/PlaneGame.dir/src/Source/main.cpp.s

CMakeFiles/PlaneGame.dir/src/Source/Player.cpp.o: CMakeFiles/PlaneGame.dir/flags.make
CMakeFiles/PlaneGame.dir/src/Source/Player.cpp.o: ../src/Source/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shukrullo/CLionProjects/PlaneGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PlaneGame.dir/src/Source/Player.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PlaneGame.dir/src/Source/Player.cpp.o -c /home/shukrullo/CLionProjects/PlaneGame/src/Source/Player.cpp

CMakeFiles/PlaneGame.dir/src/Source/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PlaneGame.dir/src/Source/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shukrullo/CLionProjects/PlaneGame/src/Source/Player.cpp > CMakeFiles/PlaneGame.dir/src/Source/Player.cpp.i

CMakeFiles/PlaneGame.dir/src/Source/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PlaneGame.dir/src/Source/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shukrullo/CLionProjects/PlaneGame/src/Source/Player.cpp -o CMakeFiles/PlaneGame.dir/src/Source/Player.cpp.s

CMakeFiles/PlaneGame.dir/src/Source/Game.cpp.o: CMakeFiles/PlaneGame.dir/flags.make
CMakeFiles/PlaneGame.dir/src/Source/Game.cpp.o: ../src/Source/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shukrullo/CLionProjects/PlaneGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/PlaneGame.dir/src/Source/Game.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PlaneGame.dir/src/Source/Game.cpp.o -c /home/shukrullo/CLionProjects/PlaneGame/src/Source/Game.cpp

CMakeFiles/PlaneGame.dir/src/Source/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PlaneGame.dir/src/Source/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shukrullo/CLionProjects/PlaneGame/src/Source/Game.cpp > CMakeFiles/PlaneGame.dir/src/Source/Game.cpp.i

CMakeFiles/PlaneGame.dir/src/Source/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PlaneGame.dir/src/Source/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shukrullo/CLionProjects/PlaneGame/src/Source/Game.cpp -o CMakeFiles/PlaneGame.dir/src/Source/Game.cpp.s

CMakeFiles/PlaneGame.dir/src/Source/Enemy.cpp.o: CMakeFiles/PlaneGame.dir/flags.make
CMakeFiles/PlaneGame.dir/src/Source/Enemy.cpp.o: ../src/Source/Enemy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shukrullo/CLionProjects/PlaneGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/PlaneGame.dir/src/Source/Enemy.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PlaneGame.dir/src/Source/Enemy.cpp.o -c /home/shukrullo/CLionProjects/PlaneGame/src/Source/Enemy.cpp

CMakeFiles/PlaneGame.dir/src/Source/Enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PlaneGame.dir/src/Source/Enemy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shukrullo/CLionProjects/PlaneGame/src/Source/Enemy.cpp > CMakeFiles/PlaneGame.dir/src/Source/Enemy.cpp.i

CMakeFiles/PlaneGame.dir/src/Source/Enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PlaneGame.dir/src/Source/Enemy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shukrullo/CLionProjects/PlaneGame/src/Source/Enemy.cpp -o CMakeFiles/PlaneGame.dir/src/Source/Enemy.cpp.s

CMakeFiles/PlaneGame.dir/src/Source/Score.cpp.o: CMakeFiles/PlaneGame.dir/flags.make
CMakeFiles/PlaneGame.dir/src/Source/Score.cpp.o: ../src/Source/Score.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shukrullo/CLionProjects/PlaneGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/PlaneGame.dir/src/Source/Score.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PlaneGame.dir/src/Source/Score.cpp.o -c /home/shukrullo/CLionProjects/PlaneGame/src/Source/Score.cpp

CMakeFiles/PlaneGame.dir/src/Source/Score.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PlaneGame.dir/src/Source/Score.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shukrullo/CLionProjects/PlaneGame/src/Source/Score.cpp > CMakeFiles/PlaneGame.dir/src/Source/Score.cpp.i

CMakeFiles/PlaneGame.dir/src/Source/Score.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PlaneGame.dir/src/Source/Score.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shukrullo/CLionProjects/PlaneGame/src/Source/Score.cpp -o CMakeFiles/PlaneGame.dir/src/Source/Score.cpp.s

CMakeFiles/PlaneGame.dir/src/Source/Health.cpp.o: CMakeFiles/PlaneGame.dir/flags.make
CMakeFiles/PlaneGame.dir/src/Source/Health.cpp.o: ../src/Source/Health.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shukrullo/CLionProjects/PlaneGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/PlaneGame.dir/src/Source/Health.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PlaneGame.dir/src/Source/Health.cpp.o -c /home/shukrullo/CLionProjects/PlaneGame/src/Source/Health.cpp

CMakeFiles/PlaneGame.dir/src/Source/Health.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PlaneGame.dir/src/Source/Health.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shukrullo/CLionProjects/PlaneGame/src/Source/Health.cpp > CMakeFiles/PlaneGame.dir/src/Source/Health.cpp.i

CMakeFiles/PlaneGame.dir/src/Source/Health.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PlaneGame.dir/src/Source/Health.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shukrullo/CLionProjects/PlaneGame/src/Source/Health.cpp -o CMakeFiles/PlaneGame.dir/src/Source/Health.cpp.s

CMakeFiles/PlaneGame.dir/src/Source/Bullet.cpp.o: CMakeFiles/PlaneGame.dir/flags.make
CMakeFiles/PlaneGame.dir/src/Source/Bullet.cpp.o: ../src/Source/Bullet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shukrullo/CLionProjects/PlaneGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/PlaneGame.dir/src/Source/Bullet.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PlaneGame.dir/src/Source/Bullet.cpp.o -c /home/shukrullo/CLionProjects/PlaneGame/src/Source/Bullet.cpp

CMakeFiles/PlaneGame.dir/src/Source/Bullet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PlaneGame.dir/src/Source/Bullet.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shukrullo/CLionProjects/PlaneGame/src/Source/Bullet.cpp > CMakeFiles/PlaneGame.dir/src/Source/Bullet.cpp.i

CMakeFiles/PlaneGame.dir/src/Source/Bullet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PlaneGame.dir/src/Source/Bullet.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shukrullo/CLionProjects/PlaneGame/src/Source/Bullet.cpp -o CMakeFiles/PlaneGame.dir/src/Source/Bullet.cpp.s

# Object files for target PlaneGame
PlaneGame_OBJECTS = \
"CMakeFiles/PlaneGame.dir/PlaneGame_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/PlaneGame.dir/src/Source/main.cpp.o" \
"CMakeFiles/PlaneGame.dir/src/Source/Player.cpp.o" \
"CMakeFiles/PlaneGame.dir/src/Source/Game.cpp.o" \
"CMakeFiles/PlaneGame.dir/src/Source/Enemy.cpp.o" \
"CMakeFiles/PlaneGame.dir/src/Source/Score.cpp.o" \
"CMakeFiles/PlaneGame.dir/src/Source/Health.cpp.o" \
"CMakeFiles/PlaneGame.dir/src/Source/Bullet.cpp.o"

# External object files for target PlaneGame
PlaneGame_EXTERNAL_OBJECTS =

PlaneGame: CMakeFiles/PlaneGame.dir/PlaneGame_autogen/mocs_compilation.cpp.o
PlaneGame: CMakeFiles/PlaneGame.dir/src/Source/main.cpp.o
PlaneGame: CMakeFiles/PlaneGame.dir/src/Source/Player.cpp.o
PlaneGame: CMakeFiles/PlaneGame.dir/src/Source/Game.cpp.o
PlaneGame: CMakeFiles/PlaneGame.dir/src/Source/Enemy.cpp.o
PlaneGame: CMakeFiles/PlaneGame.dir/src/Source/Score.cpp.o
PlaneGame: CMakeFiles/PlaneGame.dir/src/Source/Health.cpp.o
PlaneGame: CMakeFiles/PlaneGame.dir/src/Source/Bullet.cpp.o
PlaneGame: CMakeFiles/PlaneGame.dir/build.make
PlaneGame: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.2
PlaneGame: /usr/lib/x86_64-linux-gnu/libQt5Multimedia.so.5.15.2
PlaneGame: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.2
PlaneGame: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.15.2
PlaneGame: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.2
PlaneGame: CMakeFiles/PlaneGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shukrullo/CLionProjects/PlaneGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable PlaneGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PlaneGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PlaneGame.dir/build: PlaneGame
.PHONY : CMakeFiles/PlaneGame.dir/build

CMakeFiles/PlaneGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PlaneGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PlaneGame.dir/clean

CMakeFiles/PlaneGame.dir/depend:
	cd /home/shukrullo/CLionProjects/PlaneGame/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shukrullo/CLionProjects/PlaneGame /home/shukrullo/CLionProjects/PlaneGame /home/shukrullo/CLionProjects/PlaneGame/cmake-build-debug /home/shukrullo/CLionProjects/PlaneGame/cmake-build-debug /home/shukrullo/CLionProjects/PlaneGame/cmake-build-debug/CMakeFiles/PlaneGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PlaneGame.dir/depend

