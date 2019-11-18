#include "d_painmanagement.h"
#include "ui_d_painmanagement.h"

D_PainManagement::D_PainManagement(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::D_PainManagement)
{
    ui->setupUi(this);
}

D_PainManagement::~D_PainManagement()
{
    delete ui;
}
