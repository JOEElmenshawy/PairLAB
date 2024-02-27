/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *usernamelineedit;
    QLineEdit *passowordlineedit;
    QLineEdit *retypelineeidt;
    QLabel *DateOFBirthlineedit;
    QLabel *Monthlabel;
    QLabel *daylabel;
    QLabel *yearlabel;
    QComboBox *Monthcombobox;
    QLineEdit *daylineedit;
    QLineEdit *yearlineedit;
    QLabel *Usernameerror;
    QLabel *NotMatchingError;
    QLabel *ageError;
    QGroupBox *gendergroupbox;
    QRadioButton *maleradiobutton;
    QRadioButton *femaleradiobutton;
    QGroupBox *AccountTypeGroupBox;
    QRadioButton *UserRadioButton;
    QRadioButton *AdminRadioButton;
    QGroupBox *FaviroteGenresGroupbox;
    QCheckBox *ActioncheckBox;
    QCheckBox *Comdeycheckbox;
    QCheckBox *Romancecheckbox;
    QCheckBox *Dramacheckbox;
    QCheckBox *Horrorcheckbox;
    QCheckBox *othercheckbox;
    QPushButton *registerbutton;
    QLabel *registererrorlabel;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(478, 517);
        label = new QLabel(RegisterWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 91, 20));
        label_2 = new QLabel(RegisterWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 40, 81, 20));
        label_3 = new QLabel(RegisterWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 70, 131, 20));
        usernamelineedit = new QLineEdit(RegisterWindow);
        usernamelineedit->setObjectName("usernamelineedit");
        usernamelineedit->setGeometry(QRect(90, 10, 113, 26));
        passowordlineedit = new QLineEdit(RegisterWindow);
        passowordlineedit->setObjectName("passowordlineedit");
        passowordlineedit->setGeometry(QRect(90, 40, 113, 26));
        passowordlineedit->setEchoMode(QLineEdit::Password);
        retypelineeidt = new QLineEdit(RegisterWindow);
        retypelineeidt->setObjectName("retypelineeidt");
        retypelineeidt->setGeometry(QRect(140, 70, 113, 26));
        retypelineeidt->setEchoMode(QLineEdit::Password);
        DateOFBirthlineedit = new QLabel(RegisterWindow);
        DateOFBirthlineedit->setObjectName("DateOFBirthlineedit");
        DateOFBirthlineedit->setGeometry(QRect(10, 110, 111, 20));
        Monthlabel = new QLabel(RegisterWindow);
        Monthlabel->setObjectName("Monthlabel");
        Monthlabel->setGeometry(QRect(10, 140, 63, 20));
        daylabel = new QLabel(RegisterWindow);
        daylabel->setObjectName("daylabel");
        daylabel->setGeometry(QRect(90, 140, 63, 20));
        yearlabel = new QLabel(RegisterWindow);
        yearlabel->setObjectName("yearlabel");
        yearlabel->setGeometry(QRect(190, 140, 63, 20));
        Monthcombobox = new QComboBox(RegisterWindow);
        Monthcombobox->addItem(QString());
        Monthcombobox->addItem(QString());
        Monthcombobox->addItem(QString());
        Monthcombobox->addItem(QString());
        Monthcombobox->addItem(QString());
        Monthcombobox->addItem(QString());
        Monthcombobox->addItem(QString());
        Monthcombobox->addItem(QString());
        Monthcombobox->addItem(QString());
        Monthcombobox->addItem(QString());
        Monthcombobox->addItem(QString());
        Monthcombobox->setObjectName("Monthcombobox");
        Monthcombobox->setGeometry(QRect(10, 170, 51, 26));
        daylineedit = new QLineEdit(RegisterWindow);
        daylineedit->setObjectName("daylineedit");
        daylineedit->setGeometry(QRect(80, 170, 81, 26));
        yearlineedit = new QLineEdit(RegisterWindow);
        yearlineedit->setObjectName("yearlineedit");
        yearlineedit->setGeometry(QRect(170, 170, 113, 26));
        Usernameerror = new QLabel(RegisterWindow);
        Usernameerror->setObjectName("Usernameerror");
        Usernameerror->setGeometry(QRect(210, 10, 121, 20));
        NotMatchingError = new QLabel(RegisterWindow);
        NotMatchingError->setObjectName("NotMatchingError");
        NotMatchingError->setGeometry(QRect(260, 70, 101, 20));
        ageError = new QLabel(RegisterWindow);
        ageError->setObjectName("ageError");
        ageError->setGeometry(QRect(290, 170, 131, 20));
        gendergroupbox = new QGroupBox(RegisterWindow);
        gendergroupbox->setObjectName("gendergroupbox");
        gendergroupbox->setGeometry(QRect(10, 210, 120, 80));
        maleradiobutton = new QRadioButton(gendergroupbox);
        maleradiobutton->setObjectName("maleradiobutton");
        maleradiobutton->setGeometry(QRect(10, 20, 110, 24));
        femaleradiobutton = new QRadioButton(gendergroupbox);
        femaleradiobutton->setObjectName("femaleradiobutton");
        femaleradiobutton->setGeometry(QRect(10, 40, 110, 24));
        AccountTypeGroupBox = new QGroupBox(RegisterWindow);
        AccountTypeGroupBox->setObjectName("AccountTypeGroupBox");
        AccountTypeGroupBox->setGeometry(QRect(170, 210, 120, 80));
        UserRadioButton = new QRadioButton(AccountTypeGroupBox);
        UserRadioButton->setObjectName("UserRadioButton");
        UserRadioButton->setGeometry(QRect(0, 20, 110, 24));
        AdminRadioButton = new QRadioButton(AccountTypeGroupBox);
        AdminRadioButton->setObjectName("AdminRadioButton");
        AdminRadioButton->setGeometry(QRect(0, 50, 110, 24));
        FaviroteGenresGroupbox = new QGroupBox(RegisterWindow);
        FaviroteGenresGroupbox->setObjectName("FaviroteGenresGroupbox");
        FaviroteGenresGroupbox->setGeometry(QRect(10, 300, 281, 131));
        ActioncheckBox = new QCheckBox(FaviroteGenresGroupbox);
        ActioncheckBox->setObjectName("ActioncheckBox");
        ActioncheckBox->setGeometry(QRect(0, 30, 91, 24));
        Comdeycheckbox = new QCheckBox(FaviroteGenresGroupbox);
        Comdeycheckbox->setObjectName("Comdeycheckbox");
        Comdeycheckbox->setGeometry(QRect(0, 60, 91, 24));
        Romancecheckbox = new QCheckBox(FaviroteGenresGroupbox);
        Romancecheckbox->setObjectName("Romancecheckbox");
        Romancecheckbox->setGeometry(QRect(0, 90, 91, 24));
        Dramacheckbox = new QCheckBox(FaviroteGenresGroupbox);
        Dramacheckbox->setObjectName("Dramacheckbox");
        Dramacheckbox->setGeometry(QRect(130, 30, 91, 24));
        Horrorcheckbox = new QCheckBox(FaviroteGenresGroupbox);
        Horrorcheckbox->setObjectName("Horrorcheckbox");
        Horrorcheckbox->setGeometry(QRect(130, 60, 91, 24));
        othercheckbox = new QCheckBox(FaviroteGenresGroupbox);
        othercheckbox->setObjectName("othercheckbox");
        othercheckbox->setGeometry(QRect(130, 90, 91, 24));
        registerbutton = new QPushButton(RegisterWindow);
        registerbutton->setObjectName("registerbutton");
        registerbutton->setGeometry(QRect(10, 450, 93, 29));
        registererrorlabel = new QLabel(RegisterWindow);
        registererrorlabel->setObjectName("registererrorlabel");
        registererrorlabel->setGeometry(QRect(120, 450, 181, 20));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RegisterWindow", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterWindow", "Passoword", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterWindow", "Re-type Passoword", nullptr));
        DateOFBirthlineedit->setText(QCoreApplication::translate("RegisterWindow", "Date of birth:", nullptr));
        Monthlabel->setText(QCoreApplication::translate("RegisterWindow", "Month", nullptr));
        daylabel->setText(QCoreApplication::translate("RegisterWindow", "Day", nullptr));
        yearlabel->setText(QCoreApplication::translate("RegisterWindow", "year", nullptr));
        Monthcombobox->setItemText(0, QCoreApplication::translate("RegisterWindow", "Jan", nullptr));
        Monthcombobox->setItemText(1, QCoreApplication::translate("RegisterWindow", "Feb", nullptr));
        Monthcombobox->setItemText(2, QCoreApplication::translate("RegisterWindow", "Mar", nullptr));
        Monthcombobox->setItemText(3, QCoreApplication::translate("RegisterWindow", "May", nullptr));
        Monthcombobox->setItemText(4, QCoreApplication::translate("RegisterWindow", "Jun", nullptr));
        Monthcombobox->setItemText(5, QCoreApplication::translate("RegisterWindow", "Jul", nullptr));
        Monthcombobox->setItemText(6, QCoreApplication::translate("RegisterWindow", "Aug", nullptr));
        Monthcombobox->setItemText(7, QCoreApplication::translate("RegisterWindow", "Sep", nullptr));
        Monthcombobox->setItemText(8, QCoreApplication::translate("RegisterWindow", "Oct", nullptr));
        Monthcombobox->setItemText(9, QCoreApplication::translate("RegisterWindow", "Nov", nullptr));
        Monthcombobox->setItemText(10, QCoreApplication::translate("RegisterWindow", "Dec", nullptr));

        Usernameerror->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Username error</span></p></body></html>", nullptr));
        NotMatchingError->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Not matching</span></p></body></html>", nullptr));
        ageError->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">Age is less than 12</span></p></body></html>", nullptr));
        gendergroupbox->setTitle(QCoreApplication::translate("RegisterWindow", "Gender", nullptr));
        maleradiobutton->setText(QCoreApplication::translate("RegisterWindow", "Male", nullptr));
        femaleradiobutton->setText(QCoreApplication::translate("RegisterWindow", "Female", nullptr));
        AccountTypeGroupBox->setTitle(QCoreApplication::translate("RegisterWindow", "Account Type:", nullptr));
        UserRadioButton->setText(QCoreApplication::translate("RegisterWindow", "User", nullptr));
        AdminRadioButton->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        FaviroteGenresGroupbox->setTitle(QCoreApplication::translate("RegisterWindow", "Favorite Genre(s)", nullptr));
        ActioncheckBox->setText(QCoreApplication::translate("RegisterWindow", "Action", nullptr));
        Comdeycheckbox->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        Romancecheckbox->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        Dramacheckbox->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        Horrorcheckbox->setText(QCoreApplication::translate("RegisterWindow", "Horror", nullptr));
        othercheckbox->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
        registerbutton->setText(QCoreApplication::translate("RegisterWindow", "Register", nullptr));
        registererrorlabel->setText(QCoreApplication::translate("RegisterWindow", "<html><head/><body><p><span style=\" color:#ff0000;\">All fields must be filled</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
