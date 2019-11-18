#ifndef MEDICINELIST_H
#define MEDICINELIST_H

#include <QMainWindow>

namespace Ui {
class MedicineList;
}

class MedicineList : public QMainWindow
{
    Q_OBJECT

public:
    explicit MedicineList(QWidget *parent = 0);
    ~MedicineList();

private:
    Ui::MedicineList *ui;
};

#endif // MEDICINELIST_H
