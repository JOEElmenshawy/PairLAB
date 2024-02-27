/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *username;
    QLineEdit *passoword;
    QPushButton *loginbutton;
    QPushButton *registerbutton;
    QLabel *Errorlabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *loginWindow)
    {
        if (loginWindow->objectName().isEmpty())
            loginWindow->setObjectName("loginWindow");
        loginWindow->resize(800, 600);
        centralwidget = new QWidget(loginWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 81, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 40, 81, 20));
        username = new QLineEdit(centralwidget);
        username->setObjectName("username");
        username->setGeometry(QRect(100, 10, 141, 26));
        passoword = new QLineEdit(centralwidget);
        passoword->setObjectName("passoword");
        passoword->setGeometry(QRect(90, 40, 151, 26));
        passoword->setEchoMode(QLineEdit::Password);
        loginbutton = new QPushButton(centralwidget);
        loginbutton->setObjectName("loginbutton");
        loginbutton->setGeometry(QRect(10, 140, 93, 29));
        registerbutton = new QPushButton(centralwidget);
        registerbutton->setObjectName("registerbutton");
        registerbutton->setGeometry(QRect(110, 140, 93, 29));
        Errorlabel = new QLabel(centralwidget);
        Errorlabel->setObjectName("Errorlabel");
        Errorlabel->setGeometry(QRect(10, 90, 231, 20));
        loginWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(loginWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        loginWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(loginWindow);
        statusbar->setObjectName("statusbar");
        loginWindow->setStatusBar(statusbar);

        retranslateUi(loginWindow);

        QMetaObject::connectSlotsByName(loginWindow);
    } // setupUi

    void retranslateUi(QMainWindow *loginWindow)
    {
        loginWindow->setWindowTitle(QCoreApplication::translate("loginWindow", "loginWindow", nullptr));
        label->setText(QCoreApplication::translate("loginWindow", "username", nullptr));
        label_2->setText(QCoreApplication::translate("loginWindow", "passoword", nullptr));
        loginbutton->setText(QCoreApplication::translate("loginWindow", "login", nullptr));
        registerbutton->setText(QCoreApplication::translate("loginWindow", "register", nullptr));
        Errorlabel->setText(QCoreApplication::translate("loginWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginWindow: public Ui_loginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
