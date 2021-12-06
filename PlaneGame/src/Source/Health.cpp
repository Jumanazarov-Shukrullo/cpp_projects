#include "../Headers/Health.h"
#include "../Headers/Game.h"
#include <QFont>
#include <QGraphicsTextItem>

extern Game *game;

Health::Health(QGraphicsItem *parent) : QGraphicsTextItem(parent) {
    health_ = 10;
    setPlainText("Health: " + QString::number(health_));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times", 16));
}

void Health::DecreaseHealth() {
    health_--;
    setPlainText("Health: " + QString::number(health_));
    if (health_ == 0) {
        game->gameOver();
    }
}

int Health::GetHealth() {
    return health_;
}