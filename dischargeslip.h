#ifndef DISCHARGESLIP_H
#define DISCHARGESLIP_H

#include <QMainWindow>

namespace Ui {
class DischargeSlip;
}

class DischargeSlip : public QMainWindow
{
    Q_OBJECT

public:
    explicit DischargeSlip(QWidget *parent = 0);
    ~DischargeSlip();

private:
    Ui::DischargeSlip *ui;
};

#endif // DISCHARGESLIP_H
