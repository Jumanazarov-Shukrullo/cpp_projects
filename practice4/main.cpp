#include <QApplication>
#include <QGraphicsScene>
#include "MyRect.h"
#include <QGraphicsView>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene *scene = new QGraphicsScene();

    MyRect *rect = new MyRect();
    rect->setRect(0,0,100,100);
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();
    scene->addItem(rect);

    QGraphicsView *v = new QGraphicsView(scene);
    v->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    v->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);


    v->show();
    v->setFixedSize(800, 600);
    scene->setSceneRect(0,0,800,600);
    rect->setPos(v->width() / 2, v->height() - rect->rect().height());

    return a.exec();
}
