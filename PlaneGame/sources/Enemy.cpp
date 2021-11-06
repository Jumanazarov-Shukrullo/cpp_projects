#include "Enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include <time.h>
#include <Game.h>
#include <QDebug>

extern Game* game;

Enemy::Enemy(): QObject(), QGraphicsPixmapItem(){
    //set random position
    srand(time(0));
    int random_number = rand() % 800;
    setPos(random_number,0);
    if (game->score->getScore() >= 5) {
        srand(time(0));
        int random_number = rand() % 700;
        setPos(random_number,0);
    }
    // drew the rect
    setPixmap(QPixmap(":/images/enemy.png"));

    // connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);
}

void Enemy::move(){
    // move enemy down
    setPos(x(),y()+5);
    if (game->score->getScore() >= 5) {
        setPos(x(),y() + 6);
    }
    if (pos().y() > 780){
        game->health->decreaseHealth();

        scene()->removeItem(this);
        delete this;
        qDebug() << "item deleted";
    }
}
