#ifndef CREATENEWACCOUNT_H
#define CREATENEWACCOUNT_H

#include <QDialog>

namespace Ui {
class CreateNewAccount;
}

class CreateNewAccount : public QDialog
{
    Q_OBJECT

public:
    explicit CreateNewAccount(QWidget *parent = 0);
    ~CreateNewAccount();

private:
    Ui::CreateNewAccount *ui;
};

#endif // CREATENEWACCOUNT_H
