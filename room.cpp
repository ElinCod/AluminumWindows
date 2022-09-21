#include "room.h"
#include "ui_room.h"

Room::Room(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Room)
{
    ui->setupUi(this);
    wSize2d = new WindowSize2D();
    connect(wSize2d, &WindowSize2D::newWindowSize2D, this, &Room::show);
}

Room::~Room()
{
    delete ui;
}

void Room::on_Back_1_clicked() {
    this -> close();
    emit newRoom();
}

void Room::on_Next_1_clicked()
{
    wSize2d -> show();
    this -> close();
}
