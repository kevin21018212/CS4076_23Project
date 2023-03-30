#include "additem.h"

#include "ui_additem.h"

additem::additem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::additem)
{
    ui->setupUi(this);
}

additem::~additem()
{
    delete ui;

}



//take data from text box,creates items and adds to default ingredients and selected
void additem::on_pushButton_clicked()
{
    string name = ui -> textEdit -> toPlainText().toStdString();
    int cal = ui -> textEdit_2 -> toPlainText().toInt();
    string diet = ui -> textEdit_3 -> toPlainText().toStdString();
    int pro = ui -> textEdit_4 -> toPlainText().toInt();
    int carb = ui -> textEdit_5 -> toPlainText().toInt();
    int sug = ui -> textEdit_6 -> toPlainText().toInt();
    defaultinput -> insert(defaultinput->getLength()+1, ingredient(cal, diet, name, pro, carb, sug));
    selectedinput -> insert(selectedinput->getLength()+1, ingredient(cal, diet, name, pro, carb, sug));

}

