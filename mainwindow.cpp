#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ChangeRoom = new Room();
    connect(ChangeRoom, &Room::newRoom, this, &MainWindow::show);
    ChangeAdress = new Adress();
    connect(ChangeAdress, &Adress::newAdress, this, &MainWindow::show);
    ChangeNumRoom = new NumRoom();
    connect(ChangeNumRoom, &NumRoom::newNumRoom, this, &MainWindow::show);
    ChangeWindowSize2D = new WindowSize2D();
    connect(ChangeWindowSize2D, &WindowSize2D::newWindowSize2D, this, &MainWindow::show);
    ChangeWindowSize3D = new WindowSize3D();
    connect(ChangeWindowSize3D, &WindowSize3D::newWindowSize3D, this, &MainWindow::show);
    ChangeFinalDimensions = new FinalDimensions();
    connect(ChangeFinalDimensions, &FinalDimensions::newFinalDimensions, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Next_0_clicked()
{
    ChangeRoom -> show();
//    this -> close();
}


void MainWindow::on_action_7_triggered()
{
    QApplication::quit();
}


void MainWindow::on_action_triggered()
{
    ChangeAdress -> show();
}


void MainWindow::on_action_3_triggered()
{
    ChangeNumRoom -> show();
}


void MainWindow::on_action_4_triggered()
{
    ChangeRoom -> show();
}


void MainWindow::on_action_5_triggered()
{
    ChangeWindowSize2D -> show();
}


void MainWindow::on_action_9_triggered()
{
    ChangeWindowSize3D -> show();
}


void MainWindow::on_action_10_triggered()
{
    ChangeFinalDimensions -> show();
}

