#ifndef PLANEGAME_GAME_H
#define PLANEGAME_GAME_H
#include "Health.h"
#include "Player.h"
#include "Score.h"
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QGraphicsView>
#include <QWidget>

class Game : public QGraphicsView {
    Q_OBJECT
public:
    explicit Game(QWidget *parent = nullptr);
    QGraphicsScene *scene;
    Player *player;
    Score *score;
    Health *health;
    void displayMainMenu();
    void gameOver();
    void DisplayGameOverWindow(QString message);
private:
    void drawPanel(int x, int y, int width, int height, QColor color, double opacity);
public slots:
    void Start();
    void RestartGame();
};
#endif//PLANEGAME_GAME_H
