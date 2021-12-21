#include "../include/Button.h"
#include <QBrush>
#include <QGraphicsTextItem>

Button::Button(const QString &name, QGraphicsItem *parent) : QGraphicsRectItem(parent) {
    // draw the rect
    setRect(rect_[0], rect_[0], rect_[rect_.size() - 1], rect_[1]);
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::gray);
    setBrush(brush);

    // draw the text
    text_ = new QGraphicsTextItem(name, this);
    double x_pos = rect().width() / 2 - text_->boundingRect().width() / 2;
    double y_pos = rect().height() / 2 - text_->boundingRect().height() / 2;
    text_->setPos(x_pos, y_pos);

    // allow responding to hover events
    setAcceptHoverEvents(true);
}

void Button::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    emit clicked();
}

void Button::hoverEnterEvent(QGraphicsSceneHoverEvent *event) {
    // change color to dark gray
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::darkGray);
    setBrush(brush);
}

void Button::hoverLeaveEvent(QGraphicsSceneHoverEvent *event) {
    // change color to  gray
    QBrush brush;
    brush.setStyle(Qt::SolidPattern);
    brush.setColor(Qt::gray);
    setBrush(brush);
}
