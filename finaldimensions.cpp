#include "finaldimensions.h"
#include "ui_finaldimensions.h"

FinalDimensions::FinalDimensions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FinalDimensions)
{
    ui->setupUi(this);    
//    ui->showVertSize->setText(QVariant(vertSize_0).toString());
}

FinalDimensions::~FinalDimensions()
{
    delete ui;
}


void FinalDimensions::on_Back_4_clicked() {
    this -> close();
    emit newFinalDimensions();
}

void FinalDimensions::setData(const QString &labelText, const QString &labelText1) {
  ui->showVertSize->setText(labelText);
  ui->showHorSize->setText(labelText1);
  ui->lineEdit->setText(QVariant(labelText1.toFloat()-26).toString());
  ui->lineEdit_2->setText(QVariant(labelText1.toFloat()-26).toString());
  ui->lineEdit_3->setText(labelText);
  ui->lineEdit_4->setText(QVariant((labelText1.toFloat()-28)/2).toString());
  ui->lineEdit_5->setText(QVariant(labelText.toFloat()-59).toString());
  ui->lineEdit_6->setText(QVariant(labelText.toFloat()-59).toString());
  ui->lineEdit_7->setText(QVariant(labelText1.toFloat()+92).toString());
  ui->lineEdit_34->setText(QVariant(labelText.toFloat()+92).toString());
  ui->lineEdit_8->setText(QVariant((labelText1.toFloat()-28)/2-52).toString());
  ui->lineEdit_37->setText(QVariant(labelText.toFloat()-59-88).toString());
  ui->lineEdit_17->setText(ui->lineEdit->text());
  ui->lineEdit_18->setText(ui->lineEdit_2->text());
  ui->lineEdit_23->setText(QVariant(((ui->lineEdit_3->text()).toFloat())*2).toString());
  ui->lineEdit_19->setText(QVariant(((ui->lineEdit_4->text()).toFloat())*4).toString());
  ui->lineEdit_22->setText(QVariant(((ui->lineEdit_5->text()).toFloat())*2).toString());
  ui->lineEdit_21->setText(QVariant(((ui->lineEdit_6->text()).toFloat())*2).toString());
  ui->lineEdit_32->setText(QVariant(((ui->lineEdit_7->text()).toFloat())*2).toString());
  ui->lineEdit_20->setText(QVariant(((ui->lineEdit_34->text()).toFloat())*2).toString());
  ui->lineEdit_38->setText(QVariant(((ui->lineEdit_17->text()).toFloat())*((ui->lineEdit_25->text()).toFloat())/1000
                                    + ((ui->lineEdit_18->text()).toFloat())*((ui->lineEdit_26->text()).toFloat())/1000
                                    + ((ui->lineEdit_23->text()).toFloat())*((ui->lineEdit_31->text()).toFloat())/1000
                                    + ((ui->lineEdit_19->text()).toFloat())*((ui->lineEdit_27->text()).toFloat())/1000
                                    + ((ui->lineEdit_22->text()).toFloat())*((ui->lineEdit_30->text()).toFloat())/1000
                                    + ((ui->lineEdit_21->text()).toFloat())*((ui->lineEdit_29->text()).toFloat())/1000
                                    + ((ui->lineEdit_32->text()).toFloat())*((ui->lineEdit_36->text()).toFloat())/1000
                                    + ((ui->lineEdit_20->text()).toFloat())*((ui->lineEdit_36->text()).toFloat())/1000).toString());


//  ui->showHorSize->setText(labelText1);
}
