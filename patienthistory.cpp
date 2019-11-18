#include "patienthistory.h"
#include "ui_patienthistory.h"

PatientHistory::PatientHistory(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PatientHistory)
{
    ui->setupUi(this);
}

PatientHistory::~PatientHistory()
{
    delete ui;
}
