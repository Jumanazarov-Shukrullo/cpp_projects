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
    int random_number = rand() % max_height_;
    setPos(random_number, default_pos_);
    if (game->score->GetScore() >= score_to_change_pos_) {
        srand(time(nullptr));
        double random_number = rand() % random_pos_;
        setPos(random_number, default_pos_);
    }
    // drew the enemy
    setPixmap(QPixmap("../images/enemy.png"));

    // connect
    auto *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(Move()));
    timer->start(50);
}

void Enemy::Move() {
    if (game->health->GetHealth() != game->min_health_value_) {
        setPos(x(), y() + increase_pos_);
        if (game->score->GetScore() >= score_to_change_pos_) {
            setPos(x(), y() + (increase_pos_++));
        }
        if (pos().y() > max_width_) {
            game->health->DecreaseHealth();
            scene()->removeItem(this);
            delete this;
            qDebug() << "item deleted";
        }
    } else {
        setPos(default_pos_, default_pos_);
    }
}
