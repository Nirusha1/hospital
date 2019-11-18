#include "createnewaccount.h"
#include "ui_createnewaccount.h"

CreateNewAccount::CreateNewAccount(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateNewAccount)
{
    ui->setupUi(this);
    setWindowTitle("create a new account");

}

CreateNewAccount::~CreateNewAccount()
{
    delete ui;
}
