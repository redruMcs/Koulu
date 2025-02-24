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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *LisaaNappi;
    QPushButton *ResetNappi;
    QLineEdit *numeroNaytto;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(284, 133);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        LisaaNappi = new QPushButton(centralwidget);
        LisaaNappi->setObjectName("LisaaNappi");
        LisaaNappi->setGeometry(QRect(40, 20, 80, 24));
        ResetNappi = new QPushButton(centralwidget);
        ResetNappi->setObjectName("ResetNappi");
        ResetNappi->setGeometry(QRect(40, 80, 80, 24));
        numeroNaytto = new QLineEdit(centralwidget);
        numeroNaytto->setObjectName("numeroNaytto");
        numeroNaytto->setGeometry(QRect(150, 50, 81, 24));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        LisaaNappi->setText(QCoreApplication::translate("MainWindow", "Count", nullptr));
        ResetNappi->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        numeroNaytto->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
