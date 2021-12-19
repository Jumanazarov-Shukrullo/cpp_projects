cmake_minimum_required(VERSION 3.10.2)
project(PlaneGame)

# Tell CMake to run moc when necessary:
set(CMAKE_CXX_STANDARD 11)
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
        include/Health.h include/Player.h include/Score.h include/Button.h src/Button.cpp Test/test.h)

target_link_libraries(PlaneGame
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )
include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

target_link_libraries(
        PlaneGame
        gtest_main
)

include(GoogleTest)
#gtest_discover_tests(PlaneGame)


