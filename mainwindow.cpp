#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ingredientinit();
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
    //work as destructor for arraylist
    defaultIngredients.clear();
    heldIngredients.clear();

}


//creates some generic ingredients and puts them into a default list
void MainWindow::ingredientinit(){

      ingredient milk(100,"dairy","Milk",600,900,600);
      ingredient butter(32,"dairy","Butter",0,0,4);
      ingredient egg(72,"meat","Eggs",6,0,5);
      ingredient sugar(16,"","Sugar",4,0,0);
      ingredient flour(440,"gluten","Flour",0,0,14);
      ingredient oliveOil(119,"","OliveOil",0,0,14);
      ingredient rice(160,"","Rice",3,36,1);
      ingredient vegetableOil(120,"","VegetableOil",0,0,14);
      ingredient bread(120,"gluten","Bread",4,22,2);
      ingredient cheddar(100,"meat","Cheddar",1,10,7);
      ingredient salmon(280,"fish","Salmon",36,1,15);
      ingredient parmesan(21,"dairy","Parmesan",2,0,1);
      ingredient lemon(24,"","Lemon",1,8,0);
      ingredient bacon(42,"meat","Bacon",5,0,7);
      ingredient groundBeef(200,"meat","GroundBeef",23,0,12);
      ingredient chickenBreast(195,"meat","ChickenBreast",24,0,11);
      ingredient chickenThigh(250,"meat","ChickenThigh",19,0,19);
      ingredient honey(21,"","Honey",0,6,0);
      ingredient turkey(100,"meat","Turkey",24,0,1);
      ingredient cheese(30,"dairy","Cheese",2,0,7);
      ingredient lettuce(50,"vegetable","Lettuce",1,3,1);
      ingredient tomato(70,"vegetable","Tomato",2,5,1);
      ingredient pepper(9,"","Pepper",1,0,1);
      ingredient salt(8,"","Salt",2,0,1);
      ingredient garlic(98,"","garlic",0,0,9);
      defaultIngredients.insert(1,milk);
      defaultIngredients.insert(2,butter);
      defaultIngredients.insert(3,egg);
      defaultIngredients.insert(4,sugar);
      defaultIngredients.insert(5,flour);
      defaultIngredients.insert(6,oliveOil);
      defaultIngredients.insert(7,rice);
      defaultIngredients.insert(8,vegetableOil);
      defaultIngredients.insert(9,bread);
      defaultIngredients.insert(10,cheddar);
      defaultIngredients.insert(11,salmon);
      defaultIngredients.insert(12,parmesan);
      defaultIngredients.insert(13,lemon);
      defaultIngredients.insert(14,bacon);
      defaultIngredients.insert(15,groundBeef);
      defaultIngredients.insert(16,chickenBreast);
      defaultIngredients.insert(17,chickenThigh);
      defaultIngredients.insert(18,honey);
      defaultIngredients.insert(19,turkey);
      defaultIngredients.insert(20,cheese);
      defaultIngredients.insert(21,tomato);
      defaultIngredients.insert(22,lettuce);
      defaultIngredients.insert(23,pepper);
      defaultIngredients.insert(24,salt);

      defaultIngredients.insert(25,garlic);

}

//opens a window that lets you select ingredients from checkbox
void MainWindow::on_pushButton_clicked()
{

     selectw->inputIngredients(defaultIngredients,heldIngredients);

      selectw->show();
      selectw->loadIngredients();

}
//opens a window that lets you edit your held ingredients

void MainWindow::on_pushButton_2_clicked()
{
    editw->inputIngredients(defaultIngredients,heldIngredients);
     editw->show();
}
//opens a window that lets you create your own ingedient
void MainWindow::on_pushButton_3_clicked()
{
    addw->inputIngredients(defaultIngredients,heldIngredients);
     addw->show();
}
//program started
void MainWindow::on_pushButton_4_clicked()
{
    mealdisplay->inputIngredients(defaultIngredients,heldIngredients);
    mealdisplay->updatemeal(desiredCookTime);
     mealdisplay->loadmeals(heldIngredients);
       mealdisplay->show();
      this->hide();

}


//SHALLOW COPY
//lets you add ingredients to the heldIngredients arraylist
void MainWindow::on_pushButton_5_clicked()
{
    //getsinput and converts to qstring
    QString qstr =this->ui->textEdit->toPlainText();
    string input = qstr.toStdString();
 //checks if ingredient exists in our default ingredients
    for(int i=1;i<defaultIngredients.getLength();i++){
        //if it exists add to help ingredients
        if(input==defaultIngredients.getEntry(i).getName()){
          this->ui->TextInputLabel->setText("Success add another?");
          ingredient tobeinsert=defaultIngredients.getEntry(i);
          heldIngredients.insert(count,tobeinsert);
          count++;
          break;

        }
        else{
          this->ui->TextInputLabel->setText("That Ingredient Dosent Exist");
        }

    }
}







void MainWindow::on_horizontalSlider_valueChanged(int value)
{
   desiredCookTime=value;
}

