/********************************************************************************
** Form generated from reading UI file 'signupwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWINDOW_H
#define UI_SIGNUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SignUpWindow
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *lbLogin;
    QLineEdit *leLogin;
    QLabel *lbPassword;
    QLineEdit *lePassword;
    QLabel *lbConfirmPassword;
    QLineEdit *leConfirmPassword;
    QLabel *lbName;
    QLineEdit *leName;
    QLabel *lbSurname;
    QLineEdit *leSurname;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbCity;
    QLineEdit *leCity;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbPostalCode;
    QLineEdit *lePostalCode;
    QLabel *lbAddress;
    QLineEdit *leAddress;
    QLabel *lbCountry;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnConfirm;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *SignUpWindow)
    {
        if (SignUpWindow->objectName().isEmpty())
            SignUpWindow->setObjectName(QString::fromUtf8("SignUpWindow"));
        SignUpWindow->resize(720, 440);
        SignUpWindow->setMinimumSize(QSize(720, 440));
        gridLayout = new QGridLayout(SignUpWindow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbLogin = new QLabel(SignUpWindow);
        lbLogin->setObjectName(QString::fromUtf8("lbLogin"));

        verticalLayout->addWidget(lbLogin);

        leLogin = new QLineEdit(SignUpWindow);
        leLogin->setObjectName(QString::fromUtf8("leLogin"));

        verticalLayout->addWidget(leLogin);

        lbPassword = new QLabel(SignUpWindow);
        lbPassword->setObjectName(QString::fromUtf8("lbPassword"));

        verticalLayout->addWidget(lbPassword);

        lePassword = new QLineEdit(SignUpWindow);
        lePassword->setObjectName(QString::fromUtf8("lePassword"));
        lePassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lePassword);

        lbConfirmPassword = new QLabel(SignUpWindow);
        lbConfirmPassword->setObjectName(QString::fromUtf8("lbConfirmPassword"));

        verticalLayout->addWidget(lbConfirmPassword);

        leConfirmPassword = new QLineEdit(SignUpWindow);
        leConfirmPassword->setObjectName(QString::fromUtf8("leConfirmPassword"));
        leConfirmPassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(leConfirmPassword);

        lbName = new QLabel(SignUpWindow);
        lbName->setObjectName(QString::fromUtf8("lbName"));

        verticalLayout->addWidget(lbName);

        leName = new QLineEdit(SignUpWindow);
        leName->setObjectName(QString::fromUtf8("leName"));

        verticalLayout->addWidget(leName);

        lbSurname = new QLabel(SignUpWindow);
        lbSurname->setObjectName(QString::fromUtf8("lbSurname"));

        verticalLayout->addWidget(lbSurname);

        leSurname = new QLineEdit(SignUpWindow);
        leSurname->setObjectName(QString::fromUtf8("leSurname"));

        verticalLayout->addWidget(leSurname);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lbCity = new QLabel(SignUpWindow);
        lbCity->setObjectName(QString::fromUtf8("lbCity"));

        verticalLayout_2->addWidget(lbCity);

        leCity = new QLineEdit(SignUpWindow);
        leCity->setObjectName(QString::fromUtf8("leCity"));

        verticalLayout_2->addWidget(leCity);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lbPostalCode = new QLabel(SignUpWindow);
        lbPostalCode->setObjectName(QString::fromUtf8("lbPostalCode"));

        verticalLayout_3->addWidget(lbPostalCode);

        lePostalCode = new QLineEdit(SignUpWindow);
        lePostalCode->setObjectName(QString::fromUtf8("lePostalCode"));

        verticalLayout_3->addWidget(lePostalCode);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout);

        lbAddress = new QLabel(SignUpWindow);
        lbAddress->setObjectName(QString::fromUtf8("lbAddress"));

        verticalLayout->addWidget(lbAddress);

        leAddress = new QLineEdit(SignUpWindow);
        leAddress->setObjectName(QString::fromUtf8("leAddress"));

        verticalLayout->addWidget(leAddress);

        lbCountry = new QLabel(SignUpWindow);
        lbCountry->setObjectName(QString::fromUtf8("lbCountry"));

        verticalLayout->addWidget(lbCountry);

        comboBox = new QComboBox(SignUpWindow);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout->addWidget(comboBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnConfirm = new QPushButton(SignUpWindow);
        btnConfirm->setObjectName(QString::fromUtf8("btnConfirm"));

        horizontalLayout_2->addWidget(btnConfirm);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);


        retranslateUi(SignUpWindow);

        QMetaObject::connectSlotsByName(SignUpWindow);
    } // setupUi

    void retranslateUi(QDialog *SignUpWindow)
    {
        SignUpWindow->setWindowTitle(QCoreApplication::translate("SignUpWindow", "Dialog", nullptr));
        lbLogin->setText(QCoreApplication::translate("SignUpWindow", "Login", nullptr));
        lbPassword->setText(QCoreApplication::translate("SignUpWindow", "Password", nullptr));
        lbConfirmPassword->setText(QCoreApplication::translate("SignUpWindow", "Confirm password", nullptr));
        lbName->setText(QCoreApplication::translate("SignUpWindow", "Name", nullptr));
        lbSurname->setText(QCoreApplication::translate("SignUpWindow", "Surname", nullptr));
        lbCity->setText(QCoreApplication::translate("SignUpWindow", "City", nullptr));
        lbPostalCode->setText(QCoreApplication::translate("SignUpWindow", "Postal code", nullptr));
        lbAddress->setText(QCoreApplication::translate("SignUpWindow", "Address", nullptr));
        lbCountry->setText(QCoreApplication::translate("SignUpWindow", "Country", nullptr));
        btnConfirm->setText(QCoreApplication::translate("SignUpWindow", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUpWindow: public Ui_SignUpWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
