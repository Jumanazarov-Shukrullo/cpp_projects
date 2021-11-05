QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Plane.pro
TEMPLATE = app


SOURCES += main.cpp \
    Bullet.cpp \
    Enemy.cpp \
    Game.cpp \
    Player.cpp \
    Player.cpp \
    Score.cpp \
    Health.cpp

HEADERS  += \
    Bullet.h \
    Enemy.h \
    Game.h \
    Player.h \
    Player.h \
    Score.h \
    Health.h

RESOURCES += \
    res.qrc
