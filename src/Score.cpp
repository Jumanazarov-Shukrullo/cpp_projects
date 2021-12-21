#include "../include/Score.h"
#include <QFont>
#include <QGraphicsTextItem>

Score::Score(QGraphicsItem *parent) : QGraphicsTextItem(parent) {
    score_ = default_score_;
    setPlainText("Score: " + QString::number(score_));
    setDefaultTextColor(Qt::yellow);
    setFont(QFont("times", point_size_));
}

void Score::IncreaseScore() {
    score_++;
    setPlainText("Score: " + QString::number(score_));
}

int Score::GetScore() const {
    return score_;
}