#include "doctorschedule.h"
#include "ui_doctorschedule.h"

DoctorSchedule::DoctorSchedule(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DoctorSchedule)
{
    ui->setupUi(this);
}

DoctorSchedule::~DoctorSchedule()
{
    delete ui;
}
