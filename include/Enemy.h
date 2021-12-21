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
    int max_height_ = 800;
    int max_width_ = 780;
    int default_pos_ = 0;
    int increase_pos_ = 5;
    int random_pos_ = 700;
    int score_to_change_pos_ = 5;
public slots:
    void Move();
};
#endif//PLANEGAME_ENEMY_H
