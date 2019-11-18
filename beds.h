#ifndef BEDS_H
#define BEDS_H

#include <QMainWindow>

namespace Ui {
class Beds;
}

class Beds : public QMainWindow
{
    Q_OBJECT

public:
    explicit Beds(QWidget *parent = 0);
    ~Beds();

private:
    Ui::Beds *ui;
};

#endif // BEDS_H
