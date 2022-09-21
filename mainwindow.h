#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "room.h"
#include "adress.h"
#include "numroom.h"
#include "finaldimensions.h"
#include "windowsize2d.h"
#include "windowsize3d.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    float mvertSize_0, mvertSize_1, mvertSize_2, mvertSize_3, mhorSize_0, mhorSize_1, mhorSize_2, mhorSize_3;
    ~MainWindow();

private slots:
    void on_Next_0_clicked();

    void on_action_7_triggered();

    void on_action_triggered();

    void on_action_3_triggered();

    void on_action_4_triggered();

    void on_action_5_triggered();

    void on_action_9_triggered();

    void on_action_10_triggered();

private:
    Ui::MainWindow *ui;
    Room *ChangeRoom;
    Adress *ChangeAdress;
    NumRoom *ChangeNumRoom;
    WindowSize2D *ChangeWindowSize2D;
    WindowSize3D *ChangeWindowSize3D;
    FinalDimensions *ChangeFinalDimensions;
};
#endif // MAINWINDOW_H
