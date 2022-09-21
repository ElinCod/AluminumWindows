/********************************************************************************
** Form generated from reading UI file 'numroom.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMROOM_H
#define UI_NUMROOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NumRoom
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QLabel *label_14;

    void setupUi(QDialog *NumRoom)
    {
        if (NumRoom->objectName().isEmpty())
            NumRoom->setObjectName(QString::fromUtf8("NumRoom"));
        NumRoom->resize(394, 72);
        layoutWidget = new QWidget(NumRoom);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 371, 47));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 1);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QFont font;
        font.setBold(false);
        font.setKerning(true);
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"font-size: 14px;"));

        gridLayout->addWidget(label_14, 0, 0, 1, 1);


        retranslateUi(NumRoom);

        QMetaObject::connectSlotsByName(NumRoom);
    } // setupUi

    void retranslateUi(QDialog *NumRoom)
    {
        NumRoom->setWindowTitle(QCoreApplication::translate("NumRoom", "Dialog", nullptr));
        label_14->setText(QCoreApplication::translate("NumRoom", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\276\320\274\320\275\320\260\321\202 \320\275\320\260 \320\267\320\260\320\274\320\265\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NumRoom: public Ui_NumRoom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMROOM_H
