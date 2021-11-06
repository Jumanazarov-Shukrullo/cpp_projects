#include "Player.h"
#include <QGraphicsScene>
#include <QKeyEvent>
#include "Bullet.h"
#include "Enemy.h"

#include <QDebug>
Player::Player(QGraphicsItem *parent): QGraphicsPixmapItem(parent)
{
    setPixmap(QPixmap(":/images/firing.png"));
}

void Player::keyPressEvent(QKeyEvent *event){
    if (event->key() == Qt::Key_Left){
        if (pos().x() > -25)
        setPos(x()-15,y());
    }
    else if (event->key() == Qt::Key_Right){
        if (pos().x() + 100 < 925)
        setPos(x()+15,y());
    }
    if (event->key() == Qt::Key_Up){
        if (pos().y() > -30)
        setPos(x(),y() - 15);
    }
    else if (event->key() == Qt::Key_Down){
        if (pos().y() + 100 < 730)
        setPos(x(),y() + 15);
    }
    else if (event->key() == Qt::Key_Space){
        // create a bullet
        Bullet * bullet = new Bullet();
        bullet->setPos(x() + 80,y() + 50);
        scene()->addItem(bullet);
    }
}

void Player::spawn(){
    // create an enemy
    Enemy * enemy = new Enemy();
    scene()->addItem(enemy);
}
