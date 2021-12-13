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

add_executable(PlaneGame src/main.cpp src/Player.cpp
        src/Game.cpp src/Enemy.cpp src/Score.cpp
        src/Health.cpp src/Bullet.cpp
        include/Bullet.h include/Enemy.h include/Game.h
        include/Health.h include/Player.h include/Score.h include/Button.h src/Button.cpp)

target_link_libraries(PlaneGame
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

