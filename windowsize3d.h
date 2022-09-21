#ifndef WINDOWSIZE3D_H
#define WINDOWSIZE3D_H

#include <QDialog>
#include "finaldimensions.h"

namespace Ui {
class WindowSize3D;
}

class WindowSize3D : public QDialog
{
    Q_OBJECT

signals:
    void newWindowSize3D();

public:
    explicit WindowSize3D(QWidget *parent = nullptr);
    ~WindowSize3D();

private:
    Ui::WindowSize3D *ui;
    FinalDimensions *fidi;

private slots:
    void on_Back_3_clicked();
    void on_Next_3_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_8_clicked();
    void on_TopLeftSizeNum_textChanged(const QString &arg1);
    void on_LeftCenterSizeNum_textChanged(const QString &arg1);
    void on_BottomLeftSizeNum_textChanged(const QString &arg1);
    void on_TopHorSizeNum_textChanged(const QString &arg1);
    void on_BottomCenterSizeNum_textChanged(const QString &arg1);
    void on_TopRightSizeNum_textChanged(const QString &arg1);
    void on_RightCenterSizeNum_textChanged(const QString &arg1);
    void on_BottomRightSizeNum_textChanged(const QString &arg1);
};

#endif // WINDOWSIZE3D_H
