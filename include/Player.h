#ifndef PLANEGAME_PLAYER_H
#define PLANEGAME_PLAYER_H
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QObject>

class Player : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    explicit Player(QGraphicsItem *parent = nullptr);
    void keyPressEvent(QKeyEvent *event) override;
public slots:
    void Spawn();
};

#endif//PLANEGAME_PLAYER_H
