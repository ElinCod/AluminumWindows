/********************************************************************************
** Form generated from reading UI file 'windowsize2d.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWSIZE2D_H
#define UI_WINDOWSIZE2D_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowSize2D
{
public:
    QLabel *label;
    QLabel *LeftVertSize;
    QLabel *RightVertSize;
    QLabel *CenterVertSize;
    QLabel *TopHorSize;
    QLabel *CenterHorSize;
    QLabel *BottomHorSize;
    QLineEdit *CenterVertSizeNum;
    QLineEdit *CenterHorSizeNum;
    QLineEdit *TopHorSizeNum;
    QLineEdit *BottomHorSizeNum;
    QLineEdit *LeftVertSizeNum;
    QLineEdit *RightVertSizeNum;
    QPushButton *Back_2;
    QPushButton *Next_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *Attention_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_13;
    QLabel *label_14;

    void setupUi(QDialog *WindowSize2D)
    {
        if (WindowSize2D->objectName().isEmpty())
            WindowSize2D->setObjectName(QString::fromUtf8("WindowSize2D"));
        WindowSize2D->resize(608, 448);
        label = new QLabel(WindowSize2D);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 611, 451));
        label->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/room_size_2d.png);"));
        LeftVertSize = new QLabel(WindowSize2D);
        LeftVertSize->setObjectName(QString::fromUtf8("LeftVertSize"));
        LeftVertSize->setGeometry(QRect(174, 90, 31, 238));
        LeftVertSize->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/vertical_dimension.svg);"));
        RightVertSize = new QLabel(WindowSize2D);
        RightVertSize->setObjectName(QString::fromUtf8("RightVertSize"));
        RightVertSize->setGeometry(QRect(424, 90, 31, 240));
        RightVertSize->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/vertical_dimension.svg);"));
        CenterVertSize = new QLabel(WindowSize2D);
        CenterVertSize->setObjectName(QString::fromUtf8("CenterVertSize"));
        CenterVertSize->setGeometry(QRect(300, 90, 25, 241));
        CenterVertSize->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/vertical_dimension_1.svg);"));
        TopHorSize = new QLabel(WindowSize2D);
        TopHorSize->setObjectName(QString::fromUtf8("TopHorSize"));
        TopHorSize->setGeometry(QRect(165, 97, 293, 21));
        TopHorSize->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/horizontal_dimension.svg);"));
        CenterHorSize = new QLabel(WindowSize2D);
        CenterHorSize->setObjectName(QString::fromUtf8("CenterHorSize"));
        CenterHorSize->setGeometry(QRect(165, 211, 293, 20));
        CenterHorSize->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/horizontal_dimension.svg);"));
        BottomHorSize = new QLabel(WindowSize2D);
        BottomHorSize->setObjectName(QString::fromUtf8("BottomHorSize"));
        BottomHorSize->setGeometry(QRect(166, 300, 293, 20));
        BottomHorSize->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/horizontal_dimension.svg);"));
        CenterVertSizeNum = new QLineEdit(WindowSize2D);
        CenterVertSizeNum->setObjectName(QString::fromUtf8("CenterVertSizeNum"));
        CenterVertSizeNum->setGeometry(QRect(282, 186, 61, 20));
        CenterVertSizeNum->setAlignment(Qt::AlignCenter);
        CenterHorSizeNum = new QLineEdit(WindowSize2D);
        CenterHorSizeNum->setObjectName(QString::fromUtf8("CenterHorSizeNum"));
        CenterHorSizeNum->setGeometry(QRect(282, 210, 61, 20));
        CenterHorSizeNum->setAlignment(Qt::AlignCenter);
        TopHorSizeNum = new QLineEdit(WindowSize2D);
        TopHorSizeNum->setObjectName(QString::fromUtf8("TopHorSizeNum"));
        TopHorSizeNum->setGeometry(QRect(282, 100, 61, 20));
        TopHorSizeNum->setAlignment(Qt::AlignCenter);
        BottomHorSizeNum = new QLineEdit(WindowSize2D);
        BottomHorSizeNum->setObjectName(QString::fromUtf8("BottomHorSizeNum"));
        BottomHorSizeNum->setGeometry(QRect(282, 297, 61, 20));
        BottomHorSizeNum->setAlignment(Qt::AlignCenter);
        LeftVertSizeNum = new QLineEdit(WindowSize2D);
        LeftVertSizeNum->setObjectName(QString::fromUtf8("LeftVertSizeNum"));
        LeftVertSizeNum->setGeometry(QRect(159, 190, 61, 20));
        LeftVertSizeNum->setAlignment(Qt::AlignCenter);
        RightVertSizeNum = new QLineEdit(WindowSize2D);
        RightVertSizeNum->setObjectName(QString::fromUtf8("RightVertSizeNum"));
        RightVertSizeNum->setGeometry(QRect(408, 190, 61, 20));
        RightVertSizeNum->setAlignment(Qt::AlignCenter);
        Back_2 = new QPushButton(WindowSize2D);
        Back_2->setObjectName(QString::fromUtf8("Back_2"));
        Back_2->setGeometry(QRect(214, 400, 91, 31));
        QFont font;
        font.setBold(true);
        Back_2->setFont(font);
        Back_2->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"background-color: rgb(140,90,20);"));
        Next_2 = new QPushButton(WindowSize2D);
        Next_2->setObjectName(QString::fromUtf8("Next_2"));
        Next_2->setGeometry(QRect(324, 400, 91, 31));
        Next_2->setFont(font);
        Next_2->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"background-color: rgb(140,90,20);"));
        pushButton = new QPushButton(WindowSize2D);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(302, 101, 21, 18));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/plus.svg);"));
        pushButton_2 = new QPushButton(WindowSize2D);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 191, 21, 18));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/plus.svg);"));
        pushButton_3 = new QPushButton(WindowSize2D);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(302, 187, 21, 18));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/plus.svg);"));
        pushButton_4 = new QPushButton(WindowSize2D);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(302, 211, 21, 18));
        pushButton_4->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/plus.svg);"));
        pushButton_5 = new QPushButton(WindowSize2D);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(429, 191, 21, 18));
        pushButton_5->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/plus.svg);"));
        pushButton_6 = new QPushButton(WindowSize2D);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(302, 298, 21, 18));
        pushButton_6->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/plus.svg);"));
        Attention_2 = new QLabel(WindowSize2D);
        Attention_2->setObjectName(QString::fromUtf8("Attention_2"));
        Attention_2->setGeometry(QRect(150, 340, 324, 31));
        QFont font1;
        font1.setPointSize(12);
        Attention_2->setFont(font1);
        Attention_2->setStyleSheet(QString::fromUtf8("color: red;"));
        Attention_2->setAlignment(Qt::AlignCenter);
        widget = new QWidget(WindowSize2D);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 10, 581, 44));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"font-size: 14px;"));
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_13);

        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(60,230,150);\n"
"font-size: 14px;"));
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_14);

        label->raise();
        CenterVertSize->raise();
        CenterHorSize->raise();
        CenterVertSizeNum->raise();
        CenterHorSizeNum->raise();
        label_13->raise();
        label_14->raise();
        Back_2->raise();
        Next_2->raise();
        TopHorSize->raise();
        RightVertSize->raise();
        LeftVertSize->raise();
        BottomHorSize->raise();
        TopHorSizeNum->raise();
        pushButton->raise();
        RightVertSizeNum->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        BottomHorSizeNum->raise();
        pushButton_6->raise();
        Attention_2->raise();
        LeftVertSizeNum->raise();
        pushButton_2->raise();

        retranslateUi(WindowSize2D);

        QMetaObject::connectSlotsByName(WindowSize2D);
    } // setupUi

    void retranslateUi(QDialog *WindowSize2D)
    {
        WindowSize2D->setWindowTitle(QCoreApplication::translate("WindowSize2D", "Dialog", nullptr));
        label->setText(QString());
        LeftVertSize->setText(QString());
        RightVertSize->setText(QString());
        CenterVertSize->setText(QString());
        TopHorSize->setText(QString());
        CenterHorSize->setText(QString());
        BottomHorSize->setText(QString());
        CenterVertSizeNum->setText(QString());
        CenterHorSizeNum->setText(QString());
        TopHorSizeNum->setText(QString());
        BottomHorSizeNum->setText(QString());
        LeftVertSizeNum->setText(QString());
        RightVertSizeNum->setText(QString());
        Back_2->setText(QCoreApplication::translate("WindowSize2D", "\320\235\320\220\320\227\320\220\320\224", nullptr));
        Next_2->setText(QCoreApplication::translate("WindowSize2D", "\320\240\320\220\320\241\320\247\320\225\320\242", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        Attention_2->setText(QString());
        label_13->setText(QCoreApplication::translate("WindowSize2D", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\321\203\321\216\321\211\320\270\320\265 \321\200\320\260\320\267\320\274\320\265\321\200\321\213 \320\277\320\276 \320\272\320\273\320\270\320\272\321\203", nullptr));
        label_14->setText(QCoreApplication::translate("WindowSize2D", "\320\275\320\260 \320\276\321\202\320\274\320\265\321\207\320\265\320\275\320\275\321\213\321\205 \320\277\320\273\320\276\321\211\320\260\320\264\320\272\320\260\321\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowSize2D: public Ui_WindowSize2D {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWSIZE2D_H
