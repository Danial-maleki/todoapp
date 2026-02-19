/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAS;
    QAction *actionEit;
    QAction *actionAdd;
    QAction *actionRemove;
    QAction *actionClear;
    QAction *actionSelect_all;
    QAction *actionSelect_none;
    QAction *actionChecked;
    QAction *actionUnchecked;
    QAction *actionPartially;
    QWidget *centralwidget;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QMenu *menuFiles;
    QMenu *menuItems;
    QMenu *menuState;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/files/images/Unttitled.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/files/images/open_in_new_24dp_E3E3E3_FILL0_wght400_GRAD0_opsz24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/files/images/images.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSaveAS = new QAction(MainWindow);
        actionSaveAS->setObjectName(QString::fromUtf8("actionSaveAS"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/files/images/save_as_24dp_E3E3E3_FILL0_wght400_GRAD0_opsz24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAS->setIcon(icon3);
        actionEit = new QAction(MainWindow);
        actionEit->setObjectName(QString::fromUtf8("actionEit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/files/images/Untitlesdfd.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEit->setIcon(icon4);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/files/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd->setIcon(icon5);
        actionRemove = new QAction(MainWindow);
        actionRemove->setObjectName(QString::fromUtf8("actionRemove"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/files/images/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemove->setIcon(icon6);
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/files/images/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon7);
        actionSelect_all = new QAction(MainWindow);
        actionSelect_all->setObjectName(QString::fromUtf8("actionSelect_all"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/files/images/selectall.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_all->setIcon(icon8);
        actionSelect_none = new QAction(MainWindow);
        actionSelect_none->setObjectName(QString::fromUtf8("actionSelect_none"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/files/images/selectnone.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSelect_none->setIcon(icon9);
        actionChecked = new QAction(MainWindow);
        actionChecked->setObjectName(QString::fromUtf8("actionChecked"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/files/images/Untitled.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChecked->setIcon(icon10);
        actionUnchecked = new QAction(MainWindow);
        actionUnchecked->setObjectName(QString::fromUtf8("actionUnchecked"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/files/images/Untitleasdd.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnchecked->setIcon(icon11);
        actionPartially = new QAction(MainWindow);
        actionPartially->setObjectName(QString::fromUtf8("actionPartially"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/files/images/Partially.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPartially->setIcon(icon12);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 40, 751, 451));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menuFiles = new QMenu(menubar);
        menuFiles->setObjectName(QString::fromUtf8("menuFiles"));
        menuItems = new QMenu(menubar);
        menuItems->setObjectName(QString::fromUtf8("menuItems"));
        menuState = new QMenu(menubar);
        menuState->setObjectName(QString::fromUtf8("menuState"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFiles->menuAction());
        menubar->addAction(menuItems->menuAction());
        menubar->addAction(menuState->menuAction());
        menuFiles->addAction(actionNew);
        menuFiles->addAction(actionOpen);
        menuFiles->addSeparator();
        menuFiles->addAction(actionSave);
        menuFiles->addAction(actionSaveAS);
        menuFiles->addSeparator();
        menuFiles->addAction(actionEit);
        menuItems->addAction(actionAdd);
        menuItems->addAction(actionRemove);
        menuItems->addSeparator();
        menuItems->addAction(actionClear);
        menuItems->addSeparator();
        menuItems->addAction(actionSelect_all);
        menuItems->addAction(actionSelect_none);
        menuState->addAction(actionChecked);
        menuState->addAction(actionUnchecked);
        menuState->addAction(actionPartially);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSaveAS);
        toolBar->addSeparator();
        toolBar->addAction(actionAdd);
        toolBar->addAction(actionRemove);
        toolBar->addSeparator();
        toolBar->addAction(actionChecked);
        toolBar->addAction(actionUnchecked);
        toolBar->addAction(actionPartially);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSaveAS->setText(QCoreApplication::translate("MainWindow", "SaveAS", nullptr));
        actionEit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionAdd->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        actionRemove->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        actionClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        actionSelect_all->setText(QCoreApplication::translate("MainWindow", "Select all", nullptr));
        actionSelect_none->setText(QCoreApplication::translate("MainWindow", "Select none", nullptr));
        actionChecked->setText(QCoreApplication::translate("MainWindow", "Checked", nullptr));
        actionUnchecked->setText(QCoreApplication::translate("MainWindow", "Unchecked", nullptr));
        actionPartially->setText(QCoreApplication::translate("MainWindow", "Partially", nullptr));
        menuFiles->setTitle(QCoreApplication::translate("MainWindow", "Files", nullptr));
        menuItems->setTitle(QCoreApplication::translate("MainWindow", "Items", nullptr));
        menuState->setTitle(QCoreApplication::translate("MainWindow", "State", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
