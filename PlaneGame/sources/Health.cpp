#include "Health.h"
#include <QFont>

Health::Health(QGraphicsItem *parent) : QGraphicsTextItem(parent)
{
    health = 10;
    setPlainText("Health: " + QString::number(health));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times", 16));

}

void Health::decreaseHealth()
{
    health--;
    setPlainText("Health: " + QString::number(health));
}

int Health::getHealth()
{
    return health;
}
