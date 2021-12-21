#include "../include/Health.h"
#include "../include/Game.h"
#include <QFont>
#include <QGraphicsTextItem>

extern Game *game;

Health::Health(QGraphicsItem *parent) : QGraphicsTextItem(parent) {
    health_ = starting_health_value_;
    setPlainText("Health: " + QString::number(health_));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times", point_size_));
}

void Health::DecreaseHealth() {
    health_--;
    setPlainText("Health: " + QString::number(health_));
    if (health_ == min_health_) {
        game->GameOver();
    }
}

int Health::GetHealth() const {
    return health_;
}