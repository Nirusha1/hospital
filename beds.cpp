#include "beds.h"
#include "ui_beds.h"

Beds::Beds(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Beds)
{
    ui->setupUi(this);
}

Beds::~Beds()
{
    delete ui;
}
