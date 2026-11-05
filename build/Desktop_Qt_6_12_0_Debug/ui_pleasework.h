/********************************************************************************
** Form generated from reading UI file 'pleasework.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLEASEWORK_H
#define UI_PLEASEWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PleaseWork
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PleaseWork)
    {
        if (PleaseWork->objectName().isEmpty())
            PleaseWork->setObjectName("PleaseWork");
        PleaseWork->resize(800, 600);
        centralwidget = new QWidget(PleaseWork);
        centralwidget->setObjectName("centralwidget");
        PleaseWork->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PleaseWork);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 20));
        PleaseWork->setMenuBar(menubar);
        statusbar = new QStatusBar(PleaseWork);
        statusbar->setObjectName("statusbar");
        PleaseWork->setStatusBar(statusbar);

        retranslateUi(PleaseWork);

        QMetaObject::connectSlotsByName(PleaseWork);
    } // setupUi

    void retranslateUi(QMainWindow *PleaseWork)
    {
        PleaseWork->setWindowTitle(QCoreApplication::translate("PleaseWork", "PleaseWork", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PleaseWork: public Ui_PleaseWork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLEASEWORK_H
