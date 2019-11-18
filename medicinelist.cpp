#include "medicinelist.h"
#include "ui_medicinelist.h"

MedicineList::MedicineList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MedicineList)
{
    ui->setupUi(this);
}

MedicineList::~MedicineList()
{
    delete ui;
}
