#include "../include/Game.h"
#include <QApplication>
#include <QTimer>
#include "../Test/test.h"

Game *game;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    game = new Game();
    game->show();
    game->DisplayMainMenu();
    QApplication::exec();
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}