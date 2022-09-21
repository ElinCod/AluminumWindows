/********************************************************************************
** Form generated from reading UI file 'room.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOM_H
#define UI_ROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Room
{
public:
    QLabel *label;
    QPushButton *Next_1;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *Back_1;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_14;
    QLabel *label_15;

    void setupUi(QDialog *Room)
    {
        if (Room->objectName().isEmpty())
            Room->setObjectName(QString::fromUtf8("Room"));
        Room->resize(451, 462);
        label = new QLabel(Room);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 431, 431));
        label->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/first_room.png);"));
        Next_1 = new QPushButton(Room);
        Next_1->setObjectName(QString::fromUtf8("Next_1"));
        Next_1->setGeometry(QRect(220, 410, 91, 31));
        QFont font;
        font.setBold(true);
        Next_1->setFont(font);
        Next_1->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"background-color: rgb(140,90,20);"));
        lineEdit = new QLineEdit(Room);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 70, 51, 31));
        QFont font1;
        font1.setPointSize(14);
        lineEdit->setFont(font1);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(Room);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 230, 51, 31));
        lineEdit_2->setFont(font1);
        lineEdit_2->setAlignment(Qt::AlignCenter);
        lineEdit_3 = new QLineEdit(Room);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(370, 230, 51, 31));
        lineEdit_3->setFont(font1);
        lineEdit_3->setAlignment(Qt::AlignCenter);
        lineEdit_4 = new QLineEdit(Room);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(185, 370, 51, 31));
        lineEdit_4->setFont(font1);
        lineEdit_4->setAlignment(Qt::AlignCenter);
        Back_1 = new QPushButton(Room);
        Back_1->setObjectName(QString::fromUtf8("Back_1"));
        Back_1->setGeometry(QRect(110, 410, 91, 31));
        Back_1->setFont(font);
        Back_1->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"background-color: rgb(140,90,20);"));
        widget = new QWidget(Room);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 451, 44));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"font-size: 14px;"));
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_14);

        label_15 = new QLabel(widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"font-size: 14px;"));
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_15);


        retranslateUi(Room);

        QMetaObject::connectSlotsByName(Room);
    } // setupUi

    void retranslateUi(QDialog *Room)
    {
        Room->setWindowTitle(QCoreApplication::translate("Room", "Dialog", nullptr));
        label->setText(QString());
        Next_1->setText(QCoreApplication::translate("Room", "\320\224\320\220\320\233\320\225\320\225", nullptr));
        lineEdit->setText(QCoreApplication::translate("Room", "2", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("Room", "3", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("Room", "3", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("Room", "1", nullptr));
        Back_1->setText(QCoreApplication::translate("Room", "\320\235\320\220\320\227\320\220\320\224", nullptr));
        label_14->setText(QCoreApplication::translate("Room", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\276\320\272\320\276\320\275", nullptr));
        label_15->setText(QCoreApplication::translate("Room", "\320\275\320\260 \320\272\320\260\320\266\320\264\320\276\320\271 \321\201\321\202\320\276\321\200\320\276\320\275\320\265 \320\272\320\276\320\274\320\275\320\276\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Room: public Ui_Room {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOM_H
