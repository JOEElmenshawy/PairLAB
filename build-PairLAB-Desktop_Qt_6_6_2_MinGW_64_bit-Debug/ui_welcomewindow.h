/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QLabel *HellowLabel;
    QLabel *WelcomeLabel;
    QLabel *Image1;
    QPushButton *logoutbutton;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(659, 536);
        HellowLabel = new QLabel(WelcomeWindow);
        HellowLabel->setObjectName("HellowLabel");
        HellowLabel->setGeometry(QRect(20, 20, 151, 20));
        WelcomeLabel = new QLabel(WelcomeWindow);
        WelcomeLabel->setObjectName("WelcomeLabel");
        WelcomeLabel->setGeometry(QRect(210, -10, 241, 81));
        Image1 = new QLabel(WelcomeWindow);
        Image1->setObjectName("Image1");
        Image1->setGeometry(QRect(120, 60, 471, 361));
        logoutbutton = new QPushButton(WelcomeWindow);
        logoutbutton->setObjectName("logoutbutton");
        logoutbutton->setGeometry(QRect(110, 470, 93, 29));

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Dialog", nullptr));
        HellowLabel->setText(QCoreApplication::translate("WelcomeWindow", "Hellow", nullptr));
        WelcomeLabel->setText(QCoreApplication::translate("WelcomeWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700; color:#ffffff;\">Welcome</span></p></body></html>", nullptr));
        Image1->setText(QString());
        logoutbutton->setText(QCoreApplication::translate("WelcomeWindow", "logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
