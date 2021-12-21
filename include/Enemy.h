#ifndef PLANEGAME_ENEMY_H
#define PLANEGAME_ENEMY_H
#include <QGraphicsPixmapItem>
#include <QObject>
#include <vector>

class Enemy : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    Enemy();

private:
    std::vector<int> pos_ = {0, 5, 6, 700, 780, 800};
public slots:
    void Move();
};
#endif//PLANEGAME_ENEMY_H
