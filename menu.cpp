#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "ui_menu.h"
#include <QMessageBox>

menu::menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    ui->v->hide();
    ui->l->hide();
    ui->a1->hide();
    ui->a2->hide();
    ui->a3->hide();
    ui->a4->hide();
    ui->a5->hide();
    ui->a6->hide();
    ui->a7->hide();
    ui->a8->hide();
    ui->a9->hide();
    ui->a10->hide();
    ui->a11->hide();
    ui->a12_1->hide();
    ui->a12_2->hide();
    ui->b1->hide();
    ui->b2->hide();
    ui->b3->hide();
    ui->b4->hide();
    ui->b5->hide();
    ui->b6->hide();
    ui->b7->hide();
    ui->b8->hide();
    ui->b9->hide();
    ui->b10->hide();
    ui->b11->hide();
    ui->b12->hide();
    ui->p1->hide();
    ui->v1->hide();
    ui->s1->hide();
    ui->p1_2->hide();
    ui->v1_2->hide();
    ui->s1_2->hide();
    ui->champ_2->hide();
    ui->numap_2->hide();
    ui->numtel_2->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->valider_2->hide();

    ui->champ->hide();
    ui->numap->hide();
    ui->numtel->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->valider->hide();
    ui->enregistrer->hide();
    ui->a15->hide();
    ui->a16->hide();
    ui->a12_3->hide();
    ui->c->hide();
    //ui->c->hide();
    ui->label_6->show();


    QRegExp chiffre("([0-9]){10}");
    QRegExp lettre("([a-z]){10}");


    QRegExp chiffret("([0-9]){8}");
    QRegExp lettrel("([a-z]){20}");


  //  QRegExp adresse("([a-z]),([0-9]){50}");



    ui->num->setValidator(new QRegExpValidator(chiffret, this));
    ui->b7->setValidator(new QRegExpValidator(lettre, this));
    ui->b8->setValidator(new QRegExpValidator(lettre, this));
    ui->b9->setValidator(new QRegExpValidator(chiffret, this));
    ui->b10->setValidator(new QRegExpValidator(chiffret, this));
    ui->b11->setValidator(new QRegExpValidator(lettrel, this));
    ui->b12->setValidator(new QRegExpValidator(chiffre, this));
    ui->a7->setValidator(new QRegExpValidator(lettrel, this));
    ui->a8->setValidator(new QRegExpValidator(chiffre, this));
    ui->a9->setValidator(new QRegExpValidator(chiffre, this));
    ui->a10->setValidator(new QRegExpValidator(lettre, this));
    ui->a11->setValidator(new QRegExpValidator(chiffre, this));
    ui->p1->setValidator(new QRegExpValidator(chiffre, this));
    ui->s1->setValidator(new QRegExpValidator(chiffre, this));
    ui->v1->setValidator(new QRegExpValidator(lettre, this));
    ui->numap->setValidator(new QRegExpValidator(chiffre, this));
    ui->numtel->setValidator(new QRegExpValidator(chiffre, this));
    ui->p1_2->setValidator(new QRegExpValidator(chiffre, this));
    ui->s1_2->setValidator(new QRegExpValidator(chiffre, this));
    ui->v1_2->setValidator(new QRegExpValidator(lettre, this));
    ui->numap_2->setValidator(new QRegExpValidator(chiffre, this));
    ui->numtel_2->setValidator(new QRegExpValidator(chiffre, this));



}

menu::~menu()
{
    delete ui;


}

void menu::on_verfier_clicked()
{
    ui->enregistrer->show();

    int e;
    char r[50];
    char t[50];
    char k[50];


    FILE *fp1=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/prop.txt","r");
    int w=0;

    QString ch= ui->num->text();
    const char *h = ch.toStdString().c_str();

    while(!(feof (fp1))&& w==0)
    {
        char k123[100];
        fgets(k123,100,fp1);
        sscanf(k123,"%d | %s | %s | %s",&e,r,t,k);
        if((strcmp(k,h)==0))
        {
            w=1;
            ui->v->show();
            ui->l->show();
            ui->a1->show();
            ui->a2->show();
            ui->a3->show();
            ui->a4->show();
            ui->a5->show();
            ui->a6->show();
            ui->a7->show();
            ui->a8->show();
            ui->a9->show();
            ui->a10->show();
            ui->a11->show();
            ui->a12_1->show();
            ui->a12_2->show();
            ui->b1->hide();
            ui->b2->hide();
            ui->b3->hide();
            ui->b4->hide();
            ui->b5->hide();
            ui->b6->hide();
            ui->b7->hide();
            ui->b8->hide();
            ui->b9->hide();
            ui->b10->hide();
            ui->b11->hide();
            ui->b12->hide();
        }
    }
    if(w==0)
    {
        ui->v->show();
        ui->l->show();
        ui->a1->show();
        ui->a2->show();
        ui->a3->show();
        ui->a4->show();
        ui->a5->show();
        ui->a6->show();
        ui->a7->show();
        ui->a8->show();
        ui->a9->show();
        ui->a10->show();
        ui->a11->show();
        ui->a12_1->show();
        ui->a12_2->show();
        ui->b1->show();
        ui->b2->show();
        ui->b3->show();
        ui->b4->show();
        ui->b5->show();
        ui->b6->show();
        ui->b7->show();
        ui->b8->show();
        ui->b9->show();
        ui->b10->show();
        ui->b11->show();
        ui->b12->show();
    }

    fclose(fp1);
}

void menu::on_v_clicked()
{
    ui->a5->hide();
    ui->a11->hide();
}

void menu::on_l_clicked()
{
    ui->a5->show();
    ui->a11->show();
}

void menu::on_enregistrer_clicked()
{
    int e;
    char r[50];
    char t[50];
    char k[50];

    FILE *fp1=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/prop.txt","r");
    int w=0;

    QString ch= ui->num->text();
    const char *h = ch.toStdString().c_str();

    while(!(feof (fp1))&& w==0)
    {
        char k123[100];
        fgets(k123,100,fp1);
        sscanf(k123,"%d | %s | %s | %s",&e,r,t,k);
        if((strcmp(k,h)==0))
        {
            ajouter_appartement(e);
            return;
        }
    }
    ajouter_nouveau_proprietaire();
    fclose(fp1);
}

void menu::ajouter_nouveau_proprietaire()
{

  FILE *fp2=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/id.txt","r");
  FILE *fp1=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/prop.txt","a+");
  int a;
  fscanf(fp2,"%d",&a);
  a=a+1;
  fprintf(fp1,"%d",a);
  fclose(fp2);

  QString nom= ui->b7->text();
  const char *h1 = nom.toStdString().c_str();
  //strcpy(pr.nom,h);
  fprintf(fp1," | %s",h1);


  QString prenom= ui->b8->text();
  const char *h2 = prenom.toStdString().c_str();
  //strcpy(pr.prenom,h);
  fprintf(fp1," | %s",h2);


  QString tel1= ui->b9->text();
  const char *h3 = tel1.toStdString().c_str();
  //strcpy(pr.tel1,h);
  fprintf(fp1," | %s",h3);


  QString tel2= ui->b10->text();
  const char *h4 = tel2.toStdString().c_str();
  //strcpy(pr.tel2,h);
  fprintf(fp1," | %s",h4);


  QString adresse= ui->b11->text();
  const char *h5 = adresse.toStdString().c_str();
  //strcpy(pr.adresse,h);
  fprintf(fp1," | %s",h5);


  QString code_postale= ui->b12->text();
  const char *h6 = code_postale.toStdString().c_str();
  //strcpy(pr.code_postale,h);
  fprintf(fp1," | %s",h6);

  fprintf(fp1,"\n");
  fclose(fp1);

  fp2=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/id.txt","w");
      fprintf(fp2,"%d",a);
      fclose(fp2);
      ajouter_appartement(a);
      QMessageBox::warning(0,qApp->tr("information"),qApp->tr("c bon"),QMessageBox::Close);


}


void menu::ajouter_appartement(int r)
{
    FILE * fp6=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/alouer.txt","a+");
    FILE * fp7=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/avendre.txt","a+");

       if (ui->l->isChecked())
           {
               fprintf(fp6,"%d",r);
               QString nom= ui->a7->text();
               const char *h1 = nom.toStdString().c_str();
               fprintf(fp6," | %s",h1);

               nom= ui->a8->text();
               const char *h2 = nom.toStdString().c_str();
               fprintf(fp6," | %s",h2);

               nom= ui->a9->text();
               const char *h3 = nom.toStdString().c_str();
               fprintf(fp6," | %s",h3);

               nom= ui->a10->text();
               const char *h4 = nom.toStdString().c_str();
               fprintf(fp6," | %s",h4);

               nom= ui->a11->text();
               const char *h5 = nom.toStdString().c_str();
               fprintf(fp6," | %s",h5);


               if (ui->a12_1->isChecked())
               fprintf(fp6," | o");
               else
               fprintf(fp6," | n");


               fprintf(fp6,"\n");
            }
       if (ui->v->isChecked())
       {
           fprintf(fp7,"%d",r);
           QString nom= ui->a7->text();
           const char *h1 = nom.toStdString().c_str();
           fprintf(fp7," | %s",h1);

           nom= ui->a8->text();
           const char *h2 = nom.toStdString().c_str();
           fprintf(fp7," | %s",h2);

           nom= ui->a9->text();
           const char *h3 = nom.toStdString().c_str();
           fprintf(fp7," | %s",h3);

           nom= ui->a10->text();
           const char *h4 = nom.toStdString().c_str();
           fprintf(fp7," | %s",h4);




           if (ui->a12_1->isChecked())
           fprintf(fp7," | o");
           else
           fprintf(fp7," | n");

           float x=ui->a9->text().toFloat()/20;
           fprintf(fp7," | %f",x);
           fprintf(fp7,"\n");

       }
       fclose(fp6);
       fclose(fp7);
}



void menu::on_supp_clicked()
{
    if (ui->client->isChecked())
    {
        suppc();
    }
    else


        if (ui->prop->isChecked())
        {
            suppr();
        }

    else
    if (ui->appart->isChecked())
    {
        suppa();
    }

}
void menu::suppc()
{
    FILE *fp4=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/client.txt","a+");
    char lm[200];
    char c1[50];
    char c2[50];
    char c3[50];
    char c4[50];
   QString s=ui->c->text();
   const char *ch=s.toStdString().c_str();
    FILE *f1;
    f1=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/fuppc.txt","a+");
    int x1=0,x2=0;

    while(!(feof(fp4)))
    {
        x1++;
        fgets(lm,200,fp4);
        sscanf(lm,"%s | %s | %s | %s",c1,c2,c3,c4);


        if(strcmp(ch,c3)!=0)
        {
            x2++;
            fputs(lm,f1);

        }

    }
    if (x1==x2)
    {
        QMessageBox::warning(0,qApp->tr("Erreur"),qApp->tr("mch mawjoud"),QMessageBox::Close);
        fclose(f1);
        remove("C:/Users/Hatem/Desktop/projet/Fichiers/fuppc.txt");
}
    else
    {
        fclose(fp4);
        fclose(f1);
        remove("C:/Users/Hatem/Desktop/projet/Fichiers/client.txt");
        rename("C:/Users/Hatem/Desktop/projet/Fichiers/fuppc.txt","C:/Users/Hatem/Desktop/projet/Fichiers/client.txt");
        fp4=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/client.txt","a+");
       QMessageBox::warning(0,qApp->tr("Erreur"),qApp->tr("c bon"),QMessageBox::Close);
    }
}


void menu::suppr()
{

    char lm[200];
        char c1[50];
        char c2[50];
        char c3[50];
        char c4[50];

        QString s=ui->c->text();
        const char *ch=s.toStdString().c_str();
         FILE *f1;
         f1=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/fuppc.txt","a+");
          FILE *fp1;
          fp1=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/prop.txt","a+");
          FILE *fp7=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/avendre.txt","a+");
           FILE  *fp6=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/alouer.txt","a+");

        int x1=0,x2=0;
    char azdftrh[50];

        while(!(feof(fp1)))
        {
            x1++;
            fgets(lm,200,fp1);
            sscanf(lm,"%s | %s | %s | %s",c1,c2,c3,c4);
            if(strcmp(ch,c4)!=0)
            {
                x2++;
                fputs(lm,f1);
            }
            else
                   strcpy(azdftrh,c1);

        }
        if (x1==x2)
        {
            QMessageBox::warning(0,qApp->tr("Erreur"),qApp->tr("mch mawjoud"),QMessageBox::Close);
            fclose(f1);
            remove("C:/Users/Hatem/Desktop/projet/Fichiers/fuppc.txt");
        }
        else
        {
            fclose(fp1);
            fclose(f1);



            remove("C:/Users/Hatem/Desktop/projet/Fichiers/prop.txt");
            rename("C:/Users/Hatem/Desktop/projet/Fichiers/fuppc.txt","C:/Users/Hatem/Desktop/projet/Fichiers/prop.txt");
            fp1=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/prop.txt","a+");
            QMessageBox::warning(0,qApp->tr("Erreur"),qApp->tr("c bon"),QMessageBox::Close);

           //fasa5 el alouer
            f1=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/alouer1.txt","w");
            while(!(feof(fp6)))
            {
                fgets(lm,200,fp6);
                sscanf(lm,"%s | %s",c2,c3);

                if(strcmp(azdftrh,c2)!=0)
                    fputs(lm,f1);
            }
            fclose(f1);
            fclose(fp6);
            remove("C:/Users/Hatem/Desktop/projet/Fichiers/alouer.txt");
            rename("C:/Users/Hatem/Desktop/projet/Fichiers/alouer1.txt","C:/Users/Hatem/Desktop/projet/Fichiers/alouer.txt");
            fp6=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/alouer.txt","a+");

            //fasa5 el avendre
             f1=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/avendre1.txt","a+");
            while(!(feof(fp7)))
            {
                fgets(lm,200,fp7);
                sscanf(lm,"%s | %s",c2,c3);

                if(strcmp(azdftrh,c2)!=0)
                    fputs(lm,f1);
            }
            fclose(f1);
            fclose(fp7);
            remove("C:/Users/Hatem/Desktop/projet/Fichiers/avendre.txt");
            rename("C:/Users/Hatem/Desktop/projet/Fichiers/avendre1.txt","C:/Users/Hatem/Desktop/projet/Fichiers/avendre.txt");
            fp7=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/avendre.txt","a+");

        }

}


void menu::suppa()
{

    char c1[50];
         char c2[50];
         char c3[50];
         char lm[200];


         QString s=ui->a12_3->text();
         const char *ch=s.toStdString().c_str();

         FILE *f2;
         FILE *f3;
         FILE *fp6;
         FILE *fp7;
         fp6=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/alouer.txt","a+");
         fp7=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/avendre.txt","a+");

         f2=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/bbbb.txt","a+");
         f3=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/cccc.txt","a+");


         //--------------------------------------------------
           while(!(feof(fp6)))
         {
             fgets(lm,200,fp6);
             sscanf(lm,"%s | %s | %s",c1,c2,c3);

             if(strcmp(ch,c2)!=0)
               {
                   fputs(lm,f2);


               }
                }
         fclose(f2);
         fclose(fp6);
         remove("C:/Users/Hatem/Desktop/projet/Fichiers/alouer.txt");
         rename("C:/Users/Hatem/Desktop/projet/Fichiers/bbbb.txt","C:/Users/Hatem/Desktop/projet/Fichiers/alouer.txt");
         fp6=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/alouer.txt","a+");


         //------------------------------------------------


           while(!(feof(fp7)))
         {
             fgets(lm,200,fp7);
             sscanf(lm,"%s | %s | %s",c1,c2,c3);

             if(strcmp(ch,c2)!=0)
               {
                   fputs(lm,f3);


               }
                }
         fclose(f3);
         fclose(fp7);
         remove("C:/Users/Hatem/Desktop/projet/Fichiers/avendre.txt");
         rename("C:/Users/Hatem/Desktop/projet/Fichiers/cccc.txt","C:/Users/Hatem/Desktop/projet/Fichiers/avendre.txt");
         fp7=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/avendre.txt","a+");

}








void menu::on_rechercher_clicked()
{
    ui->champ->show();
    ui->numap->show();
    ui->numtel->show();
    ui->label_2->show();
    ui->label_3->show();
    ui->valider->show();
    FILE *fp6=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/alouer.txt","r");
    QString ch="";
    QString v1=ui->v1->text();
    const char *v=v1.toStdString().c_str();

    int p=ui->p1->text().toInt();

    int s=ui->s1->text().toInt();


    if (ui->p->isChecked() && ui->ville->isChecked() && ui->s->isChecked())
    {
        ch="";

        char kjb[200];
        int a1,a6,a7,a4,a3;
        char a2[50];
        //char a3[50];
        //char a4[50];
        char a5[50];

        while(!(feof(fp6)))
        {
            fgets(kjb,200,fp6);
            sscanf(kjb,"%d | %s | %d | %d | %s | %d | %d",&a1,a2,&a3,&a4,a5,&a6,&a7);
            if((a4<=p)&&(strcmp(v,a5)==0)&&(s==a3))
            {
                ch+=QString(kjb);
                ch+="\n";
            }
        }



    }


    else if (ui->p->isChecked() && ui->ville->isChecked())
    {
ch="";

char kjb[200];
int a1,a6,a7,a4,a3;
char a2[50];
//char a3[50];
//char a4[50];
char a5[50];

while(!(feof(fp6)))
{
    fgets(kjb,200,fp6);
    sscanf(kjb,"%d | %s | %d | %d | %s | %d | %d",&a1,a2,&a3,&a4,a5,&a6,&a7);
    if((a4<=p)&&(strcmp(v,a5)==0))
    {
        ch+=QString(kjb);
        ch+="\n";
    }
}

    }
    else if (ui->p->isChecked() && ui->s->isChecked())
    {
ch="";


char kjb[200];
int a1,a6,a7,a4,a3;
char a2[50];
//char a3[50];
//char a4[50];
char a5[50];

while(!(feof(fp6)))
{
    fgets(kjb,200,fp6);
    sscanf(kjb,"%d | %s | %d | %d | %s | %d | %d",&a1,a2,&a3,&a4,a5,&a6,&a7);
    if((a4<=p)&&(s==a3))
    {
        ch+=QString(kjb);
        ch+="\n";
    }
}

    }
    else if (ui->s->isChecked() && ui->ville->isChecked())
    {
ch="";

char kjb[200];
int a1,a6,a7,a4,a3;
char a2[50];
//char a3[50];
//char a4[50];
char a5[50];

while(!(feof(fp6)))
{
    fgets(kjb,200,fp6);
    sscanf(kjb,"%d | %s | %d | %d | %s | %d | %d",&a1,a2,&a3,&a4,a5,&a6,&a7);
    if((strcmp(v,a5)==0)&&(s==a3))
    {
        ch+=QString(kjb);
        ch+="\n";
    }
}

    }


    else if (ui->p->isChecked())
    {
        ch="";
        char kjb[200];
        int a1,a6,a7,a4;
        char a2[50];
        char a3[50];
        //char a4[50];
        char a5[50];

        while(!(feof(fp6)))
        {
            fgets(kjb,200,fp6);
            sscanf(kjb,"%d | %s | %s | %d | %s | %d | %d",&a1,a2,a3,&a4,a5,&a6,&a7);
            if(a4<=p)
            {
                ch+=QString(kjb);
                ch+="\n";
            }
        }
    }
    else if (ui->ville->isChecked())
    {

        char kjb[200];
        int a1,a6;
        char a7;
        char a2[50];
        char a3[50];
        char a4[50];
        char a5[50];
        rewind(fp6);
        while(!(feof(fp6)))
        {
            fgets(kjb,200,fp6);
            sscanf(kjb,"%d | %s | %s | %s | %s | %d | %c",&a1,a2,a3,a4,a5,&a6,&a7);
            if(strcmp(v,a5)==0)
            {
                ch+=QString(kjb);
                ch+="\n";
            }
        }
        ui->champ->setText(ch);
    }
    else if (ui->s->isChecked())
    {
        ch="";
        char kjb[200];
        int a1,a6,a7;
        char a2[50];
        int a3;
        char a4[50];
        char a5[50];

        while(!(feof(fp6)))
        {
            fgets(kjb,200,fp6);
            sscanf(kjb,"%d | %s | %d | %s | %s | %d | %d",&a1,a2,&a3,a4,a5,&a6,&a7);
            if(s==a3)
            {
                ch+=QString(kjb);
                ch+="\n";
            }
        }
    }
    fclose(fp6);
    ui->champ->setText(ch);
}






void menu::on_p_clicked()
{
    ui->p1->show();



}

void menu::on_ville_clicked()
{

    ui->v1->show();


}

void menu::on_s_clicked()
{

    ui->s1->show();

}

void menu::on_valider_clicked()
{
    FILE *fp6=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/alouer.txt","r");
    FILE *fp7=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/client.txt","r");
    FILE *fp8=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/prop.txt","r");
    FILE *fp9=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/bail.txt","a+");

    QString num1=ui->numap->text();
    const char *numap=num1.toStdString().c_str();

    QString num2=ui->numtel->text();
    const char *numtel=num2.toStdString().c_str();


    char k123[100];
    char e[50];
    char r[50];
    char t[50];
    char k[50];
    char nomp[50];
    char prenomp[50];
    while(!feof(fp8))
    {
        fgets(k123,100,fp8);
        sscanf(k123,"%s | %s | %s | %s",e,r,t,k);
        if(strcmp(e,numap)==0)
        {
            strcpy(nomp,r);
            strcpy(prenomp,t);
        }
    }


    char k1234[100];
    char x[50];
    char y[50];
    char z[50];
    char nomcl[50];
    char prenomcl[50];
    while(!feof(fp7))
    {
        fgets(k1234,100,fp7);
        sscanf(k1234,"%s | %s | %s",x,y,z);
        if(strcmp(z,numtel)==0)
        {
            strcpy(nomcl,x);
            strcpy(prenomcl,y);
        }
    }


    char k12345[100];
    char p[50];
    char i[50];
    char u[50];
    char q[50];
    char n[50];
    char adr[50];
    char pr[50];
    while(!feof(fp6))
    {
        fgets(k12345,100,fp6);
        sscanf(k12345,"%s | %s | %s | %s | %s",p,i,u,q,n);
        if(strcmp(p,numap)==0)
        {
            strcpy(adr,i);
            strcpy(pr,q);
        }
    }


    fprintf(fp9,"Mr. %s %s a louer la maison d'adresse '%s' au Mr. %s %s avec le prix %s DT.\n",nomp,prenomp,adr,nomcl,prenomcl,pr);


fclose(fp6);
fclose(fp7);
fclose(fp8);
fclose(fp9);
FILE *fp1=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/alouer.txt","r");
FILE *fp=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/new.txt","w");
char s[100];
char f[100];
while (!feof(fp1))
{
    fgets(s,100,fp1);
    sscanf(s,"%s",f);
    if (strcmp(f,numap)!=0)
        fputs(s,fp);
}

fclose(fp);
fclose(fp1);

remove("C:/Users/Hatem/Desktop/projet/Fichiers/alouer.txt");
rename("C:/Users/Hatem/Desktop/projet/Fichiers/new.txt","C:/Users/Hatem/Desktop/projet/Fichiers/alouer.txt");

}

void menu::on_rechercher_2_clicked()
{
    ui->champ_2->show();
    ui->numap_2->show();
    ui->numtel_2->show();
    ui->label_4->show();
    ui->label_5->show();
    ui->valider_2->show();
    FILE *fp6=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/avendre.txt","r");
    QString ch="";
    QString v1=ui->v1_2->text();
    const char *v=v1.toStdString().c_str();

    int p=ui->p1_2->text().toInt();

    int s=ui->s1_2->text().toInt();


    if (ui->p_2->isChecked() && ui->ville_2->isChecked() && ui->s_2->isChecked())
    {
        ch="";

        char kjb[200];
        int a1,a6,a7,a4,a3;
        char a2[50];
        //char a3[50];
        //char a4[50];
        char a5[50];

        while(!(feof(fp6)))
        {
            fgets(kjb,200,fp6);
            sscanf(kjb,"%d | %s | %d | %d | %s | %d | %d",&a1,a2,&a3,&a4,a5,&a6,&a7);
            if((a4<=p)&&(strcmp(v,a5)==0)&&(s==a3))
            {
                ch+=QString(kjb);
                ch+="\n";
            }
        }



    }


    else if (ui->p_2->isChecked() && ui->ville_2->isChecked())
    {
ch="";

char kjb[200];
int a1,a6,a7,a4,a3;
char a2[50];
//char a3[50];
//char a4[50];
char a5[50];

while(!(feof(fp6)))
{
    fgets(kjb,200,fp6);
    sscanf(kjb,"%d | %s | %d | %d | %s | %d | %d",&a1,a2,&a3,&a4,a5,&a6,&a7);
    if((a4<=p)&&(strcmp(v,a5)==0))
    {
        ch+=QString(kjb);
        ch+="\n";
    }
}

    }
    else if (ui->p_2->isChecked() && ui->s_2->isChecked())
    {
ch="";


char kjb[200];
int a1,a6,a7,a4,a3;
char a2[50];
//char a3[50];
//char a4[50];
char a5[50];

while(!(feof(fp6)))
{
    fgets(kjb,200,fp6);
    sscanf(kjb,"%d | %s | %d | %d | %s | %d | %d",&a1,a2,&a3,&a4,a5,&a6,&a7);
    if((a4<=p)&&(s==a3))
    {
        ch+=QString(kjb);
        ch+="\n";
    }
}

    }
    else if (ui->s_2->isChecked() && ui->ville_2->isChecked())
    {
ch="";

char kjb[200];
int a1,a6,a7,a4,a3;
char a2[50];
//char a3[50];
//char a4[50];
char a5[50];

while(!(feof(fp6)))
{
    fgets(kjb,200,fp6);
    sscanf(kjb,"%d | %s | %d | %d | %s | %d | %d",&a1,a2,&a3,&a4,a5,&a6,&a7);
    if((strcmp(v,a5)==0)&&(s==a3))
    {
        ch+=QString(kjb);
        ch+="\n";
    }
}

    }


    else if (ui->p_2->isChecked())
    {
        ch="";
        char kjb[200];
        int a1,a6,a7,a4;
        char a2[50];
        char a3[50];
        //char a4[50];
        char a5[50];

        while(!(feof(fp6)))
        {
            fgets(kjb,200,fp6);
            sscanf(kjb,"%d | %s | %s | %d | %s | %d | %d",&a1,a2,a3,&a4,a5,&a6,&a7);
            if(a4<=p)
            {
                ch+=QString(kjb);
                ch+="\n";
            }
        }
    }
    else if (ui->ville_2->isChecked())
    {

        char kjb[200];
        int a1,a6;
        char a7;
        char a2[50];
        char a3[50];
        char a4[50];
        char a5[50];
        rewind(fp6);
        while(!(feof(fp6)))
        {
            fgets(kjb,200,fp6);
            sscanf(kjb,"%d | %s | %s | %s | %s | %d | %c",&a1,a2,a3,a4,a5,&a6,&a7);
            if(strcmp(v,a5)==0)
            {
                ch+=QString(kjb);
                ch+="\n";
            }
        }
        ui->champ_2->setText(ch);
    }
    else if (ui->s_2->isChecked())
    {
        ch="";
        char kjb[200];
        int a1,a6,a7;
        char a2[50];
        int a3;
        char a4[50];
        char a5[50];

        while(!(feof(fp6)))
        {
            fgets(kjb,200,fp6);
            sscanf(kjb,"%d | %s | %d | %s | %s | %d | %d",&a1,a2,&a3,a4,a5,&a6,&a7);
            if(s==a3)
            {
                ch+=QString(kjb);
                ch+="\n";
            }
        }
    }
    fclose(fp6);
    ui->champ_2->setText(ch);

}

void menu::on_valider_2_clicked()
{
    FILE *fp6=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/avendre.txt","r");
    FILE *fp7=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/client.txt","r");
    FILE *fp8=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/prop.txt","r");
    FILE *fp9=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/bail.txt","a+");

    QString num1=ui->numap_2->text();
    const char *numap=num1.toStdString().c_str();

    QString num2=ui->numtel_2->text();
    const char *numtel=num2.toStdString().c_str();


    char k123[100];
    char e[50];
    char r[50];
    char t[50];
    char k[50];
    char nomp[50];
    char prenomp[50];
    while(!feof(fp8))
    {
        fgets(k123,100,fp8);
        sscanf(k123,"%s | %s | %s | %s",e,r,t,k);
        if(strcmp(e,numap)==0)
        {
            strcpy(nomp,r);
            strcpy(prenomp,t);
        }
    }


    char k1234[100];
    char x[50];
    char y[50];
    char z[50];
    char nomcl[50];
    char prenomcl[50];
    while(!feof(fp7))
    {
        fgets(k1234,100,fp7);
        sscanf(k1234,"%s | %s | %s",x,y,z);
        if(strcmp(z,numtel)==0)
        {
            strcpy(nomcl,x);
            strcpy(prenomcl,y);
        }
    }


    char k12345[100];
    char p[50];
    char i[50];
    char u[50];
    char q[50];
    char n[50];
    char adr[50];
    char pr[50];
    while(!feof(fp6))
    {
        fgets(k12345,100,fp6);
        sscanf(k12345,"%s | %s | %s | %s | %s",p,i,u,q,n);
        if(strcmp(p,numap)==0)
        {
            strcpy(adr,i);
            strcpy(pr,q);
        }
    }

    fprintf(fp9,"Mr. %s %s a vendu la maison d'adresse '%s' au Mr. %s %s avec le prix %s DT.\n",nomp,prenomp,adr,nomcl,prenomcl,pr);





fclose(fp6);
fclose(fp7);
fclose(fp8);
fclose(fp9);

FILE *fp1=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/avendre.txt","r");
FILE *fp=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/new1.txt","w");
char s[100];
char f[100];
while (!feof(fp1))
{
    fgets(s,100,fp1);
    sscanf(s,"%s",f);
    if (strcmp(f,numap)!=0)
        fputs(s,fp);
}

fclose(fp);
fclose(fp1);

remove("C:/Users/Hatem/Desktop/projet/Fichiers/avendre.txt");
rename("C:/Users/Hatem/Desktop/projet/Fichiers/new1.txt","C:/Users/Hatem/Desktop/projet/Fichiers/avendre.txt");

}

void menu::on_radioButton_clicked()
{
    QString ch="";
    char s[100];
    FILE *fp=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/prop.txt","r");
    while (!feof(fp))
    {
        fgets(s,100,fp);
        ch+=QString(s)+"\n";
    }
    fclose(fp);
    ui->textEdit->setText(ch);
}

void menu::on_radioButton_2_clicked()
{

    QString ch="";
    char s[100];
    FILE *fp=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/client.txt","r");
    while (!feof(fp))
    {
        fgets(s,100,fp);
        ch+=QString(s)+"\n";
    }
    fclose(fp);
    ui->textEdit->setText(ch);
}
void menu::on_radioButton_3_clicked()
{

    QString ch="";
    char s[100];
    FILE *fp=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/avendre.txt","r");
    while (!feof(fp))
    {
        fgets(s,100,fp);
        ch+=QString(s)+"\n";
    }
    fclose(fp);
    ui->textEdit->setText(ch);
}

void menu::on_radioButton_4_clicked()
{

    QString ch="";
    char s[100];
    FILE *fp=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/alouer.txt","r");
    while (!feof(fp))
    {
        fgets(s,100,fp);
        ch+=QString(s)+"\n";
    }
    fclose(fp);
    ui->textEdit->setText(ch);
}

void menu::on_radioButton_5_clicked()
{

    QString ch="";
    char s[100];
    FILE *fp=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/bail.txt","r");
    while (!feof(fp))
    {
        fgets(s,100,fp);
        ch+=QString(s)+"\n";
    }
    fclose(fp);
    ui->textEdit->setText(ch);
}

void menu::on_radioButton_6_clicked()
{
    QString ch="";
    char s[100];
    FILE *fp=fopen("C:/Users/Hatem/Desktop/projet/Fichiers/visite.txt","r");
    while (!feof(fp))
    {
        fgets(s,100,fp);
        ch+=QString(s)+"\n";
    }
    fclose(fp);
    ui->textEdit->setText(ch);

}




void menu::on_p_2_clicked()
{
    ui->p1_2->show();

}

void menu::on_ville_2_clicked()
{
    ui->v1_2->show();

}

void menu::on_s_2_clicked()
{
    ui->s1_2->show();
}





void menu::on_client_clicked()
{
    ui->a12_3->hide();
    ui->c->show();


    ui->a16->hide();

    ui->a15->show();
}

void menu::on_prop_clicked()
{
    ui->a12_3->hide();
    ui->c->show();
    ui->a16->hide();

    ui->a15->show();

}

void menu::on_appart_clicked()
{
    ui->c->hide();
    ui->a12_3->show();
    ui->a15->hide();

    ui->a16->show();

}
