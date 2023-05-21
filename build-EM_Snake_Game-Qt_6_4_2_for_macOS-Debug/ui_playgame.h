/********************************************************************************
** Form generated from reading UI file 'playgame.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYGAME_H
#define UI_PLAYGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_PlayGame
{
public:
    QGridLayout *gridLayout_2;
    QGraphicsView *graphicsView;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *PlayGame)
    {
        if (PlayGame->objectName().isEmpty())
            PlayGame->setObjectName("PlayGame");
        PlayGame->resize(957, 645);
        gridLayout_2 = new QGridLayout(PlayGame);
        gridLayout_2->setObjectName("gridLayout_2");
        graphicsView = new QGraphicsView(PlayGame);
        graphicsView->setObjectName("graphicsView");

        gridLayout_2->addWidget(graphicsView, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(PlayGame);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 70));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        label_2 = new QLabel(PlayGame);
        label_2->setObjectName("label_2");
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(0, 70));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        pushButton = new QPushButton(PlayGame);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(0, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);


        retranslateUi(PlayGame);

        QMetaObject::connectSlotsByName(PlayGame);
    } // setupUi

    void retranslateUi(QDialog *PlayGame)
    {
        PlayGame->setWindowTitle(QCoreApplication::translate("PlayGame", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("PlayGame", "<html><head/><body><p>High </p><p>Score: 0</p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        label_2->setToolTip(QCoreApplication::translate("PlayGame", "<html><head/><body><p>Current </p><p>Score: 0</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_2->setText(QCoreApplication::translate("PlayGame", "<html><head/><body><p>Current </p><p>Score: 0</p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("PlayGame", "Manu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlayGame: public Ui_PlayGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYGAME_H
