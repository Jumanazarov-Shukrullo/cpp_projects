#include "../include/Score.h"
#include <QFont>
#include <QGraphicsTextItem>

Score::Score(QGraphicsItem *parent) : QGraphicsTextItem(parent) {
    score_ = 0;
    setPlainText("Score: " + QString::number(score_));
    setDefaultTextColor(Qt::yellow);
    setFont(QFont("times", 16));
}

void Score::IncreaseScore() {
    score_++;
    setPlainText("Score: " + QString::number(score_));
}

int Score::GetScore() {
    return score_;
}