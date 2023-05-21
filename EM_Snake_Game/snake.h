#ifndef SNAKE_H
#define SNAKE_H

#include <QGraphicsItemGroup>
#include <QGraphicsPixmapItem>
#include <QPropertyAnimation>

class Snake : public QObject, public QGraphicsItemGroup
{
    Q_OBJECT
    Q_PROPERTY(qreal x READ x WRITE setx)
public:
    explicit Snake();

    qreal  x() const;
    void setx(qreal newX);

signals:

private:
    QGraphicsPixmapItem *midd;
    QGraphicsPixmapItem *head;
    QPropertyAnimation *xAnimation;
    int yPos;

    qreal m_x;
};

#endif // SNAKE_H
