/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *N1;
    QPushButton *N2;
    QPushButton *N3;
    QPushButton *Plus;
    QLineEdit *num1;
    QLineEdit *num2;
    QLineEdit *result;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *Miinus;
    QPushButton *Kerto;
    QPushButton *Jako;
    QPushButton *N4;
    QPushButton *N5;
    QPushButton *N6;
    QPushButton *N7;
    QPushButton *N8;
    QPushButton *N9;
    QPushButton *N0;
    QPushButton *Clear;
    QPushButton *Enter;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(652, 394);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        N1 = new QPushButton(centralwidget);
        N1->setObjectName("N1");
        N1->setGeometry(QRect(100, 100, 80, 24));
        N2 = new QPushButton(centralwidget);
        N2->setObjectName("N2");
        N2->setGeometry(QRect(200, 100, 80, 24));
        N3 = new QPushButton(centralwidget);
        N3->setObjectName("N3");
        N3->setGeometry(QRect(300, 100, 80, 24));
        Plus = new QPushButton(centralwidget);
        Plus->setObjectName("Plus");
        Plus->setGeometry(QRect(400, 100, 80, 24));
        num1 = new QLineEdit(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(100, 40, 113, 24));
        num2 = new QLineEdit(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(230, 40, 113, 24));
        result = new QLineEdit(centralwidget);
        result->setObjectName("result");
        result->setGeometry(QRect(360, 40, 113, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 20, 61, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 20, 61, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(360, 20, 49, 16));
        Miinus = new QPushButton(centralwidget);
        Miinus->setObjectName("Miinus");
        Miinus->setGeometry(QRect(400, 140, 80, 24));
        Kerto = new QPushButton(centralwidget);
        Kerto->setObjectName("Kerto");
        Kerto->setGeometry(QRect(400, 180, 80, 24));
        Jako = new QPushButton(centralwidget);
        Jako->setObjectName("Jako");
        Jako->setGeometry(QRect(400, 220, 80, 24));
        N4 = new QPushButton(centralwidget);
        N4->setObjectName("N4");
        N4->setGeometry(QRect(100, 140, 80, 24));
        N5 = new QPushButton(centralwidget);
        N5->setObjectName("N5");
        N5->setGeometry(QRect(200, 140, 80, 24));
        N6 = new QPushButton(centralwidget);
        N6->setObjectName("N6");
        N6->setGeometry(QRect(300, 140, 80, 24));
        N7 = new QPushButton(centralwidget);
        N7->setObjectName("N7");
        N7->setGeometry(QRect(100, 180, 80, 24));
        N8 = new QPushButton(centralwidget);
        N8->setObjectName("N8");
        N8->setGeometry(QRect(200, 180, 80, 24));
        N9 = new QPushButton(centralwidget);
        N9->setObjectName("N9");
        N9->setGeometry(QRect(300, 180, 80, 24));
        N0 = new QPushButton(centralwidget);
        N0->setObjectName("N0");
        N0->setGeometry(QRect(100, 220, 80, 24));
        Clear = new QPushButton(centralwidget);
        Clear->setObjectName("Clear");
        Clear->setGeometry(QRect(200, 220, 80, 24));
        Enter = new QPushButton(centralwidget);
        Enter->setObjectName("Enter");
        Enter->setGeometry(QRect(300, 220, 80, 24));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        N1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        N2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        N3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Numero 1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Numero 2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Tulos", nullptr));
        Miinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Kerto->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        Jako->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        N4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        N5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        N6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        N7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        N8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        N9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        N0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        Enter->setText(QCoreApplication::translate("MainWindow", "Enter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
