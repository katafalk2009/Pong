# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/akulia/Pong

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/akulia/Pong/build

# Include any dependencies generated for this target.
include CMakeFiles/Pong.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Pong.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Pong.dir/flags.make

CMakeFiles/Pong.dir/main.cpp.o: CMakeFiles/Pong.dir/flags.make
CMakeFiles/Pong.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/akulia/Pong/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Pong.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pong.dir/main.cpp.o -c /home/akulia/Pong/main.cpp

CMakeFiles/Pong.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pong.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/akulia/Pong/main.cpp > CMakeFiles/Pong.dir/main.cpp.i

CMakeFiles/Pong.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pong.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/akulia/Pong/main.cpp -o CMakeFiles/Pong.dir/main.cpp.s

CMakeFiles/Pong.dir/ball.cpp.o: CMakeFiles/Pong.dir/flags.make
CMakeFiles/Pong.dir/ball.cpp.o: ../ball.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/akulia/Pong/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Pong.dir/ball.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pong.dir/ball.cpp.o -c /home/akulia/Pong/ball.cpp

CMakeFiles/Pong.dir/ball.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pong.dir/ball.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/akulia/Pong/ball.cpp > CMakeFiles/Pong.dir/ball.cpp.i

CMakeFiles/Pong.dir/ball.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pong.dir/ball.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/akulia/Pong/ball.cpp -o CMakeFiles/Pong.dir/ball.cpp.s

CMakeFiles/Pong.dir/enemy.cpp.o: CMakeFiles/Pong.dir/flags.make
CMakeFiles/Pong.dir/enemy.cpp.o: ../enemy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/akulia/Pong/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Pong.dir/enemy.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pong.dir/enemy.cpp.o -c /home/akulia/Pong/enemy.cpp

CMakeFiles/Pong.dir/enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pong.dir/enemy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/akulia/Pong/enemy.cpp > CMakeFiles/Pong.dir/enemy.cpp.i

CMakeFiles/Pong.dir/enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pong.dir/enemy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/akulia/Pong/enemy.cpp -o CMakeFiles/Pong.dir/enemy.cpp.s

CMakeFiles/Pong.dir/game.cpp.o: CMakeFiles/Pong.dir/flags.make
CMakeFiles/Pong.dir/game.cpp.o: ../game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/akulia/Pong/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Pong.dir/game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pong.dir/game.cpp.o -c /home/akulia/Pong/game.cpp

CMakeFiles/Pong.dir/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pong.dir/game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/akulia/Pong/game.cpp > CMakeFiles/Pong.dir/game.cpp.i

CMakeFiles/Pong.dir/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pong.dir/game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/akulia/Pong/game.cpp -o CMakeFiles/Pong.dir/game.cpp.s

CMakeFiles/Pong.dir/gameobject.cpp.o: CMakeFiles/Pong.dir/flags.make
CMakeFiles/Pong.dir/gameobject.cpp.o: ../gameobject.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/akulia/Pong/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Pong.dir/gameobject.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pong.dir/gameobject.cpp.o -c /home/akulia/Pong/gameobject.cpp

CMakeFiles/Pong.dir/gameobject.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pong.dir/gameobject.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/akulia/Pong/gameobject.cpp > CMakeFiles/Pong.dir/gameobject.cpp.i

CMakeFiles/Pong.dir/gameobject.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pong.dir/gameobject.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/akulia/Pong/gameobject.cpp -o CMakeFiles/Pong.dir/gameobject.cpp.s

CMakeFiles/Pong.dir/gameobjectfactory.cpp.o: CMakeFiles/Pong.dir/flags.make
CMakeFiles/Pong.dir/gameobjectfactory.cpp.o: ../gameobjectfactory.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/akulia/Pong/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Pong.dir/gameobjectfactory.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pong.dir/gameobjectfactory.cpp.o -c /home/akulia/Pong/gameobjectfactory.cpp

CMakeFiles/Pong.dir/gameobjectfactory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pong.dir/gameobjectfactory.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/akulia/Pong/gameobjectfactory.cpp > CMakeFiles/Pong.dir/gameobjectfactory.cpp.i

CMakeFiles/Pong.dir/gameobjectfactory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pong.dir/gameobjectfactory.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/akulia/Pong/gameobjectfactory.cpp -o CMakeFiles/Pong.dir/gameobjectfactory.cpp.s

CMakeFiles/Pong.dir/map.cpp.o: CMakeFiles/Pong.dir/flags.make
CMakeFiles/Pong.dir/map.cpp.o: ../map.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/akulia/Pong/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/Pong.dir/map.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pong.dir/map.cpp.o -c /home/akulia/Pong/map.cpp

CMakeFiles/Pong.dir/map.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pong.dir/map.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/akulia/Pong/map.cpp > CMakeFiles/Pong.dir/map.cpp.i

CMakeFiles/Pong.dir/map.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pong.dir/map.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/akulia/Pong/map.cpp -o CMakeFiles/Pong.dir/map.cpp.s

CMakeFiles/Pong.dir/player.cpp.o: CMakeFiles/Pong.dir/flags.make
CMakeFiles/Pong.dir/player.cpp.o: ../player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/akulia/Pong/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/Pong.dir/player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pong.dir/player.cpp.o -c /home/akulia/Pong/player.cpp

CMakeFiles/Pong.dir/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pong.dir/player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/akulia/Pong/player.cpp > CMakeFiles/Pong.dir/player.cpp.i

CMakeFiles/Pong.dir/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pong.dir/player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/akulia/Pong/player.cpp -o CMakeFiles/Pong.dir/player.cpp.s

CMakeFiles/Pong.dir/racket.cpp.o: CMakeFiles/Pong.dir/flags.make
CMakeFiles/Pong.dir/racket.cpp.o: ../racket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/akulia/Pong/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/Pong.dir/racket.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pong.dir/racket.cpp.o -c /home/akulia/Pong/racket.cpp

CMakeFiles/Pong.dir/racket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pong.dir/racket.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/akulia/Pong/racket.cpp > CMakeFiles/Pong.dir/racket.cpp.i

CMakeFiles/Pong.dir/racket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pong.dir/racket.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/akulia/Pong/racket.cpp -o CMakeFiles/Pong.dir/racket.cpp.s

CMakeFiles/Pong.dir/texture_manager.cpp.o: CMakeFiles/Pong.dir/flags.make
CMakeFiles/Pong.dir/texture_manager.cpp.o: ../texture_manager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/akulia/Pong/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/Pong.dir/texture_manager.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pong.dir/texture_manager.cpp.o -c /home/akulia/Pong/texture_manager.cpp

CMakeFiles/Pong.dir/texture_manager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pong.dir/texture_manager.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/akulia/Pong/texture_manager.cpp > CMakeFiles/Pong.dir/texture_manager.cpp.i

CMakeFiles/Pong.dir/texture_manager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pong.dir/texture_manager.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/akulia/Pong/texture_manager.cpp -o CMakeFiles/Pong.dir/texture_manager.cpp.s

CMakeFiles/Pong.dir/gamecount.cpp.o: CMakeFiles/Pong.dir/flags.make
CMakeFiles/Pong.dir/gamecount.cpp.o: ../gamecount.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/akulia/Pong/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/Pong.dir/gamecount.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Pong.dir/gamecount.cpp.o -c /home/akulia/Pong/gamecount.cpp

CMakeFiles/Pong.dir/gamecount.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Pong.dir/gamecount.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/akulia/Pong/gamecount.cpp > CMakeFiles/Pong.dir/gamecount.cpp.i

CMakeFiles/Pong.dir/gamecount.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Pong.dir/gamecount.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/akulia/Pong/gamecount.cpp -o CMakeFiles/Pong.dir/gamecount.cpp.s

# Object files for target Pong
Pong_OBJECTS = \
"CMakeFiles/Pong.dir/main.cpp.o" \
"CMakeFiles/Pong.dir/ball.cpp.o" \
"CMakeFiles/Pong.dir/enemy.cpp.o" \
"CMakeFiles/Pong.dir/game.cpp.o" \
"CMakeFiles/Pong.dir/gameobject.cpp.o" \
"CMakeFiles/Pong.dir/gameobjectfactory.cpp.o" \
"CMakeFiles/Pong.dir/map.cpp.o" \
"CMakeFiles/Pong.dir/player.cpp.o" \
"CMakeFiles/Pong.dir/racket.cpp.o" \
"CMakeFiles/Pong.dir/texture_manager.cpp.o" \
"CMakeFiles/Pong.dir/gamecount.cpp.o"

# External object files for target Pong
Pong_EXTERNAL_OBJECTS =

bin/Pong: CMakeFiles/Pong.dir/main.cpp.o
bin/Pong: CMakeFiles/Pong.dir/ball.cpp.o
bin/Pong: CMakeFiles/Pong.dir/enemy.cpp.o
bin/Pong: CMakeFiles/Pong.dir/game.cpp.o
bin/Pong: CMakeFiles/Pong.dir/gameobject.cpp.o
bin/Pong: CMakeFiles/Pong.dir/gameobjectfactory.cpp.o
bin/Pong: CMakeFiles/Pong.dir/map.cpp.o
bin/Pong: CMakeFiles/Pong.dir/player.cpp.o
bin/Pong: CMakeFiles/Pong.dir/racket.cpp.o
bin/Pong: CMakeFiles/Pong.dir/texture_manager.cpp.o
bin/Pong: CMakeFiles/Pong.dir/gamecount.cpp.o
bin/Pong: CMakeFiles/Pong.dir/build.make
bin/Pong: CMakeFiles/Pong.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/akulia/Pong/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable bin/Pong"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Pong.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Pong.dir/build: bin/Pong

.PHONY : CMakeFiles/Pong.dir/build

CMakeFiles/Pong.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Pong.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Pong.dir/clean

CMakeFiles/Pong.dir/depend:
	cd /home/akulia/Pong/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/akulia/Pong /home/akulia/Pong /home/akulia/Pong/build /home/akulia/Pong/build /home/akulia/Pong/build/CMakeFiles/Pong.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Pong.dir/depend

