#ifndef PLANEGAME_SCORE_H
#define PLANEGAME_SCORE_H
#include <QGraphicsTextItem>

class Score : public QGraphicsTextItem {
public:
    explicit Score(QGraphicsItem *parent = nullptr);
    void IncreaseScore();
    int GetScore() const;

private:
    int score_;
    int point_size_ = 16;
    int default_score_ = 0;
};
#endif//PLANEGAME_SCORE_H
