cmake_minimum_required(VERSION 3.10.2)
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
        )

add_executable(PlaneGame Source/source/main.cpp Source/source/Player.cpp
        Source/source/Game.cpp Source/source/Enemy.cpp Source/source/Score.cpp
        Source/source/Health.cpp Source/source/Bullet.cpp
        Source/include/Bullet.h Source/include/Enemy.h Source/include/Game.h
        Source/include/Health.h Source/include/Player.h Source/include/Score.h Source/include/Button.h Source/source/Button.cpp)

target_link_libraries(PlaneGame
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

