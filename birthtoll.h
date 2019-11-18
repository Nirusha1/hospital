#ifndef BIRTHTOLL_H
#define BIRTHTOLL_H

#include <QMainWindow>

namespace Ui {
class BirthToll;
}

class BirthToll : public QMainWindow
{
    Q_OBJECT

public:
    explicit BirthToll(QWidget *parent = 0);
    ~BirthToll();

private:
    Ui::BirthToll *ui;
};

#endif // BIRTHTOLL_H
