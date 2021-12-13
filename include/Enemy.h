#ifndef PLANEGAME_ENEMY_H
#define PLANEGAME_ENEMY_H
#include <QGraphicsPixmapItem>
#include <QObject>

class Enemy : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    Enemy();
public slots:
    void Move();
};
#endif//PLANEGAME_ENEMY_H
