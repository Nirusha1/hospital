#include "login.h"
#include "ui_login.h"
#include "QPixmap"
#include "Qstring"
#include "QMessageBox"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QPixmap imgr(":/resource/img/receptionist.jpg");
    int wr = ui->label_imgR->width();
    int hr = ui->label_imgR->height();
    ui->label_imgR->setPixmap(imgr.scaled(wr,hr,Qt::KeepAspectRatio));

    QPixmap imgp(":/resource/img/pharmacy.jpg");
    int wp = ui->label_imgP->width();
    int hp = ui->label_imgP->height();
    ui->label_imgP->setPixmap(imgp.scaled(wp,hp,Qt::KeepAspectRatio));
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_loginR_clicked()
{
    QString username = ui->lineEdit_usernameR->text();
    QString password = ui->lineEdit_passwordR->text();

    if(username == "r" && password == "r")
    {
        hide();
    mainwindowR = new MainWindowR(this);
    mainwindowR->show();
    }
    else
        QMessageBox ::warning(this,"Error","Enter a valid username and password");
}

void login::on_pushButton_loginP_clicked()
{
    QString username = ui->lineEdit_usernameP->text();
    QString password = ui->lineEdit_passwordP->text();

    if(username == "p" && password == "p")
    {
        hide();
    mainwindowP = new MainWindowP(this);
    mainwindowP->show();
    }
    else
        QMessageBox ::warning(this,"Error","Enter a valid username and password");
}

void login::on_pushButton_createNewR_clicked()
{
    createNewAccount = new CreateNewAccount(this);
    createNewAccount->show();
}

void login::on_pushButton_createNewP_clicked()
{
    createNewAccount = new CreateNewAccount(this);
    createNewAccount->show();
}

