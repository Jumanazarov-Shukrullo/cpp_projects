#include "../Headers/Enemy.h"
#include "../Headers/Game.h"
#include <QDebug>
#include <QGraphicsScene>
#include <QList>
#include <QTimer>
#include <stdlib.h>
#include <time.h>

extern Game *game;

Enemy::Enemy() : QObject(), QGraphicsPixmapItem() {
    //set random position
    srand(time(nullptr));
    int random_number = rand() % 800;
    setPos(random_number, 0);
    if (game->score->GetScore() >= 5) {
        srand(time(nullptr));
        int random_number = rand() % 700;
        setPos(random_number, 0);
    }
    // drew the rect
    setPixmap(QPixmap("../src/Images/enemy.png"));

    // connect
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(Move()));

    timer->start(50);
}

void Enemy::Move() {
    // move enemy down
    setPos(x(), y() + 5);
    if (game->score->GetScore() >= 5) {
        setPos(x(), y() + 6);
    }
    if (pos().y() > 780) {
        game->health->DecreaseHealth();

        scene()->removeItem(this);
        delete this;
        qDebug() << "item deleted";
    }
}
