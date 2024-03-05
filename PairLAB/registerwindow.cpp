#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "Users.h"
#include"welcomewindow.h"

RegisterWindow::RegisterWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterWindow)
{
    ui->setupUi(this);
    ui->Usernameerror->setVisible(false);
    ui->NotMatchingError->setVisible(false);
    ui->ageError->setVisible(false);
    ui->registererrorlabel->setVisible(false);
}
RegisterWindow::~RegisterWindow()
{
    delete ui;
}



void RegisterWindow::on_registerbutton_clicked()
{
    ui->Usernameerror->setVisible(false);
    ui->NotMatchingError->setVisible(false);
    ui->ageError->setVisible(false);
    ui->registererrorlabel->setVisible(false);
    QString username=ui->usernamelineedit->text();
    QString passoword= ui->passowordlineedit->text();
    QString retypePass= ui->retypelineeidt->text();
    QString month= ui->Monthcombobox->currentText();
    int Day = 0;
    if(ui->daylineedit->text()!="")
    {Day=(ui->daylineedit->text()).toInt();}
    else
    {Day=0;}
    int year=0;
    if(ui->yearlineedit->text()!="")
    {year= (ui->yearlineedit->text()).toInt();}
    else
    {year=0;}
    QString gender="";
    if(ui->maleradiobutton->isChecked())
    {
        gender= "Male";
    }
    if(ui->femaleradiobutton->isChecked())
    {
        gender= "Female";
    }
    QString AccType="";
    if(ui->UserRadioButton->isChecked())
    {
       AccType=" User";
    }
    if(ui->AdminRadioButton->isChecked())
    {
        AccType=" Admin";
    }
    QString Genre="";
    if(ui->ActioncheckBox->isChecked())
        Genre="Action";
    if(ui->Comdeycheckbox->isChecked())
        Genre="Comedy";
    if(ui->Romancecheckbox->isChecked())
        Genre="Romance";
    if(ui->Dramacheckbox->isChecked())
        Genre="Drama";
    if(ui->Horrorcheckbox->isChecked())
        Genre="Horror";
    if(ui->othercheckbox->isChecked())
        Genre="other";
    for(int i=0;i<userCount;i++)
    {
        if(username==usernames[i])
        {
            ui->Usernameerror->setVisible(true);
            return;
        }
    }
    if(passoword!=retypePass)
    {
        ui->NotMatchingError->setVisible(true);
        return;

    }
    if((2024-year)<12)
    {
        ui->ageError->setVisible(true);
        return;

    }
    if((gender=="")||(username=="")||passoword==""||retypePass==""||year==0||month==""||Day==0||Genre==""||AccType=="")
    {
        ui->registererrorlabel->setVisible(true);
        return;

    }
    else
    {
        usernames[userCount] = username;
        passwords[userCount]= passoword;
        userCount++;
        this->hide();
        WelcomeWindow* W= new WelcomeWindow(this);
        W->setValues(username,(2024-year));
        W->setVisible(true);
        return;
    }


}






