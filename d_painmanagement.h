#ifndef D_PAINMANAGEMENT_H
#define D_PAINMANAGEMENT_H

#include <QMainWindow>

namespace Ui {
class D_PainManagement;
}

class D_PainManagement : public QMainWindow
{
    Q_OBJECT

public:
    explicit D_PainManagement(QWidget *parent = 0);
    ~D_PainManagement();

private:
    Ui::D_PainManagement *ui;
};

#endif // D_PAINMANAGEMENT_H
