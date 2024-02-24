/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelNum1;
    QLabel *labelNum2;
    QLabel *labelResult;
    QLineEdit *num1;
    QLineEdit *num2;
    QLineEdit *result;
    QPushButton *N1;
    QPushButton *N4;
    QPushButton *N2;
    QPushButton *N3;
    QPushButton *N5;
    QPushButton *N6;
    QPushButton *N8;
    QPushButton *N9;
    QPushButton *clear;
    QPushButton *enter;
    QPushButton *add;
    QPushButton *sub;
    QPushButton *mul;
    QPushButton *div;
    QPushButton *N0;
    QPushButton *N7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(416, 290);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        labelNum1 = new QLabel(centralwidget);
        labelNum1->setObjectName("labelNum1");
        labelNum1->setGeometry(QRect(10, 10, 101, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Variable Small Semibol")});
        font.setPointSize(15);
        labelNum1->setFont(font);
        labelNum2 = new QLabel(centralwidget);
        labelNum2->setObjectName("labelNum2");
        labelNum2->setGeometry(QRect(140, 10, 101, 41));
        labelNum2->setFont(font);
        labelResult = new QLabel(centralwidget);
        labelResult->setObjectName("labelResult");
        labelResult->setGeometry(QRect(270, 20, 61, 21));
        labelResult->setFont(font);
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(10, 50, 121, 24));
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(140, 50, 121, 24));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(270, 50, 131, 24));
        N1 = new QPushButton(centralwidget);
        N1->setObjectName("N1");
        N1->setGeometry(QRect(10, 90, 91, 31));
        N1->setFont(font);
        N4 = new QPushButton(centralwidget);
        N4->setObjectName("N4");
        N4->setGeometry(QRect(10, 130, 91, 31));
        N4->setFont(font);
        N2 = new QPushButton(centralwidget);
        N2->setObjectName("N2");
        N2->setGeometry(QRect(110, 90, 91, 31));
        N2->setFont(font);
        N3 = new QPushButton(centralwidget);
        N3->setObjectName("N3");
        N3->setGeometry(QRect(210, 90, 91, 31));
        N3->setFont(font);
        N5 = new QPushButton(centralwidget);
        N5->setObjectName("N5");
        N5->setGeometry(QRect(110, 130, 91, 31));
        N5->setFont(font);
        N6 = new QPushButton(centralwidget);
        N6->setObjectName("N6");
        N6->setGeometry(QRect(210, 130, 91, 31));
        N6->setFont(font);
        N8 = new QPushButton(centralwidget);
        N8->setObjectName("N8");
        N8->setGeometry(QRect(110, 170, 91, 31));
        N8->setFont(font);
        N9 = new QPushButton(centralwidget);
        N9->setObjectName("N9");
        N9->setGeometry(QRect(210, 170, 91, 31));
        N9->setFont(font);
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(110, 210, 91, 31));
        clear->setFont(font);
        enter = new QPushButton(centralwidget);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(210, 210, 91, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Variable Small Semibol")});
        font1.setPointSize(15);
        font1.setBold(true);
        enter->setFont(font1);
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(310, 90, 91, 31));
        add->setFont(font);
        sub = new QPushButton(centralwidget);
        sub->setObjectName("sub");
        sub->setGeometry(QRect(310, 130, 91, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Variable Small Semibol")});
        font2.setPointSize(20);
        sub->setFont(font2);
        mul = new QPushButton(centralwidget);
        mul->setObjectName("mul");
        mul->setGeometry(QRect(310, 170, 91, 31));
        mul->setFont(font1);
        div = new QPushButton(centralwidget);
        div->setObjectName("div");
        div->setGeometry(QRect(310, 210, 91, 31));
        div->setFont(font);
        N0 = new QPushButton(centralwidget);
        N0->setObjectName("N0");
        N0->setGeometry(QRect(10, 210, 91, 31));
        N0->setFont(font);
        N7 = new QPushButton(centralwidget);
        N7->setObjectName("N7");
        N7->setGeometry(QRect(10, 170, 91, 31));
        N7->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 416, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelNum1->setText(QCoreApplication::translate("MainWindow", "Number 1", nullptr));
        labelNum2->setText(QCoreApplication::translate("MainWindow", "Number 2", nullptr));
        labelResult->setText(QCoreApplication::translate("MainWindow", "Result", nullptr));
        N1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        N4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        N2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        N3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        N5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        N6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        N8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        N9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        N0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        N7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
