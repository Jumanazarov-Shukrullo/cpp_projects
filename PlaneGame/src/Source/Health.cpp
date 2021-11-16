#include "../Headers/Health.h"
#include <QFont>

Health::Health(QGraphicsItem *parent) : QGraphicsTextItem(parent) {
    health_ = 10;
    setPlainText("Health: " + QString::number(health_));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times", 16));
}

void Health::DecreaseHealth() {
    health_--;
    setPlainText("Health: " + QString::number(health_));
}

int Health::GetHealth() {
    return health_;
}