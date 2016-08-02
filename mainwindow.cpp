#include <QMessageBox>
#include <stdio.h>
#include <stdlib.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"
#include "menug.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ok_clicked()
{
    QString ch= ui->k->text();
    const char *i = ch.toStdString().c_str();


    FILE *fp9;
    fp9=fopen("C:/Users/Hatem/Desktop/radhi/Fichiers/gerant.txt","r");
    int z=0;
    char x[50];

    while(!(feof(fp9)))
    {
        fscanf(fp9,"%s",x);
        z++;
        if((strcmp(x,i)==0))
            break;
    }
    if (strcmp(x,i)==0)

    {
        if(z==1)
        {
        QMessageBox::information(0,qApp->tr("Information"),qApp->tr("Welcome Boss"),QMessageBox::Close);
        menu *m= new menu();
        setCentralWidget(m);
        }
        else
        {

            QMessageBox::information(0,qApp->tr("Information"),qApp->tr("Welcome Gerant"),QMessageBox::Close);
            menuG *m= new menuG(i);
            setCentralWidget(m);

        }

    }
    else
        QMessageBox::warning(0,qApp->tr("Erreur"),qApp->tr(i),QMessageBox::Close);


    fclose(fp9);
}
