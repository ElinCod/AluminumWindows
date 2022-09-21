#ifndef ADRESS_H
#define ADRESS_H

#include <QDialog>

namespace Ui {
class Adress;
}

class Adress : public QDialog
{
    Q_OBJECT

public:
    explicit Adress(QWidget *parent = nullptr);
    ~Adress();

signals:
    void newAdress();

private:
    Ui::Adress *ui;
};

#endif // ADRESS_H
