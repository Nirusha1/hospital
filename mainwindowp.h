#ifndef MAINWINDOWP_H
#define MAINWINDOWP_H

#include <QMainWindow>
#include <medicinelist.h>
#include <billing_p.h>

namespace Ui {
class MainWindowP;
}

class MainWindowP : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindowP(QWidget *parent = 0);
    ~MainWindowP();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_bill_clicked();

private:
    Ui::MainWindowP *ui;
    MedicineList *medicineList;
    Billing_P *billing_P;
};

#endif // MAINWINDOWP_H
