#ifndef PLANEGAME_BULLET_H
#define PLANEGAME_BULLET_H

#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QObject>

class Bullet : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    explicit Bullet(QGraphicsItem *parent = nullptr);
public slots:
    void Move();
};

#endif//PLANEGAME_BULLET_H
