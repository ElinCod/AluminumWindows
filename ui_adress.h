/********************************************************************************
** Form generated from reading UI file 'adress.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADRESS_H
#define UI_ADRESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Adress
{
public:
    QLabel *label_13;
    QLineEdit *lineEdit;
    QLabel *label_14;
    QLabel *label_10;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_7;
    QTextEdit *textEdit;
    QSpinBox *spinBox_3;
    QLineEdit *lineEdit_5;
    QLabel *label_11;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QPushButton *Next_0;
    QLineEdit *lineEdit_3;
    QSpinBox *spinBox;
    QLabel *label_12;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_9;
    QComboBox *comboBox;
    QLabel *label_3;
    QSpinBox *spinBox_2;

    void setupUi(QDialog *Adress)
    {
        if (Adress->objectName().isEmpty())
            Adress->setObjectName(QString::fromUtf8("Adress"));
        Adress->resize(573, 573);
        label_13 = new QLabel(Adress);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(91, 61, 361, 31));
        QFont font;
        font.setBold(true);
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"font-size: 14px;"));
        lineEdit = new QLineEdit(Adress);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(91, 161, 361, 20));
        label_14 = new QLabel(Adress);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(90, 406, 311, 31));
        QFont font1;
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"font-size: 14px;"));
        label_10 = new QLabel(Adress);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(91, 381, 281, 25));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"font-size: 14px;"));
        lineEdit_7 = new QLineEdit(Adress);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(91, 91, 361, 20));
        lineEdit_2 = new QLineEdit(Adress);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(91, 211, 361, 20));
        label = new QLabel(Adress);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 573, 573));
        label->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/title.png);"));
        label_2 = new QLabel(Adress);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(91, 111, 361, 31));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"font-size: 14px;"));
        label_7 = new QLabel(Adress);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(91, 281, 201, 31));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"font-size: 14px;"));
        textEdit = new QTextEdit(Adress);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(91, 461, 371, 64));
        spinBox_3 = new QSpinBox(Adress);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setGeometry(QRect(325, 411, 70, 22));
        lineEdit_5 = new QLineEdit(Adress);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(91, 361, 113, 20));
        label_11 = new QLabel(Adress);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(325, 333, 101, 31));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"font-size: 14px;"));
        label_8 = new QLabel(Adress);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(91, 331, 201, 31));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"font-size: 14px;"));
        lineEdit_4 = new QLineEdit(Adress);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(91, 311, 113, 20));
        Next_0 = new QPushButton(Adress);
        Next_0->setObjectName(QString::fromUtf8("Next_0"));
        Next_0->setGeometry(QRect(225, 531, 91, 31));
        Next_0->setFont(font);
        Next_0->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"background-color: rgb(140,90,20);"));
        lineEdit_3 = new QLineEdit(Adress);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(91, 261, 113, 20));
        spinBox = new QSpinBox(Adress);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(325, 360, 70, 22));
        label_12 = new QLabel(Adress);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(91, 431, 201, 31));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"font-size: 14px;"));
        label_4 = new QLabel(Adress);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(91, 131, 201, 31));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"font-size: 14px;"));
        label_6 = new QLabel(Adress);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(91, 231, 201, 31));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"font-size: 14px;"));
        label_5 = new QLabel(Adress);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(91, 181, 201, 31));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"font-size: 14px;"));
        label_9 = new QLabel(Adress);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(230, 331, 101, 31));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"font-size: 14px;"));
        comboBox = new QComboBox(Adress);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(326, 385, 55, 22));
        label_3 = new QLabel(Adress);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(25, 11, 511, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(30,0,130);\n"
"font-size: 14px;"));
        label_3->setAlignment(Qt::AlignCenter);
        spinBox_2 = new QSpinBox(Adress);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setGeometry(QRect(230, 360, 70, 22));
        label->raise();
        label_13->raise();
        lineEdit->raise();
        label_14->raise();
        label_10->raise();
        lineEdit_7->raise();
        lineEdit_2->raise();
        label_2->raise();
        label_7->raise();
        textEdit->raise();
        spinBox_3->raise();
        lineEdit_5->raise();
        label_11->raise();
        label_8->raise();
        lineEdit_4->raise();
        Next_0->raise();
        lineEdit_3->raise();
        spinBox->raise();
        label_12->raise();
        label_4->raise();
        label_6->raise();
        label_5->raise();
        label_9->raise();
        comboBox->raise();
        label_3->raise();
        spinBox_2->raise();

        retranslateUi(Adress);

        QMetaObject::connectSlotsByName(Adress);
    } // setupUi

    void retranslateUi(QDialog *Adress)
    {
        Adress->setWindowTitle(QCoreApplication::translate("Adress", "Dialog", nullptr));
        label_13->setText(QCoreApplication::translate("Adress", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\276\320\274\320\265\321\200 \320\270\320\273\320\270 \321\210\320\270\321\204\321\200 \320\267\320\260\320\272\320\260\320\267\320\260:", nullptr));
        label_14->setText(QCoreApplication::translate("Adress", "\320\241\320\272\320\276\320\273\321\214\320\272\320\276 \320\272\320\276\320\274\320\275\320\260\321\202 \320\275\320\260 \320\267\320\260\320\274\320\265\321\200?", nullptr));
        label_10->setText(QCoreApplication::translate("Adress", "\320\225\321\201\321\202\321\214 \320\273\320\270 \321\203 \320\262\320\260\321\201 \320\273\320\270\321\204\321\202?", nullptr));
        lineEdit_7->setText(QString());
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Adress", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\260\320\264\321\200\320\265\321\201 \320\267\320\260\320\272\320\260\320\267\320\260:", nullptr));
        label_7->setText(QCoreApplication::translate("Adress", "\320\232\320\276\321\200\320\277\321\203\321\201", nullptr));
        label_11->setText(QCoreApplication::translate("Adress", "\320\255\321\202\320\260\320\266", nullptr));
        label_8->setText(QCoreApplication::translate("Adress", "\320\232\320\262\320\260\321\200\321\202\320\270\321\200\320\260", nullptr));
        Next_0->setText(QCoreApplication::translate("Adress", "\320\224\320\220\320\233\320\225\320\225", nullptr));
        label_12->setText(QCoreApplication::translate("Adress", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\270 \320\272 \320\267\320\260\320\272\320\260\320\267\321\203", nullptr));
        label_4->setText(QCoreApplication::translate("Adress", "\320\235\320\260\321\201\320\265\320\273\320\265\320\275\320\275\321\213\320\271 \320\277\321\203\320\275\320\272\321\202", nullptr));
        label_6->setText(QCoreApplication::translate("Adress", "\320\224\320\276\320\274", nullptr));
        label_5->setText(QCoreApplication::translate("Adress", "\320\243\320\273\320\270\321\206\320\260", nullptr));
        label_9->setText(QCoreApplication::translate("Adress", "\320\237\320\276\320\264\321\212\320\265\320\267\320\264", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Adress", "\320\225\321\201\321\202\321\214", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Adress", "\320\235\320\265\321\202", nullptr));

        label_3->setText(QCoreApplication::translate("Adress", "\"\320\227\320\264\320\265\321\201\321\214 \320\261\321\203\320\264\320\265\321\202 \320\276\321\204\320\270\321\206\320\270\320\260\320\273\321\214\320\275\320\276\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\320\270\"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adress: public Ui_Adress {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADRESS_H
