#ifndef NUMROOM_H
#define NUMROOM_H

#include <QDialog>

namespace Ui {
class NumRoom;
}

class NumRoom : public QDialog
{
    Q_OBJECT

public:
    explicit NumRoom(QWidget *parent = nullptr);
    ~NumRoom();

signals:
    void newNumRoom();

private:
    Ui::NumRoom *ui;
};

#endif // NUMROOM_H
