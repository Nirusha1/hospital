#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "mainwindowr.h"
#include "mainwindowp.h"
#include "createnewaccount.h"

namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_pushButton_loginR_clicked();

    void on_pushButton_loginAsAdminR_clicked();

    void on_pushButton_createNewP_clicked();

    void on_pushButton_createNewR_clicked();

    void on_pushButton_loginP_clicked();

private:
    Ui::login *ui;
    MainWindowR *mainwindowR;
    MainWindowP *mainwindowP;
    CreateNewAccount *createNewAccount;
};

#endif // LOGIN_H
