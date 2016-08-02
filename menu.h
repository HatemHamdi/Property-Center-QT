#ifndef MENU_H
#define MENU_H

#include <QMainWindow>

namespace Ui {
class menu;
}

class menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = 0);
    ~menu();

private slots:
    void on_verfier_clicked();

    void on_v_clicked();

    void on_l_clicked();

    void on_enregistrer_clicked();

    void ajouter_nouveau_proprietaire();

    void ajouter_appartement(int r);

    void on_supp_clicked();

void suppc();

void suppr();

void suppa();


void on_rechercher_clicked();




void on_p_clicked();

void on_ville_clicked();

void on_s_clicked();

void on_valider_clicked();

void on_rechercher_2_clicked();

void on_valider_2_clicked();

void on_radioButton_clicked();

void on_radioButton_2_clicked();

void on_radioButton_3_clicked();

void on_radioButton_4_clicked();

void on_radioButton_5_clicked();

void on_radioButton_6_clicked();

void on_p_2_clicked();

void on_ville_2_clicked();

void on_s_2_clicked();



void on_client_clicked();

void on_prop_clicked();

void on_appart_clicked();

private:
    Ui::menu *ui;
};

#endif // MENU_H
