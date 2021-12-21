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
    int starting_health_value_ = 10;
    int point_size_ = 16;
    int min_health_ = 0;

};
#endif//PLANEGAME_HEALTH_H
