#ifndef PLANEGAME_BUTTON_H
#define PLANEGAME_BUTTON_H
#include <QGraphicsRectItem>
#include <QGraphicsSceneMouseEvent>
#include <vector>

class Button : public QObject, public QGraphicsRectItem {
    Q_OBJECT
public:
    // constructors
    explicit Button(const QString &name, QGraphicsItem *parent = nullptr);

    // public methods (events)
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event) override;
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event) override;
signals:
    void clicked();

private:
    QGraphicsTextItem *text_;
    std::vector<int> rect_ = {0, 50, 200};
};


#endif//PLANEGAME_BUTTON_H
