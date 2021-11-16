#ifndef PLANEGAME_GAME_H
#define PLANEGAME_GAME_H
#include "Health.h"
#include "Player.h"
#include "Score.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QWidget>

class Game : public QGraphicsView {
public:
    explicit Game(__attribute__((unused)) QWidget *parent = nullptr);

    QGraphicsScene *scene;
    Player *player;
    Score *score;
    Health *health;
};
#endif//PLANEGAME_GAME_H
