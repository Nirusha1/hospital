#include "mainwindowp.h"
#include "ui_mainwindowp.h"

MainWindowP::MainWindowP(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowP)
{
    ui->setupUi(this);

}

MainWindowP::~MainWindowP()
{
    delete ui;
}

void MainWindowP::on_pushButton_clicked()
{
    medicineList = new MedicineList(this);
    medicineList->show();
}

void MainWindowP::on_pushButton_bill_clicked()
{
    billing_P = new Billing_P(this);
    billing_P->show();
}
