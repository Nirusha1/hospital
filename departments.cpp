#include "departments.h"
#include "ui_departments.h"

Departments::Departments(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Departments)
{
    ui->setupUi(this);
}

Departments::~Departments()
{
    delete ui;
}

void Departments::on_pushButton_painManagement_clicked()
{
    hide();
    d_painManagement = new D_PainManagement(this);
    d_painManagement->show();
}
