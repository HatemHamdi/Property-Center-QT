#include "menug.h"
#include "ui_menug.h"
#include "mainwindow.h"

#include <stdio.h>
#include <stdlib.h>
#include <QMessageBox>

char s[50];

menuG::menuG(const char* i,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menuG)
{
    //ui->setupUi(this);
    QRegExp chiffre("([0-9]){8}");
    QRegExp lettre("([a-z]){20}");

    ui->a4->setValidator(new QRegExpValidator(chiffre, this));
    ui->b1->setValidator(new QRegExpValidator(chiffre, this));
    ui->a1->setValidator(new QRegExpValidator(lettre, this));
    ui->a3->setValidator(new QRegExpValidator(lettre, this));
    ui->a2->setValidator(new QRegExpValidator(lettre, this));


strcpy(s,i);


}

menuG::~menuG()
{
    delete ui;
}




void menuG::on_pushButton_2_clicked()
{

     FILE *fp3=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/client.txt","a+");



        QString ch0= ui->a1->text();
        const char *h = ch0.toStdString().c_str();
        fprintf(fp3,"%s",h);

        QString ch1= ui->a2->text();
        const char *h2 = ch1.toStdString().c_str();
        fprintf(fp3," | %s",h2);

        QString ch2= ui->a3->text();
        const char *h3 = ch2.toStdString().c_str();
        fprintf(fp3," | %s",h3);

        QString ch3= ui->a4->text();
        const char *h4 = ch3.toStdString().c_str();
        fprintf(fp3," | %s",h4);


        fclose(fp3);



}

void menuG::on_ajoutv_clicked()
{
    char e[50];
    char r[50];
    int t;
    char tt[200];
    int g;
    int m=0;
     FILE *fp4=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/visite.txt","a+");
     FILE *fp3=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/client.txt","r");

     QString ch4= ui->b1->text();
    const char *h5 = ch4.toStdString().c_str();

    QString ch5= ui->date->text();
    const char *h6 = ch5.toStdString().c_str();

    g=atoi(h5);
    while(!(feof(fp3))&&(m==0))
    {
        fgets(tt,100,fp3);
        sscanf(tt,"%s | %s | %d",e,r,&t);
        if(t==g)
        {
             fprintf(fp4,"%s",s);
            fprintf(fp4," | %s",e);
            fprintf(fp4," | %s",r);



            fprintf(fp4," | %s",h6);



            QMessageBox::warning(0,qApp->tr("information"),qApp->tr("c bon :D"),QMessageBox::Close);

            fprintf(fp4,"\n");
             m=1;
            break;

        }


    }
    if(m==0)
    {
        QMessageBox::warning(0,qApp->tr("Erreur"),qApp->tr("mch mawjoud"),QMessageBox::Close);
    }

    fclose(fp4);
    fclose(fp3);

}
