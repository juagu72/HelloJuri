/********************************************************************************
** Form generated from reading UI file 'hellojuri.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOJURI_H
#define UI_HELLOJURI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloJuriClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HelloJuriClass)
    {
        if (HelloJuriClass->objectName().isEmpty())
            HelloJuriClass->setObjectName(QStringLiteral("HelloJuriClass"));
        HelloJuriClass->resize(600, 400);
        centralWidget = new QWidget(HelloJuriClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 60, 75, 23));
        HelloJuriClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HelloJuriClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        HelloJuriClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HelloJuriClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HelloJuriClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HelloJuriClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HelloJuriClass->setStatusBar(statusBar);

        retranslateUi(HelloJuriClass);

        QMetaObject::connectSlotsByName(HelloJuriClass);
    } // setupUi

    void retranslateUi(QMainWindow *HelloJuriClass)
    {
        HelloJuriClass->setWindowTitle(QApplication::translate("HelloJuriClass", "HelloJuri", 0));
        pushButton->setText(QApplication::translate("HelloJuriClass", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class HelloJuriClass: public Ui_HelloJuriClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOJURI_H
