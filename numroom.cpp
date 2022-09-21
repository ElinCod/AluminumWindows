#include "numroom.h"
#include "ui_numroom.h"

NumRoom::NumRoom(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NumRoom)
{
    ui->setupUi(this);
}

NumRoom::~NumRoom()
{
    delete ui;
}
