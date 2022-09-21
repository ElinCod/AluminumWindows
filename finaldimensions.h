#ifndef FINALDIMENSIONS_H
#define FINALDIMENSIONS_H

#include <QDialog>

namespace Ui {
class FinalDimensions;
}

class FinalDimensions : public QDialog
{
    Q_OBJECT

signals:
    void newFinalDimensions();

public:
    explicit FinalDimensions(QWidget *parent = nullptr);
    void setData (const QString &labelText, const QString &labelText1);
    ~FinalDimensions();

private:
    Ui::FinalDimensions *ui;

private slots:
    void on_Back_4_clicked();
};

#endif // FINALDIMENSIONS_H
