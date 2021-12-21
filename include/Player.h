#ifndef PLANEGAME_PLAYER_H
#define PLANEGAME_PLAYER_H
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QObject>
#include <vector>
class Player : public QObject, public QGraphicsPixmapItem {
    Q_OBJECT
public:
    explicit Player(QGraphicsItem *parent = nullptr);
    void keyPressEvent(QKeyEvent *event) override;
public slots:
    void Spawn();

private:
    std::vector<int> pos_ = {-30, -25, 15, 50, 80, 100, 730, 925};
};

#endif//PLANEGAME_PLAYER_H
