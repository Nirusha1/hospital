#ifndef DEATHTOLL_H
#define DEATHTOLL_H

#include <QMainWindow>

namespace Ui {
class DeathToll;
}

class DeathToll : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeathToll(QWidget *parent = 0);
    ~DeathToll();

private:
    Ui::DeathToll *ui;
};

#endif // DEATHTOLL_H
