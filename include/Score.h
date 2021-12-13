#ifndef PLANEGAME_SCORE_H
#define PLANEGAME_SCORE_H
#include <QGraphicsTextItem>

class Score : public QGraphicsTextItem {
public:
    explicit Score(QGraphicsItem *parent = nullptr);
    void IncreaseScore();
    int GetScore();

private:
    int score_;
};
#endif//PLANEGAME_SCORE_H
