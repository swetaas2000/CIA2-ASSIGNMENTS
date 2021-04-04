#include "cia2_swetaa_212218104169.h"
#include "ui_cia2_swetaa_212218104169.h"
#include<QMessageBox>
#include<QtCore>
#include<QtGui>
#include<QDebug>
Cia2_swetaa_212218104169::Cia2_swetaa_212218104169(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Cia2_swetaa_212218104169)
{
    ui->setupUi(this);
    ui->pushButton->setIcon(QIcon("C:/Users/swetaa/OneDrive/Documents/Cia2swetaa/on.jpeg"));
    ui->pushButton->setCheckable(true);
    QAction *a1=new QAction;
    QAction *a2=new QAction;
    QAction *a3=new QAction;
    a1->setText("First");
    a2->setText("Second");
    a3->setText("Third");
    QMenu *menu=new QMenu;
    menu->addAction(a1);
    menu->addAction(a2);
    menu->addAction(a3);
    ui->pushButton_2->setMenu(menu);


}

Cia2_swetaa_212218104169::~Cia2_swetaa_212218104169()
{
    delete ui;
}




void Cia2_swetaa_212218104169::on_pushButton_toggled(bool checked)
{
    if(checked)
    {
        ui->pushButton->setIcon(QIcon("C:/Users/swetaa/OneDrive/Documents/Cia2swetaa/on.jpeg"));

        qDebug() <<"Button Checked --ON--";
    }
    else
    {
        ui->pushButton->setIcon(QIcon("C:/Users/swetaa/OneDrive/Documents/Cia2swetaa/off1.jpeg"));

        qDebug() <<"Button Checked --OFF--";
    }
}

void Cia2_swetaa_212218104169::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"Swetaa.S_2122180104169","THIS IS INFORMATION BOX");
}

void Cia2_swetaa_212218104169::on_pushButton_4_clicked()
{
    QMessageBox::StandardButton reply;
   reply=QMessageBox::question(this,"Swetaa.S_2122180104169","Do you like apples?",QMessageBox::Yes| QMessageBox::No);
    if(reply==QMessageBox::Yes)
    {
         QMessageBox::information(this,"Swetaa.S_2122180104169","Yes");
    }
    else
    {
         QMessageBox::information(this,"Swetaa.S_2122180104169","No");
    }
}

void Cia2_swetaa_212218104169::on_pushButton_5_clicked()
{
    QMessageBox:: warning(this,"Swetaa.S_212218104169","This is a warning message");
}

void Cia2_swetaa_212218104169::on_pushButton_6_clicked()
{
    QMessageBox::StandardButton reply;
   reply=QMessageBox::question(this,"Swetaa.S_2122180104169","This is a custom message",QMessageBox::YesAll|QMessageBox::Yes|QMessageBox::NoToAll|QMessageBox::No);
   if(reply==QMessageBox::No)
   {
       qDebug() <<"Nothing is displayed";
   }
   else
   {
       QMessageBox::warning(this,"Swetaa.S_212218104169","Dont display the message with warning as YesToAll");
   }
}

