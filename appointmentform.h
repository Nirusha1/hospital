#ifndef APPOINTMENTFORM_H
#define APPOINTMENTFORM_H

#include <QMainWindow>

namespace Ui {
class AppointmentForm;
}

class AppointmentForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit AppointmentForm(QWidget *parent = 0);
    ~AppointmentForm();

private:
    Ui::AppointmentForm *ui;
};

#endif // APPOINTMENTFORM_H
