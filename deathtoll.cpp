#include "deathtoll.h"
#include "ui_deathtoll.h"

DeathToll::DeathToll(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DeathToll)
{
    ui->setupUi(this);
}

DeathToll::~DeathToll()
{
    delete ui;
}
