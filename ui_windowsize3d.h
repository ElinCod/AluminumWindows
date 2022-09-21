/********************************************************************************
** Form generated from reading UI file 'windowsize3d.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWSIZE3D_H
#define UI_WINDOWSIZE3D_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowSize3D
{
public:
    QLabel *label;
    QPushButton *pushButton_7;
    QLineEdit *BottomLeftSizeNum;
    QLineEdit *TopRightSizeNum;
    QPushButton *pushButton_3;
    QLineEdit *RightCenterSizeNum;
    QLabel *RightCenterSize;
    QLabel *BottomLeftSize;
    QPushButton *pushButton;
    QPushButton *pushButton_6;
    QLineEdit *LeftCenterSizeNum;
    QLabel *LeftCenterSize;
    QLineEdit *BottomCenterSizeNum;
    QLabel *BottomCenterSize;
    QPushButton *pushButton_5;
    QLineEdit *TopLeftSizeNum;
    QPushButton *pushButton_2;
    QLabel *TopHorSize;
    QLabel *TopRightSize;
    QLabel *TopLeftSize;
    QLabel *BottomRightSize;
    QPushButton *pushButton_4;
    QLineEdit *TopHorSizeNum;
    QLineEdit *BottomRightSizeNum;
    QPushButton *pushButton_8;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_13;
    QLabel *label_14;

    void setupUi(QDialog *WindowSize3D)
    {
        if (WindowSize3D->objectName().isEmpty())
            WindowSize3D->setObjectName(QString::fromUtf8("WindowSize3D"));
        WindowSize3D->resize(465, 399);
        label = new QLabel(WindowSize3D);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-23, 50, 511, 341));
        label->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/depth.png);"));
        pushButton_7 = new QPushButton(WindowSize3D);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(397, 221, 21, 18));
        pushButton_7->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/plus.svg);"));
        BottomLeftSizeNum = new QLineEdit(WindowSize3D);
        BottomLeftSizeNum->setObjectName(QString::fromUtf8("BottomLeftSizeNum"));
        BottomLeftSizeNum->setGeometry(QRect(30, 345, 61, 20));
        BottomLeftSizeNum->setAlignment(Qt::AlignCenter);
        TopRightSizeNum = new QLineEdit(WindowSize3D);
        TopRightSizeNum->setObjectName(QString::fromUtf8("TopRightSizeNum"));
        TopRightSizeNum->setGeometry(QRect(377, 84, 61, 20));
        TopRightSizeNum->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(WindowSize3D);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(50, 346, 21, 18));
        pushButton_3->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/plus.svg);"));
        RightCenterSizeNum = new QLineEdit(WindowSize3D);
        RightCenterSizeNum->setObjectName(QString::fromUtf8("RightCenterSizeNum"));
        RightCenterSizeNum->setGeometry(QRect(377, 220, 61, 20));
        RightCenterSizeNum->setAlignment(Qt::AlignCenter);
        RightCenterSize = new QLabel(WindowSize3D);
        RightCenterSize->setObjectName(QString::fromUtf8("RightCenterSize"));
        RightCenterSize->setGeometry(QRect(347, 205, 110, 51));
        RightCenterSize->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/horizontal_dimension_1.svg);"));
        BottomLeftSize = new QLabel(WindowSize3D);
        BottomLeftSize->setObjectName(QString::fromUtf8("BottomLeftSize"));
        BottomLeftSize->setGeometry(QRect(5, 316, 111, 74));
        BottomLeftSize->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/arrows-diagonal.svg);"));
        pushButton = new QPushButton(WindowSize3D);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 85, 21, 18));
        pushButton->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/plus.svg);"));
        pushButton_6 = new QPushButton(WindowSize3D);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(397, 85, 21, 18));
        pushButton_6->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/plus.svg);"));
        LeftCenterSizeNum = new QLineEdit(WindowSize3D);
        LeftCenterSizeNum->setObjectName(QString::fromUtf8("LeftCenterSizeNum"));
        LeftCenterSizeNum->setGeometry(QRect(27, 220, 61, 20));
        LeftCenterSizeNum->setAlignment(Qt::AlignCenter);
        LeftCenterSize = new QLabel(WindowSize3D);
        LeftCenterSize->setObjectName(QString::fromUtf8("LeftCenterSize"));
        LeftCenterSize->setGeometry(QRect(5, 220, 108, 21));
        LeftCenterSize->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/horizontal_dimension_1.svg);"));
        BottomCenterSizeNum = new QLineEdit(WindowSize3D);
        BottomCenterSizeNum->setObjectName(QString::fromUtf8("BottomCenterSizeNum"));
        BottomCenterSizeNum->setGeometry(QRect(207, 345, 61, 20));
        BottomCenterSizeNum->setAlignment(Qt::AlignCenter);
        BottomCenterSize = new QLabel(WindowSize3D);
        BottomCenterSize->setObjectName(QString::fromUtf8("BottomCenterSize"));
        BottomCenterSize->setGeometry(QRect(222, 317, 31, 74));
        BottomCenterSize->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/vertical_dimension_2.svg);"));
        pushButton_5 = new QPushButton(WindowSize3D);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(227, 346, 21, 18));
        pushButton_5->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/plus.svg);"));
        TopLeftSizeNum = new QLineEdit(WindowSize3D);
        TopLeftSizeNum->setObjectName(QString::fromUtf8("TopLeftSizeNum"));
        TopLeftSizeNum->setGeometry(QRect(30, 84, 60, 20));
        TopLeftSizeNum->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(WindowSize3D);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(47, 221, 21, 18));
        pushButton_2->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/plus.svg);"));
        TopHorSize = new QLabel(WindowSize3D);
        TopHorSize->setObjectName(QString::fromUtf8("TopHorSize"));
        TopHorSize->setGeometry(QRect(235, 51, 24, 86));
        TopHorSize->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/vertical_dimension_2.svg);"));
        TopRightSize = new QLabel(WindowSize3D);
        TopRightSize->setObjectName(QString::fromUtf8("TopRightSize"));
        TopRightSize->setGeometry(QRect(345, 44, 114, 103));
        TopRightSize->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/arrows-diagonal.svg);"));
        TopLeftSize = new QLabel(WindowSize3D);
        TopLeftSize->setObjectName(QString::fromUtf8("TopLeftSize"));
        TopLeftSize->setGeometry(QRect(8, 36, 108, 117));
        TopLeftSize->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/arrows-diagonal_1.svg);"));
        BottomRightSize = new QLabel(WindowSize3D);
        BottomRightSize->setObjectName(QString::fromUtf8("BottomRightSize"));
        BottomRightSize->setGeometry(QRect(350, 313, 107, 81));
        BottomRightSize->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/arrows-diagonal_1.svg);"));
        pushButton_4 = new QPushButton(WindowSize3D);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(237, 85, 21, 18));
        pushButton_4->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/plus.svg);"));
        TopHorSizeNum = new QLineEdit(WindowSize3D);
        TopHorSizeNum->setObjectName(QString::fromUtf8("TopHorSizeNum"));
        TopHorSizeNum->setGeometry(QRect(217, 84, 61, 20));
        TopHorSizeNum->setAlignment(Qt::AlignCenter);
        BottomRightSizeNum = new QLineEdit(WindowSize3D);
        BottomRightSizeNum->setObjectName(QString::fromUtf8("BottomRightSizeNum"));
        BottomRightSizeNum->setGeometry(QRect(377, 345, 61, 20));
        BottomRightSizeNum->setAlignment(Qt::AlignCenter);
        pushButton_8 = new QPushButton(WindowSize3D);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(397, 346, 21, 18));
        pushButton_8->setStyleSheet(QString::fromUtf8("image: url(:/proj/img/plus.svg);"));
        widget = new QWidget(WindowSize3D);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 491, 44));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        QFont font;
        font.setBold(true);
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
        label_14->raise();
        label_13->raise();
        BottomLeftSize->raise();
        LeftCenterSize->raise();
        BottomCenterSize->raise();
        LeftCenterSizeNum->raise();
        pushButton_2->raise();
        TopHorSize->raise();
        BottomCenterSizeNum->raise();
        TopRightSize->raise();
        TopLeftSize->raise();
        BottomRightSize->raise();
        RightCenterSize->raise();
        RightCenterSizeNum->raise();
        pushButton_7->raise();
        pushButton_5->raise();
        TopHorSizeNum->raise();
        pushButton_4->raise();
        TopRightSizeNum->raise();
        pushButton_6->raise();
        BottomLeftSizeNum->raise();
        pushButton_3->raise();
        BottomRightSizeNum->raise();
        pushButton_8->raise();
        TopLeftSizeNum->raise();
        pushButton->raise();

        retranslateUi(WindowSize3D);

        QMetaObject::connectSlotsByName(WindowSize3D);
    } // setupUi

    void retranslateUi(QDialog *WindowSize3D)
    {
        WindowSize3D->setWindowTitle(QCoreApplication::translate("WindowSize3D", "Dialog", nullptr));
        label->setText(QString());
        pushButton_7->setText(QString());
        BottomLeftSizeNum->setText(QString());
        TopRightSizeNum->setText(QString());
        pushButton_3->setText(QString());
        RightCenterSizeNum->setText(QString());
        RightCenterSize->setText(QString());
        BottomLeftSize->setText(QString());
        pushButton->setText(QString());
        pushButton_6->setText(QString());
        LeftCenterSizeNum->setText(QString());
        LeftCenterSize->setText(QString());
        BottomCenterSizeNum->setText(QString());
        BottomCenterSize->setText(QString());
        pushButton_5->setText(QString());
        TopLeftSizeNum->setText(QString());
        pushButton_2->setText(QString());
        TopHorSize->setText(QString());
        TopRightSize->setText(QString());
        TopLeftSize->setText(QString());
        BottomRightSize->setText(QString());
        pushButton_4->setText(QString());
        TopHorSizeNum->setText(QString());
        BottomRightSizeNum->setText(QString());
        pushButton_8->setText(QString());
        label_13->setText(QCoreApplication::translate("WindowSize3D", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\320\276\320\276\321\202\320\262\320\265\321\202\321\201\321\202\320\262\321\203\321\216\321\211\320\270\320\265 \321\200\320\260\320\267\320\274\320\265\321\200\321\213 \320\263\320\273\321\203\320\261\320\270\320\275\321\213", nullptr));
        label_14->setText(QCoreApplication::translate("WindowSize3D", "\320\277\320\276 \320\272\320\273\320\270\320\272\321\203 \320\275\320\260 \320\276\321\202\320\274\320\265\321\207\320\265\320\275\320\275\321\213\321\205 \320\277\320\273\320\276\321\211\320\260\320\264\320\272\320\260\321\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowSize3D: public Ui_WindowSize3D {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWSIZE3D_H
