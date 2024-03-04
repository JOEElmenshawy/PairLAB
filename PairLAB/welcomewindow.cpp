#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include<QPixmap>
#include"loginwindow.h"

WelcomeWindow::WelcomeWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WelcomeWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/resources/Cinema.jpg");
    int h = ui->Image1->height();
    int w = ui->Image1->width();
    ui->Image1->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));


}
void WelcomeWindow:: setValues(QString Username, int age)
{
    ui->HellowLabel->setText("Hellow "+Username+QString::number(age));
}

WelcomeWindow::~WelcomeWindow()
{
    delete ui;
}






void WelcomeWindow::on_logoutbutton_clicked()
{
    hide();
    loginWindow * LI= new loginWindow(this);
    LI ->show();

}

