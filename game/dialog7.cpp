#include "dialog7.h"
#include "ui_dialog7.h"
#include "dialog6.h"
#include "dialog8.h"
Dialog7::Dialog7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog7)
{
    ui->setupUi(this);
}

Dialog7::~Dialog7()
{
    delete ui;
}

void Dialog7::on_pushButton_clicked()
{
    Dialog6 *dialog5=new Dialog6;
    this -> close();
    dialog5 ->show();
}

void Dialog7::on_pushButton_2_clicked()
{
    Dialog8 *dialog5=new Dialog8;
    this -> close();
    dialog5 ->show();
}