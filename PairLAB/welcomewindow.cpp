#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include<QPixmap>

WelcomeWindow::WelcomeWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}
//QPixmap pix(":/WelcomePic1.webp");
//ui->ImageLabel->setPixmap(pix.scaled(100,100));
