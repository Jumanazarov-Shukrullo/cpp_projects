#include "../include/Player.h"
#include "../include/Bullet.h"
#include "../include/Enemy.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QDebug>

Player::Player(QGraphicsItem *parent) : QGraphicsPixmapItem(parent) {
    setPixmap(QPixmap("../images/firing.png"));
}

void Player::keyPressEvent(QKeyEvent *event) {
    if (event->key() == Qt::Key_Left) {
        if (pos().x() > pos_[1]) {
            setPos(x() - pos_[2], y());
        }
    } else if (event->key() == Qt::Key_Right) {
        if (pos().x() + pos_[pos_.size() - 3] < pos_[pos_.size() - 1]) {
            setPos(x() + pos_[2], y());
        }
    }
    if (event->key() == Qt::Key_Up) {
        if (pos().y() > pos_[0]) {
            setPos(x(), y() - pos_[2]);
        }
    } else if (event->key() == Qt::Key_Down) {
        if (pos().y() + pos_[pos_.size() - 3] < pos_[pos_.size() - 2]) {
            setPos(x(), y() + 15);
        }
    } else if (event->key() == Qt::Key_Space) {
        // create a bullet
        auto *bullet = new Bullet();
        bullet->setPos(x() + pos_[pos_.size() / 2], y() + pos_[pos_.size() - 1]);
        scene()->addItem(bullet);
    }
}

void Player::Spawn() {
    // create an enemy
    auto *enemy = new Enemy();
    scene()->addItem(enemy);
}
