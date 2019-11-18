#include "bill_r.h"
#include "ui_bill_r.h"

Bill_R::Bill_R(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Bill_R)
{
    ui->setupUi(this);
}

Bill_R::~Bill_R()
{
    delete ui;
}
