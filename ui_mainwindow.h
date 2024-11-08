/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoginShow;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QLabel *labelTabel;
    QComboBox *cmbTable;
    QLabel *labelView;
    QComboBox *cmbView;
    QLabel *labelFontSize;
    QComboBox *cmbFontSize;
    QPushButton *btnDelete;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(500, 515);
        MainWindow->setMinimumSize(QSize(500, 500));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:  #B7CEE8;"));
        actionLoginShow = new QAction(MainWindow);
        actionLoginShow->setObjectName("actionLoginShow");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setStyleSheet(QString::fromUtf8("background-color:  white;"));

        verticalLayout->addWidget(tableView);

        labelTabel = new QLabel(centralwidget);
        labelTabel->setObjectName("labelTabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(14);
        font.setBold(true);
        labelTabel->setFont(font);
        labelTabel->setLayoutDirection(Qt::LeftToRight);
        labelTabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelTabel);

        cmbTable = new QComboBox(centralwidget);
        cmbTable->setObjectName("cmbTable");
        cmbTable->setMinimumSize(QSize(120, 33));
        cmbTable->setStyleSheet(QString::fromUtf8("QComboBox {\n"
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

        verticalLayout->addWidget(cmbTable);

        labelView = new QLabel(centralwidget);
        labelView->setObjectName("labelView");
        labelView->setFont(font);
        labelView->setLayoutDirection(Qt::LeftToRight);
        labelView->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelView);

        cmbView = new QComboBox(centralwidget);
        cmbView->setObjectName("cmbView");
        cmbView->setMinimumSize(QSize(120, 33));
        cmbView->setStyleSheet(QString::fromUtf8("QComboBox {\n"
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

        verticalLayout->addWidget(cmbView);

        labelFontSize = new QLabel(centralwidget);
        labelFontSize->setObjectName("labelFontSize");
        labelFontSize->setFont(font);
        labelFontSize->setLayoutDirection(Qt::LeftToRight);
        labelFontSize->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelFontSize);

        cmbFontSize = new QComboBox(centralwidget);
        cmbFontSize->setObjectName("cmbFontSize");
        cmbFontSize->setMinimumSize(QSize(120, 33));
        cmbFontSize->setStyleSheet(QString::fromUtf8("QComboBox {\n"
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

        verticalLayout->addWidget(cmbFontSize);

        btnDelete = new QPushButton(centralwidget);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setMinimumSize(QSize(0, 33));
        btnDelete->setStyleSheet(QString::fromUtf8("background-color: white; border-radius: 15px;"));

        verticalLayout->addWidget(btnDelete);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 500, 25));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addSeparator();
        menu->addSeparator();
        menu->addSeparator();
        menu->addAction(actionLoginShow);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", ":)", nullptr));
        actionLoginShow->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \320\272 \320\221\320\224", nullptr));
        labelTabel->setText(QCoreApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260", nullptr));
        labelView->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\321\201\321\202\320\260\320\262\320\273\320\265\320\275\320\270\321\217", nullptr));
        labelFontSize->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \321\210\321\200\320\270\321\204\321\202\320\260", nullptr));
        btnDelete->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
