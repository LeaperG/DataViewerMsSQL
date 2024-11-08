/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *labelServerName;
    QLabel *labelDatabaseName;
    QLabel *labelLogin;
    QLabel *labelPassword;
    QPushButton *btnConnect;
    QLineEdit *lineEditServerName;
    QLineEdit *lineEditLogin;
    QLineEdit *lineEditPassword;
    QComboBox *cmbDatabaseName;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->setWindowModality(Qt::ApplicationModal);
        Login->resize(500, 450);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Login->sizePolicy().hasHeightForWidth());
        Login->setSizePolicy(sizePolicy);
        Login->setMinimumSize(QSize(500, 450));
        Login->setMaximumSize(QSize(500, 450));
        Login->setStyleSheet(QString::fromUtf8("background-color:  #B7CEE8;"));
        labelServerName = new QLabel(Login);
        labelServerName->setObjectName("labelServerName");
        labelServerName->setGeometry(QRect(140, 40, 220, 33));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        font.setBold(true);
        labelServerName->setFont(font);
        labelServerName->setLayoutDirection(Qt::LeftToRight);
        labelServerName->setAlignment(Qt::AlignCenter);
        labelDatabaseName = new QLabel(Login);
        labelDatabaseName->setObjectName("labelDatabaseName");
        labelDatabaseName->setGeometry(QRect(140, 120, 220, 33));
        labelDatabaseName->setFont(font);
        labelDatabaseName->setLayoutDirection(Qt::LeftToRight);
        labelDatabaseName->setAlignment(Qt::AlignCenter);
        labelLogin = new QLabel(Login);
        labelLogin->setObjectName("labelLogin");
        labelLogin->setGeometry(QRect(140, 200, 220, 33));
        labelLogin->setFont(font);
        labelLogin->setLayoutDirection(Qt::LeftToRight);
        labelLogin->setAlignment(Qt::AlignCenter);
        labelPassword = new QLabel(Login);
        labelPassword->setObjectName("labelPassword");
        labelPassword->setGeometry(QRect(140, 280, 220, 33));
        labelPassword->setFont(font);
        labelPassword->setLayoutDirection(Qt::LeftToRight);
        labelPassword->setAlignment(Qt::AlignCenter);
        btnConnect = new QPushButton(Login);
        btnConnect->setObjectName("btnConnect");
        btnConnect->setGeometry(QRect(140, 370, 220, 33));
        btnConnect->setLayoutDirection(Qt::LeftToRight);
        btnConnect->setStyleSheet(QString::fromUtf8("background-color: white; border-radius: 15px;"));
        lineEditServerName = new QLineEdit(Login);
        lineEditServerName->setObjectName("lineEditServerName");
        lineEditServerName->setGeometry(QRect(140, 80, 220, 33));
        lineEditServerName->setLayoutDirection(Qt::LeftToRight);
        lineEditServerName->setStyleSheet(QString::fromUtf8("background-color: white; border-radius: 15px;"));
        lineEditServerName->setAlignment(Qt::AlignCenter);
        lineEditLogin = new QLineEdit(Login);
        lineEditLogin->setObjectName("lineEditLogin");
        lineEditLogin->setGeometry(QRect(140, 240, 220, 33));
        lineEditLogin->setLayoutDirection(Qt::LeftToRight);
        lineEditLogin->setStyleSheet(QString::fromUtf8("background-color: white; border-radius: 15px;"));
        lineEditLogin->setAlignment(Qt::AlignCenter);
        lineEditPassword = new QLineEdit(Login);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(140, 320, 220, 33));
        lineEditPassword->setLayoutDirection(Qt::LeftToRight);
        lineEditPassword->setStyleSheet(QString::fromUtf8("background-color: white; border-radius: 15px;"));
        lineEditPassword->setAlignment(Qt::AlignCenter);
        cmbDatabaseName = new QComboBox(Login);
        cmbDatabaseName->setObjectName("cmbDatabaseName");
        cmbDatabaseName->setGeometry(QRect(140, 160, 220, 33));
        cmbDatabaseName->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	text-align: center; \n"
"    border-radius: 15px;\n"
"    min-width: 6em;\n"
"	background: white;\n"
"}\n"
"\n"
"QComboBox:editable {\n"
"    background: white;\n"
"}\n"
"\n"
"\n"
"QComboBox:on { /* shift the text when the popup opens */\n"
"    padding-top: 50px;\n"
"    padding-left: 50px;\n"
"	    background: white;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 15px;\n"
"\n"
"    border-left-width: 1px;\n"
"    border-left-color: darkgray;\n"
"    border-left-style: solid; /* just a single line */\n"
"    border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QComboBox::down-arrow:on { /* shift the arrow when popup is open */\n"
"    top: 1px;\n"
"    left: 1px;\n"
"}\n"
"\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background: white; \n"
"	border-radius: 10px;\n"
"}"));

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", ":)", nullptr));
        labelServerName->setText(QCoreApplication::translate("Login", "\320\220\320\264\321\200\320\265\321\201 \321\201\320\265\321\200\320\262\320\265\321\200\320\260 \320\221\320\224", nullptr));
        labelDatabaseName->setText(QCoreApplication::translate("Login", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\221\320\224", nullptr));
        labelLogin->setText(QCoreApplication::translate("Login", "\320\230\320\274\321\217 \320\222\321\205\320\276\320\264\320\260", nullptr));
        labelPassword->setText(QCoreApplication::translate("Login", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        btnConnect->setText(QCoreApplication::translate("Login", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        lineEditServerName->setPlaceholderText(QCoreApplication::translate("Login", "\320\220\320\264\321\200\320\265\321\201 \321\201\320\265\321\200\320\262\320\265\321\200\320\260 \320\221\320\224", nullptr));
        lineEditLogin->setPlaceholderText(QCoreApplication::translate("Login", "\320\230\320\274\321\217 \320\222\321\205\320\276\320\264\320\260", nullptr));
        lineEditPassword->setPlaceholderText(QCoreApplication::translate("Login", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
