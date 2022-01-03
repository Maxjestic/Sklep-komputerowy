/********************************************************************************
** Form generated from reading UI file 'signinwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNINWINDOW_H
#define UI_SIGNINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_Login;
    QLabel *lbLogin;
    QLineEdit *leLogin;
    QVBoxLayout *verticalLayout_Password;
    QLabel *lbPassword;
    QLineEdit *lineEdit;
    QVBoxLayout *verticalLayout_Buttons;
    QPushButton *btnLogin;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName(QString::fromUtf8("SignIn"));
        SignIn->resize(250, 200);
        SignIn->setMinimumSize(QSize(250, 200));
        gridLayout = new QGridLayout(SignIn);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_Login = new QVBoxLayout();
        verticalLayout_Login->setObjectName(QString::fromUtf8("verticalLayout_Login"));
        lbLogin = new QLabel(SignIn);
        lbLogin->setObjectName(QString::fromUtf8("lbLogin"));

        verticalLayout_Login->addWidget(lbLogin);

        leLogin = new QLineEdit(SignIn);
        leLogin->setObjectName(QString::fromUtf8("leLogin"));

        verticalLayout_Login->addWidget(leLogin);


        verticalLayout_2->addLayout(verticalLayout_Login);

        verticalLayout_Password = new QVBoxLayout();
        verticalLayout_Password->setObjectName(QString::fromUtf8("verticalLayout_Password"));
        lbPassword = new QLabel(SignIn);
        lbPassword->setObjectName(QString::fromUtf8("lbPassword"));

        verticalLayout_Password->addWidget(lbPassword);

        lineEdit = new QLineEdit(SignIn);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_Password->addWidget(lineEdit);


        verticalLayout_2->addLayout(verticalLayout_Password);

        verticalLayout_Buttons = new QVBoxLayout();
        verticalLayout_Buttons->setObjectName(QString::fromUtf8("verticalLayout_Buttons"));
        btnLogin = new QPushButton(SignIn);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));

        verticalLayout_Buttons->addWidget(btnLogin);

        pushButton = new QPushButton(SignIn);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_Buttons->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout_Buttons);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);


        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QDialog *SignIn)
    {
        SignIn->setWindowTitle(QCoreApplication::translate("SignIn", "Dialog", nullptr));
        lbLogin->setText(QCoreApplication::translate("SignIn", "Login", nullptr));
        lbPassword->setText(QCoreApplication::translate("SignIn", "Password", nullptr));
        btnLogin->setText(QCoreApplication::translate("SignIn", "Sign in", nullptr));
        pushButton->setText(QCoreApplication::translate("SignIn", "Create account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNINWINDOW_H
