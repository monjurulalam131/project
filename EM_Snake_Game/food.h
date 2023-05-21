#ifndef FOOD_H
#define FOOD_H

#include <QGraphicsItem>
#include <QGraphicsPixmapItem>

class Food : public QObject, public QGraphicsItemGroup
{
    Q_OBJECT
public:
    explicit Food();

signals:

private:
    QGraphicsPixmapItem *apple;
    QGraphicsPixmapItem *banana;
    QGraphicsPixmapItem *cherry;
};

#endif // FOOD_H
