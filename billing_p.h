#ifndef BILLING_P_H
#define BILLING_P_H

#include <QMainWindow>

namespace Ui {
class Billing_P;
}

class Billing_P : public QMainWindow
{
    Q_OBJECT

public:
    explicit Billing_P(QWidget *parent = 0);
    ~Billing_P();

private:
    Ui::Billing_P *ui;
};

#endif // BILLING_P_H
