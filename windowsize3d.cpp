#include "windowsize3d.h"
#include "ui_windowsize3d.h"

WindowSize3D::WindowSize3D(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WindowSize3D)
{
    ui->setupUi(this);
    fidi = new FinalDimensions();
    connect(fidi, &FinalDimensions::newFinalDimensions, this, &WindowSize3D::show);
    ui->TopLeftSize->setVisible(false);
    ui->TopLeftSizeNum->setVisible(false);
    ui->LeftCenterSize->setVisible(false);
    ui->LeftCenterSizeNum->setVisible(false);
    ui->BottomLeftSize->setVisible(false);
    ui->BottomLeftSizeNum->setVisible(false);
    ui->TopHorSize->setVisible(false);
    ui->TopHorSizeNum->setVisible(false);
    ui->BottomCenterSize->setVisible(false);
    ui->BottomCenterSizeNum->setVisible(false);
    ui->TopRightSize->setVisible(false);
    ui->TopRightSizeNum->setVisible(false);
    ui->RightCenterSize->setVisible(false);
    ui->RightCenterSizeNum->setVisible(false);
    ui->BottomRightSize->setVisible(false);
    ui->BottomRightSizeNum->setVisible(false);
}

WindowSize3D::~WindowSize3D()
{
    delete ui;
}

void WindowSize3D::on_Back_3_clicked() {
    this -> close();
    emit newWindowSize3D();
}

void WindowSize3D::on_Next_3_clicked()
{
    fidi -> show();
    this -> close();
}

void WindowSize3D::on_pushButton_clicked()
{
    ui->TopLeftSize->setVisible(true);
    ui->TopLeftSizeNum->setVisible(true);
    ui->pushButton->setVisible(false);
}


void WindowSize3D::on_pushButton_2_clicked()
{
    ui->LeftCenterSize->setVisible(true);
    ui->LeftCenterSizeNum->setVisible(true);
    ui->pushButton_2->setVisible(false);
}


void WindowSize3D::on_pushButton_3_clicked()
{
    ui->BottomLeftSize->setVisible(true);
    ui->BottomLeftSizeNum->setVisible(true);
    ui->pushButton_3->setVisible(false);
}


void WindowSize3D::on_pushButton_4_clicked()
{
    ui->TopHorSize->setVisible(true);
    ui->TopHorSizeNum->setVisible(true);
    ui->pushButton_4->setVisible(false);
}


void WindowSize3D::on_pushButton_5_clicked()
{
    ui->BottomCenterSize->setVisible(true);
    ui->BottomCenterSizeNum->setVisible(true);
    ui->pushButton_5->setVisible(false);
}


void WindowSize3D::on_pushButton_6_clicked()
{
    ui->TopRightSize->setVisible(true);
    ui->TopRightSizeNum->setVisible(true);
    ui->pushButton_6->setVisible(false);
}


void WindowSize3D::on_pushButton_7_clicked()
{
    ui->RightCenterSize->setVisible(true);
    ui->RightCenterSizeNum->setVisible(true);
    ui->pushButton_7->setVisible(false);
}


void WindowSize3D::on_pushButton_8_clicked()
{
    ui->BottomRightSize->setVisible(true);
    ui->BottomRightSizeNum->setVisible(true);
    ui->pushButton_8->setVisible(false);
}


void WindowSize3D::on_TopLeftSizeNum_textChanged(const QString &arg1)
{
    if(arg1!="")
    {
        ui->TopLeftSize->setVisible(true);
        ui->TopLeftSizeNum->setVisible(true);
        ui->pushButton->setVisible(false);
    }
    else
    {
        ui->TopLeftSize->setVisible(false);
        ui->TopLeftSizeNum->setVisible(false);
        ui->pushButton->setVisible(true);
    }
}


void WindowSize3D::on_LeftCenterSizeNum_textChanged(const QString &arg1)
{
    if(arg1!="")
    {
        ui->LeftCenterSize->setVisible(true);
        ui->LeftCenterSizeNum->setVisible(true);
        ui->pushButton_2->setVisible(false);
    }
    else
    {
        ui->LeftCenterSize->setVisible(false);
        ui->LeftCenterSizeNum->setVisible(false);
        ui->pushButton_2->setVisible(true);
    }
}


void WindowSize3D::on_BottomLeftSizeNum_textChanged(const QString &arg1)
{
    if(arg1!="")
    {
        ui->BottomLeftSize->setVisible(true);
        ui->BottomLeftSizeNum->setVisible(true);
        ui->pushButton_3->setVisible(false);
    }
    else
    {
        ui->BottomLeftSize->setVisible(false);
        ui->BottomLeftSizeNum->setVisible(false);
        ui->pushButton_3->setVisible(true);
    }
}


void WindowSize3D::on_TopHorSizeNum_textChanged(const QString &arg1)
{
    if(arg1!="")
    {
        ui->TopHorSize->setVisible(true);
        ui->TopHorSizeNum->setVisible(true);
        ui->pushButton_4->setVisible(false);
    }
    else
    {
        ui->TopHorSize->setVisible(false);
        ui->TopHorSizeNum->setVisible(false);
        ui->pushButton_4->setVisible(true);
    }
}


void WindowSize3D::on_BottomCenterSizeNum_textChanged(const QString &arg1)
{
    if(arg1!="")
    {
        ui->BottomCenterSize->setVisible(true);
        ui->BottomCenterSizeNum->setVisible(true);
        ui->pushButton_5->setVisible(false);
    }
    else
    {
        ui->BottomCenterSize->setVisible(false);
        ui->BottomCenterSizeNum->setVisible(false);
        ui->pushButton_5->setVisible(true);
    }
}


void WindowSize3D::on_TopRightSizeNum_textChanged(const QString &arg1)
{
    if(arg1!="")
    {
        ui->TopRightSize->setVisible(true);
        ui->TopRightSizeNum->setVisible(true);
        ui->pushButton_6->setVisible(false);
    }
    else
    {
        ui->TopRightSize->setVisible(false);
        ui->TopRightSizeNum->setVisible(false);
        ui->pushButton_6->setVisible(true);
    }
}


void WindowSize3D::on_RightCenterSizeNum_textChanged(const QString &arg1)
{
    if(arg1!="")
    {
        ui->RightCenterSize->setVisible(true);
        ui->RightCenterSizeNum->setVisible(true);
        ui->pushButton_7->setVisible(false);
    }
    else
    {
        ui->RightCenterSize->setVisible(false);
        ui->RightCenterSizeNum->setVisible(false);
        ui->pushButton_7->setVisible(true);
    }
}


void WindowSize3D::on_BottomRightSizeNum_textChanged(const QString &arg1)
{
    if(arg1!="")
    {
        ui->BottomRightSize->setVisible(true);
        ui->BottomRightSizeNum->setVisible(true);
        ui->pushButton_8->setVisible(false);
    }
    else
    {
        ui->BottomRightSize->setVisible(false);
        ui->BottomRightSizeNum->setVisible(false);
        ui->pushButton_8->setVisible(true);
    }
}

