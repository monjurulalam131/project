#include "playgame.h"
#include "ui_playgame.h"
#include "QGraphicsPixmapItem"
#include "food.h"
#include "snake.h"

PlayGame::PlayGame(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlayGame)
{
    ui->setupUi(this);

    scene = new Scene(this);
    scene->setSceneRect(-250, -300, 500, 600);
    QGraphicsPixmapItem  *pixItem = new QGraphicsPixmapItem(QPixmap(":/Images/Grass_background.jpg"));
    scene->addItem(pixItem);
    pixItem->setPos(QPointF(0, 0) - QPointF(pixItem->boundingRect().width()/2,
                                            pixItem->boundingRect().height()/2));

    scene->addLine(-400, 0, 400, 0, QPen(Qt::blue));
    scene->addLine(0, -400, 0, 400, QPen(Qt::blue));

    Food *fooditem = new Food();
    scene->addItem(fooditem);

    Snake *snake = new Snake();
    scene->addItem(snake);

    ui->graphicsView->setScene(scene);
}

PlayGame::~PlayGame()
{
    delete ui;
}


