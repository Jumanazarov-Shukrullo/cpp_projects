cmake_minimum_required(VERSION 3.20)
project(PlaneGame)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/home/shukrullo/c++_projects/Qt")

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        Multimedia
        REQUIRED)

add_executable(PlaneGame src/Source/main.cpp src/Source/Player.cpp
        src/Source/Game.cpp src/Source/Enemy.cpp src/Source/Score.cpp
        src/Source/Health.cpp src/Source/Bullet.cpp
        src/Headers/Bullet.h src/Headers/Enemy.h src/Headers/Game.h
        src/Headers/Health.h src/Headers/Player.h src/Headers/Score.h)

target_link_libraries(PlaneGame
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::Multimedia
        )

