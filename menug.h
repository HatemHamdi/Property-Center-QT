#ifndef MENUG_H
#define MENUG_H

#include <QDialog>

namespace Ui {
class menuG;
}

class menuG : public QDialog
{
    Q_OBJECT

public:
    explicit menuG(const char *i,QWidget *parent = 0);
    ~menuG();

private slots:
    void on_pushButton_2_clicked();

    void on_ajoutv_clicked();

private:
    Ui::menuG *ui;
};

#endif // MENUG_H
