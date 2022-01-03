#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <signinwindow.h>
#include <signupwindow.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class Program;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr, Program *app = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui = nullptr;
    Program *mainApp = nullptr;
    SignUpWindow *signUpWindow = nullptr;
    SignIn *signInWindow = nullptr;
};
#endif // MAINWINDOW_H
