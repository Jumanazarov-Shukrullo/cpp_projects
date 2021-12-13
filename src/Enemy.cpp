#include "../include/Enemy.h"
#include "../include/Game.h"
#include <QDebug>
#include <QGraphicsScene>
#include <QList>
#include <QMainWindow>
#include <QTimer>
#include <cstdlib>
#include <ctime>

extern Game *game;

Enemy::Enemy() : QObject(), QGraphicsPixmapItem() {
    //set random position
    srand(time(nullptr));
    int random_number = rand() % 800;
    setPos(random_number, 0);
    if (game->score->GetScore() >= 5) {
        srand(time(nullptr));
        double random_number = rand() % 700;
        setPos(random_number, 0);
    }
    // drew the enemy
    setPixmap(QPixmap("../images/enemy.png"));

    // connect
    auto *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(Move()));
    timer->start(50);
}

void Enemy::Move() {
    if (game->health->GetHealth() != 0) {
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
    } else {
        setPos(0,0);
    }
}
