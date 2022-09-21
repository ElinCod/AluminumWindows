/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
    QAction *action_9;
    QAction *action_10;
    QWidget *centralwidget;
    QPushButton *Next_0;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(570, 593);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QString::fromUtf8("action_8"));
        action_9 = new QAction(MainWindow);
        action_9->setObjectName(QString::fromUtf8("action_9"));
        action_10 = new QAction(MainWindow);
        action_10->setObjectName(QString::fromUtf8("action_10"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Next_0 = new QPushButton(centralwidget);
        Next_0->setObjectName(QString::fromUtf8("Next_0"));
        Next_0->setGeometry(QRect(20, 40, 91, 31));
        QFont font;
        font.setBold(true);
        Next_0->setFont(font);
        Next_0->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"background-color: rgb(140,90,20);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 571, 581));
        label->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/title.png);"));
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        Next_0->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 570, 17));
        menubar->setFont(font);
        menubar->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"background-color: rgb(140,90,20);"));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_7);
        menu->addAction(action_8);
        menu_2->addAction(action_3);
        menu_2->addAction(action_4);
        menu_2->addAction(action_5);
        menu_2->addAction(action_9);
        menu_3->addAction(action_6);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\275\320\276\320\262\321\213\320\271", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\201\321\203\321\211\320\265\321\201\321\202\320\262\321\203\321\216\321\211\320\270\320\271", nullptr));
        action_3->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\276\320\274\320\275\320\260\321\202", nullptr));
        action_4->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\276\320\272\320\276\320\275 \320\262 \320\272\320\276\320\274\320\275\320\260\321\202\320\260\321\205", nullptr));
        action_5->setText(QCoreApplication::translate("MainWindow", "\320\250\320\270\321\200\320\270\320\275\320\260 \320\270 \320\262\321\213\321\201\320\276\321\202\320\260 \320\276\320\272\320\276\320\275", nullptr));
        action_6->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276 \321\202\320\265\320\272\321\203\321\211\320\265\320\274\321\203 \320\276\320\272\320\275\321\203", nullptr));
        action_7->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
        action_8->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        action_8->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_9->setText(QCoreApplication::translate("MainWindow", "\320\223\320\273\321\203\320\261\320\270\320\275\320\260 \320\276\320\272\320\276\320\275", nullptr));
        action_10->setText(QCoreApplication::translate("MainWindow", "\320\230\321\202\320\276\320\263\320\276\320\262\321\213\320\265 \321\200\320\260\320\267\320\274\320\265\321\200\321\213 \320\276\320\272\320\275\320\260", nullptr));
        Next_0->setText(QCoreApplication::translate("MainWindow", "\320\224\320\220\320\233\320\225\320\225", nullptr));
        label->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\320\260\320\267", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\203\321\211\320\265\320\265", nullptr));
        menu_3->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\202\320\265\321\200\320\270\320\260\320\273\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
