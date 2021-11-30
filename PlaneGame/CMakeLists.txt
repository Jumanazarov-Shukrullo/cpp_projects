cmake_minimum_required(VERSION 3.18.4)
project(PlaneGame)

# Tell CMake to run moc when necessary:
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
# As moc files are generated in the binary dir, tell CMake
# to always look for includes there:
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Widgets finds its own dependencies (QtGui and QtCore).
find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED
        Multimedia)

add_executable(PlaneGame src/Source/main.cpp src/Source/Player.cpp
        src/Source/Game.cpp src/Source/Enemy.cpp src/Source/Score.cpp
        src/Source/Health.cpp src/Source/Bullet.cpp
        src/Headers/Bullet.h src/Headers/Enemy.h src/Headers/Game.h
        src/Headers/Health.h src/Headers/Player.h src/Headers/Score.h src/Headers/Button.h src/Source/Button.cpp)

target_link_libraries(PlaneGame
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::Multimedia
        )

