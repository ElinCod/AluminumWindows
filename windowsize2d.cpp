#include "windowsize2d.h"
#include "ui_windowsize2d.h"

WindowSize2D::WindowSize2D(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WindowSize2D)
{
    ui->setupUi(this);
    wSize3d = new WindowSize3D();
    connect(wSize3d, &WindowSize3D::newWindowSize3D, this, &WindowSize2D::show);
    ui->TopHorSize->setVisible(false);
    ui->TopHorSizeNum->setVisible(false);
    ui->LeftVertSize->setVisible(false);
    ui->LeftVertSizeNum->setVisible(false);
    ui->CenterVertSize->setVisible(false);
    ui->CenterVertSizeNum->setVisible(false);
    ui->CenterHorSize->setVisible(false);
    ui->CenterHorSizeNum->setVisible(false);
    ui->RightVertSize->setVisible(false);
    ui->RightVertSizeNum->setVisible(false);
    ui->BottomHorSize->setVisible(false);
    ui->BottomHorSizeNum->setVisible(false);
}

WindowSize2D::~WindowSize2D()
{
    delete ui;
}

void WindowSize2D::on_Back_2_clicked() {
    this -> close();
    emit newWindowSize2D();
}

void WindowSize2D::on_Next_2_clicked()
{
    if((ui->TopHorSizeNum->text()).toFloat()!=0
            && (ui->LeftVertSizeNum->text()).toFloat()!=0
            && (ui->CenterVertSizeNum->text()).toFloat()!=0
            && (ui->CenterHorSizeNum->text()).toFloat()!=0
            && (ui->RightVertSizeNum->text()).toFloat()!=0
            && (ui->BottomHorSizeNum->text()).toFloat()!=0)
    {

        horSize_1 = (ui->TopHorSizeNum->text()).toFloat();
        horSize_2 = (ui->CenterHorSizeNum->text()).toFloat();
        horSize_3 = (ui->BottomHorSizeNum->text()).toFloat();
        vertSize_1 = (ui->LeftVertSizeNum->text()).toFloat();
        vertSize_2 = (ui->CenterVertSizeNum->text()).toFloat();
        vertSize_3 = (ui->RightVertSizeNum->text()).toFloat();

        wSize3d -> show();
        this -> close();
        ui->Attention_2->setText("");
        if(vertSize_1 <= vertSize_2)
        {
            if(vertSize_1 <= vertSize_3)
            {
                vertSize_0 = vertSize_1;
            }
            else
            {
                vertSize_0 = vertSize_3;
            }
        }
        else
        {
            if(vertSize_2 <= vertSize_3)
            {
                vertSize_0 = vertSize_2;
            }
            else
            {
                vertSize_0 = vertSize_3;
            }
        }


        if(horSize_1 <= horSize_2)
        {
            if(horSize_1 <= horSize_3)
            {
                horSize_0 = horSize_1;
            }
            else
            {
                horSize_0 = horSize_3;
            }
        }
        else
        {
            if(horSize_2 <= horSize_3)
            {
                horSize_0 = horSize_2;
            }
            else
            {
                horSize_0 = horSize_3;
            }
        }

//        horSize_0 = 0;
//        vertSize_0 = 50;

        FinalDimensions FinalDimensionsDialog;
        FinalDimensionsDialog.setData(QVariant(vertSize_0).toString(), QVariant(horSize_0).toString());
//        FinalDimensionsDialog.setData(QVariant{(vertSize_0).toString(), (horSize_0).toString()});
//        FinalDimensionsDialog.setData("dkdk");
        FinalDimensionsDialog.exec();
        FinalDimensionsDialog.hide();
    }
    else
    {
        ui->Attention_2->setText("Для продолжения ведите все размеры");
    }
}


void WindowSize2D::on_pushButton_clicked()
{
    ui->TopHorSize->setVisible(true);
    ui->TopHorSizeNum->setVisible(true);
    ui->pushButton->setVisible(false);
}


void WindowSize2D::on_pushButton_2_clicked()
{
    ui->LeftVertSize->setVisible(true);
    ui->LeftVertSizeNum->setVisible(true);
    ui->pushButton_2->setVisible(false);
}


void WindowSize2D::on_pushButton_3_clicked()
{
    ui->CenterVertSize->setVisible(true);
    ui->CenterVertSizeNum->setVisible(true);
    ui->pushButton_3->setVisible(false);
}


void WindowSize2D::on_pushButton_4_clicked()
{
    ui->CenterHorSize->setVisible(true);
    ui->CenterHorSizeNum->setVisible(true);
    ui->pushButton_4->setVisible(false);
}


void WindowSize2D::on_pushButton_5_clicked()
{
    ui->RightVertSize->setVisible(true);
    ui->RightVertSizeNum->setVisible(true);
    ui->pushButton_5->setVisible(false);
}

void WindowSize2D::on_pushButton_6_clicked()
{
    ui->BottomHorSize->setVisible(true);
    ui->BottomHorSizeNum->setVisible(true);
    ui->pushButton_6->setVisible(false);
}


void WindowSize2D::on_TopHorSizeNum_textChanged(const QString &arg1)
{
    if(arg1!="")
    {
        ui->TopHorSize->setVisible(true);
        ui->TopHorSizeNum->setVisible(true);
        ui->pushButton->setVisible(false);
    }
    else
    {
        ui->TopHorSize->setVisible(false);
        ui->TopHorSizeNum->setVisible(false);
        ui->pushButton->setVisible(true);
    }
}


void WindowSize2D::on_LeftVertSizeNum_textChanged(const QString &arg1)
{
    if(arg1!="")
    {
        ui->LeftVertSize->setVisible(true);
        ui->LeftVertSizeNum->setVisible(true);
        ui->pushButton_2->setVisible(false);
    }
    else
    {
        ui->LeftVertSize->setVisible(false);
        ui->LeftVertSizeNum->setVisible(false);
        ui->pushButton_2->setVisible(true);
    }
}


void WindowSize2D::on_CenterVertSizeNum_textChanged(const QString &arg1)
{
    if(arg1!="")
    {
        ui->CenterVertSize->setVisible(true);
        ui->CenterVertSizeNum->setVisible(true);
        ui->pushButton_3->setVisible(false);
    }
    else
    {
        ui->CenterVertSize->setVisible(false);
        ui->CenterVertSizeNum->setVisible(false);
        ui->pushButton_3->setVisible(true);
    }
}


void WindowSize2D::on_CenterHorSizeNum_textChanged(const QString &arg1)
{
    if(arg1!="")
    {
        ui->CenterHorSize->setVisible(true);
        ui->CenterHorSizeNum->setVisible(true);
        ui->pushButton_4->setVisible(false);
    }
    else
    {
        ui->CenterHorSize->setVisible(false);
        ui->CenterHorSizeNum->setVisible(false);
        ui->pushButton_4->setVisible(true);
    }
}


void WindowSize2D::on_RightVertSizeNum_textChanged(const QString &arg1)
{
    if(arg1!="")
    {
        ui->RightVertSize->setVisible(true);
        ui->RightVertSizeNum->setVisible(true);
        ui->pushButton_5->setVisible(false);
    }
    else
    {
        ui->RightVertSize->setVisible(false);
        ui->RightVertSizeNum->setVisible(false);
        ui->pushButton_5->setVisible(true);
    }
}


void WindowSize2D::on_BottomHorSizeNum_textChanged(const QString &arg1)
{
    if(arg1!="")
    {
        ui->BottomHorSize->setVisible(true);
        ui->BottomHorSizeNum->setVisible(true);
        ui->pushButton_6->setVisible(false);
    }
    else
    {
        ui->BottomHorSize->setVisible(false);
        ui->BottomHorSizeNum->setVisible(false);
        ui->pushButton_6->setVisible(true);
    }
}

