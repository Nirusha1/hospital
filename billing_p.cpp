#include "billing_p.h"
#include "ui_billing_p.h"

Billing_P::Billing_P(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Billing_P)
{
    ui->setupUi(this);
}

Billing_P::~Billing_P()
{
    delete ui;
}
