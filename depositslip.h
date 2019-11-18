#ifndef DEPOSITSLIP_H
#define DEPOSITSLIP_H

#include <QWidget>

namespace Ui {
class DepositSlip;
}

class DepositSlip : public QWidget
{
    Q_OBJECT

public:
    explicit DepositSlip(QWidget *parent = 0);
    ~DepositSlip();

private:
    Ui::DepositSlip *ui;
};

#endif // DEPOSITSLIP_H
