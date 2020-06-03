/********************************************************************************
** Form generated from reading UI file 'doodlejump.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOODLEJUMP_H
#define UI_DOODLEJUMP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DoodleJump
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DoodleJump)
    {
        if (DoodleJump->objectName().isEmpty())
            DoodleJump->setObjectName(QString::fromUtf8("DoodleJump"));
        DoodleJump->resize(800, 600);
        centralwidget = new QWidget(DoodleJump);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        DoodleJump->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DoodleJump);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        DoodleJump->setMenuBar(menubar);
        statusbar = new QStatusBar(DoodleJump);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DoodleJump->setStatusBar(statusbar);

        retranslateUi(DoodleJump);

        QMetaObject::connectSlotsByName(DoodleJump);
    } // setupUi

    void retranslateUi(QMainWindow *DoodleJump)
    {
        DoodleJump->setWindowTitle(QCoreApplication::translate("DoodleJump", "DoodleJump", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DoodleJump: public Ui_DoodleJump {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOODLEJUMP_H
