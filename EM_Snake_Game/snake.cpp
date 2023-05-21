#include "snake.h"
#include "QRandomGenerator"
#include "QDebug"

Snake::Snake() :
    midd(new QGraphicsPixmapItem(QPixmap(":/Images/Snake_midd.png"))),
    head(new QGraphicsPixmapItem(QPixmap(":/Images/Snake_head.png")))
{
    midd->setPos(head->boundingRect().width() - 140,
                 - head->boundingRect().height()/2);

    head->setPos(0, - head->boundingRect().height()/2);

    //yPos = QRandomGenerator::global()->bounded(150);
    int xRandomizer = QRandomGenerator::global()->bounded(200);

    xAnimation = new QPropertyAnimation(this, "x", this);
    xAnimation->setStartValue(-300 - xRandomizer);
    xAnimation->setEndValue(0);

    xAnimation->setEasingCurve(QEasingCurve::Linear);
    xAnimation->setDuration(1500);

    xAnimation->start();

    addToGroup(midd);
    addToGroup(head);
}

qreal Snake::x() const
{
    return m_x;
}

void Snake::setx(qreal newX)
{
    qDebug() << "Snake postion " << newX;
    m_x = newX;
    setPos(QPointF(0, 0) + QPointF(newX, 0));
}
