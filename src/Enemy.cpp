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
    int random_number = rand() % pos_[pos_.size() - 1];
    setPos(random_number, pos_[0]);
    if (game->score->GetScore() >= pos_[1]) {
        srand(time(nullptr));
        double random_number = rand() % pos_[pos_.size() - 3];
        setPos(random_number, pos_[0]);
    }
    // drew the enemy
    setPixmap(QPixmap("../images/enemy.png"));

    // connect
    auto *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(Move()));
    timer->start(50);
}

void Enemy::Move() {
    if (game->health->GetHealth() != pos_[0]) {
        setPos(x(), y() + pos_[1]);
        if (game->score->GetScore() >= pos_[1]) {
            setPos(x(), y() + pos_[2]);
        }
        if (pos().y() > pos_[pos_.size() - 2]) {
            game->health->DecreaseHealth();
            scene()->removeItem(this);
            delete this;
            qDebug() << "item deleted";
        }
    } else {
        setPos(pos_[0], pos_[0]);
    }
}
