#ifndef BILL_R_H
#define BILL_R_H

#include <QMainWindow>

namespace Ui {
class Bill_R;
}

class Bill_R : public QMainWindow
{
    Q_OBJECT

public:
    explicit Bill_R(QWidget *parent = 0);
    ~Bill_R();

private:
    Ui::Bill_R *ui;
};

#endif // BILL_R_H
