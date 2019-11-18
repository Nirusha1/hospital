#ifndef DEPARTMENTS_H
#define DEPARTMENTS_H

#include <QMainWindow>
#include "d_painmanagement.h"

namespace Ui {
class Departments;
}

class Departments : public QMainWindow
{
    Q_OBJECT

public:
    explicit Departments(QWidget *parent = 0);
    ~Departments();

private slots:
    void on_pushButton_painManagement_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_backMainWindowr_clicked();

private:
    Ui::Departments *ui;
    D_PainManagement *d_painManagement;
};

#endif // DEPARTMENTS_H
