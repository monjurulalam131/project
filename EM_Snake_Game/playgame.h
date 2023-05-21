#ifndef PLAYGAME_H
#define PLAYGAME_H

#include <QDialog>
#include <scene.h>

namespace Ui {
class PlayGame;
}

class PlayGame : public QDialog
{
    Q_OBJECT

public:
    explicit PlayGame(QWidget *parent = nullptr);
    ~PlayGame();

/*public slots:
    void show_window();
*/
private slots:

private:
    Ui::PlayGame *ui;
    Scene *scene;
};

#endif // PLAYGAME_H
