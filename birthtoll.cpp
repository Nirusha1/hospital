#include "birthtoll.h"
#include "ui_birthtoll.h"

BirthToll::BirthToll(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BirthToll)
{
    ui->setupUi(this);
}

BirthToll::~BirthToll()
{
    delete ui;
}
