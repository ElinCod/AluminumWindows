#ifndef WINDOWSIZE2D_H
#define WINDOWSIZE2D_H

#include <QDialog>
#include "windowsize3d.h"
#include "finaldimensions.h"

namespace Ui {
class WindowSize2D;
}

class WindowSize2D : public QDialog
{
    Q_OBJECT

signals:
    void newWindowSize2D();

public:
    explicit WindowSize2D(QWidget *parent = nullptr);
    float vertSize_0, vertSize_1, vertSize_2, vertSize_3, horSize_0, horSize_1, horSize_2, horSize_3;
    ~WindowSize2D();

private:
    Ui::WindowSize2D *ui;
    WindowSize3D *wSize3d;
    FinalDimensions *fidi;


private slots:
    void on_Back_2_clicked();
    void on_Next_2_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_5_clicked();
    void on_TopHorSizeNum_textChanged(const QString &arg1);
    void on_LeftVertSizeNum_textChanged(const QString &arg1);
    void on_CenterVertSizeNum_textChanged(const QString &arg1);
    void on_CenterHorSizeNum_textChanged(const QString &arg1);
    void on_RightVertSizeNum_textChanged(const QString &arg1);
    void on_BottomHorSizeNum_textChanged(const QString &arg1);
};


#endif // WINDOWSIZE2D_H
