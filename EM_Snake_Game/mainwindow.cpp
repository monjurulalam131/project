#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
//#include "playgame.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //PlayGame *playgame = new PlayGame;
    //QObject::connect(ui->pushButton, &QPushButton::clicked, &PlayGame::show_window);
    QPixmap snakeimg(":/Images/Snake_background.png");
    ui->snake_img->setPixmap(snakeimg);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    close();
    //hide();
    playgame = new PlayGame(this);
    playgame->show();
    //QMessageBox::about(this, "", "This game is loding...");
    /*GameWin playGame;
    playGame.StModeal*/
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->label_2->setText("High Scour is 0") ;
}


void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "", "Do you want to quit?", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QApplication::quit();
    }
    else
    {
        QMessageBox::about(this, "", "Thenk you!");
    }
}

