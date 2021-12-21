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
    Player *player{};
    Score *score{};
    Health *health{};
    void DisplayMainMenu();
    void GameOver();
    void DisplayGameOverWindow(const QString &message);
    std::vector<int> vector_ = {1000, 800, 640, 550, 50, 25};
    std::vector<int> draw_ = {1024, 768, 312, 184, 400, 410, 300, 375, 460, 225};
    std::vector<int> display_ = {150, 275, 350};

private:
    void DrawPanel(int x, int y, int width, int height, const QColor &color, double opacity) const;

public slots:
    void Start();
    void RestartGame();
};
#endif//PLANEGAME_GAME_H
