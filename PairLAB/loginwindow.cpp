#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "Users.h"
#include "welcomewindow.h"
#include "registerwindow.h"


loginWindow::loginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginWindow)
{
    ui->setupUi(this);
    ui->Errorlabel->setVisible(false);
}

loginWindow::~loginWindow()
{
    delete ui;
}

void loginWindow::on_loginbutton_clicked()
{
    for(int i=0;i<4;i++){
        if(ui->username->text() == usernames[i] && ui->passoword->text() == passwords[i]){
            hide();
             WelcomeWindow* W = new WelcomeWindow(this);
            W->setValues(ui->username->text(),ages[i]);
               W->show();
            return;
        }
    }
    ui->Errorlabel->setVisible(true);
}


void loginWindow::on_registerbutton_clicked()
{
    hide();
    RegisterWindow* registerWindow = new RegisterWindow(this);
    registerWindow->show();
}

