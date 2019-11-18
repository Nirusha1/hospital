#ifndef DOCTORSCHEDULE_H
#define DOCTORSCHEDULE_H

#include <QMainWindow>

namespace Ui {
class DoctorSchedule;
}

class DoctorSchedule : public QMainWindow
{
    Q_OBJECT

public:
    explicit DoctorSchedule(QWidget *parent = 0);
    ~DoctorSchedule();

private:
    Ui::DoctorSchedule *ui;
};

#endif // DOCTORSCHEDULE_H
