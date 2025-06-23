/********************************************************************************
** Form generated from reading UI file 'alarmclock.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALARMCLOCK_H
#define UI_ALARMCLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alarmclock
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *alarmclock)
    {
        if (alarmclock->objectName().isEmpty())
            alarmclock->setObjectName("alarmclock");
        alarmclock->resize(800, 600);
        centralwidget = new QWidget(alarmclock);
        centralwidget->setObjectName("centralwidget");
        alarmclock->setCentralWidget(centralwidget);
        menubar = new QMenuBar(alarmclock);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        alarmclock->setMenuBar(menubar);
        statusbar = new QStatusBar(alarmclock);
        statusbar->setObjectName("statusbar");
        alarmclock->setStatusBar(statusbar);

        retranslateUi(alarmclock);

        QMetaObject::connectSlotsByName(alarmclock);
    } // setupUi

    void retranslateUi(QMainWindow *alarmclock)
    {
        alarmclock->setWindowTitle(QCoreApplication::translate("alarmclock", "alarmclock", nullptr));
    } // retranslateUi

};

namespace Ui {
    class alarmclock: public Ui_alarmclock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALARMCLOCK_H
