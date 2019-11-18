#include "dischargeslip.h"
#include "ui_dischargeslip.h"

DischargeSlip::DischargeSlip(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DischargeSlip)
{
    ui->setupUi(this);
}

DischargeSlip::~DischargeSlip()
{
    delete ui;
}
