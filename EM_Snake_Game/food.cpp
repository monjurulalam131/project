#include "food.h"

Food::Food() :
    apple(new QGraphicsPixmapItem(QPixmap(":/Images/Apple.png"))),
    banana(new QGraphicsPixmapItem(QPixmap(":/Images/Banana.png"))),
    cherry(new QGraphicsPixmapItem(QPixmap(":/Images/Cherry.png")))

{
    apple->setPos(-200, 50);
    banana->setPos(-100, 100);
    apple->setPos(-300, -50);

    addToGroup(apple);
    addToGroup(banana);
    addToGroup(cherry);
}
