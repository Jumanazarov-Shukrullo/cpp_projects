#ifndef PLANEGAME_HEALTH_H
#define PLANEGAME_HEALTH_H
#include <QGraphicsTextItem>

class Health : public QGraphicsTextItem {
public:
    explicit Health(QGraphicsItem *parent = nullptr);
    void DecreaseHealth();
    int GetHealth() const;

private:
    int health_;
};
#endif//PLANEGAME_HEALTH_H
