#ifndef PATIENTHISTORY_H
#define PATIENTHISTORY_H

#include <QMainWindow>

namespace Ui {
class PatientHistory;
}

class PatientHistory : public QMainWindow
{
    Q_OBJECT

public:
    explicit PatientHistory(QWidget *parent = 0);
    ~PatientHistory();

private:
    Ui::PatientHistory *ui;
};

#endif // PATIENTHISTORY_H
