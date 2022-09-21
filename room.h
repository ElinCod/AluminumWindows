#ifndef ROOM_H
#define ROOM_H

#include <QDialog>
#include "windowsize2d.h"

namespace Ui {
class Room;
}

class Room : public QDialog
{
    Q_OBJECT

public:
    explicit Room(QWidget *parent = nullptr);
    ~Room();

signals:
    void newRoom();

private:
    WindowSize2D *wSize2d;
    Ui::Room *ui;

private slots:
    void on_Back_1_clicked();
    void on_Next_1_clicked();
};

#endif // ROOM_H
