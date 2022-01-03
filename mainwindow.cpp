#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent, Program *app)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , mainApp(app)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    signInWindow = new SignIn(this);
    signInWindow->exec();
    delete signInWindow;
}


void MainWindow::on_pushButton_2_clicked()
{
    signUpWindow = new SignUpWindow(this);
    signUpWindow->exec();
    delete signUpWindow;
}

