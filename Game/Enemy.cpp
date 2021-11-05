#include "Enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include <time.h>
#include <Game.h>
#include <QDebug>

extern Game* game;

Enemy::Enemy(): QObject(), QGraphicsRectItem(){
    //set random position
    srand(time(0));
    int random_number = rand() % 700;
    setPos(random_number,0);

    // drew the rect
    setRect(0,0,100,100);

    // connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Enemy::move(){
    // move enemy down
    setPos(x(),y()+5);
    if (game->score->getScore() >= 5) {
        setPos(x(),y()+10);
    }
    if (pos().y() > 600){
        game->health->decreaseHealth();

        scene()->removeItem(this);
        delete this;

    }
}
