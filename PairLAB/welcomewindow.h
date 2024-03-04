#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include <QDialog>

namespace Ui {
class WelcomeWindow;
}

class WelcomeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit WelcomeWindow(QWidget *parent = nullptr);
    void setValues(QString Username, int age);


    ~WelcomeWindow();

private slots:
    void on_logoutbutton_clicked();

private:
    Ui::WelcomeWindow *ui;
};

#endif // WELCOMEWINDOW_H
