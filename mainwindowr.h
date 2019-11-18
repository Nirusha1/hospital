#ifndef MAINWINDOWR_H
#define MAINWINDOWR_H

#include <QMainWindow>
#include "departments.h"
#include "patienthistory.h"
#include "doctorschedule.h"
#include "beds.h"
#include "dischargeslip.h"
#include "birthtoll.h"
#include "deathtoll.h"
#include "bill_r.h"
#include "appointmentform.h"

namespace Ui {
class MainWindowR;
}

class MainWindowR : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowR(QWidget *parent = 0);
    ~MainWindowR();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_doctorSchedule_clicked();

    void on_pushButton_patientsHistory_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_depositSlip_clicked();

    void on_pushButton_dischargeSlip_clicked();

    void on_pushButton_birthTroll_clicked();

    void on_pushButton_deathTroll_clicked();

    void on_pushButton_bill_clicked();

    void on_pushButton_appointmentForm_clicked();

private:
    Ui::MainWindowR *ui;
    Departments *departments;
    PatientHistory *patientHistory;
    DoctorSchedule *doctorSchedule;
    Beds *beds;
    DischargeSlip *dischargeSlip;
    BirthToll *birthToll;
    DeathToll *deathToll;
    Bill_R *bill_R;
    AppointmentForm *appointmentForm;
};

#endif // MAINWINDOWR_H
