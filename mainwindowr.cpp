#include "mainwindowr.h"
#include "ui_mainwindowr.h"
#include <QPixmap>
#include<qdebug.h>



MainWindowR::MainWindowR(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowR)
{
    ui->setupUi(this);
    QPixmap img_department (":/resource/img/departments.png");
    int w = ui->label_department->width();
    int h = ui->label_department->height();
    ui->label_department->setPixmap(img_department.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap img_patientHisotry (":/resource/img/patients history.png");
    ui->label_patientHistory->setPixmap(img_patientHisotry.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap img_doctorschedule (":/resource/img/doctor schedule .png");
    ui->label_doctorSchedule->setPixmap(img_doctorschedule.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap img_beds (":/resource/img/beds.png");
    ui->label_beds->setPixmap(img_beds.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap img_dischargeSlip (":/resource/img/discharge slip.png");
    ui->label_dischargeSlip->setPixmap(img_dischargeSlip.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap img_appointment (":/resource/img/appointment.png");
    ui->label_appointmentForm->setPixmap(img_appointment.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap img_birth (":/resource/img/birth.png");
    ui->label_birthTroll->setPixmap(img_birth.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap img_bill (":/resource/img/bill.png");
    ui->label_bill->setPixmap(img_bill.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap img_death (":/resource/img/death.png");
    ui->label_deathTroll->setPixmap(img_death.scaled(w,h,Qt::KeepAspectRatio));

}

MainWindowR::~MainWindowR()
{
    delete ui;
}

void MainWindowR::on_pushButton_2_clicked()
{

    departments = new Departments(this);
    departments->show();
}

void MainWindowR::on_pushButton_patientsHistory_clicked()
{
    patientHistory = new PatientHistory(this);
    patientHistory->show();
}

void MainWindowR::on_pushButton_doctorSchedule_clicked()
{
    doctorSchedule = new DoctorSchedule(this);
    doctorSchedule->show();
}

void MainWindowR::on_pushButton_6_clicked()
{
    beds = new Beds(this);
    beds->show();
}

void MainWindowR::on_pushButton_dischargeSlip_clicked()
{
    dischargeSlip = new DischargeSlip(this);
    dischargeSlip->show();
}

void MainWindowR::on_pushButton_birthTroll_clicked()
{
    birthToll = new BirthToll(this);
    birthToll->show();
}

void MainWindowR::on_pushButton_deathTroll_clicked()
{
    deathToll = new DeathToll(this);
    deathToll->show();
}

void MainWindowR::on_pushButton_bill_clicked()
{
    bill_R = new Bill_R(this);
    bill_R->show();
}

void MainWindowR::on_pushButton_appointmentForm_clicked()
{
    appointmentForm = new AppointmentForm(this);
    appointmentForm->show();
}
