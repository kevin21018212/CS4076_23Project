#include "mealdisplay.h"
#include "Storage/mealloader.h"
#include "ui_mealdisplay.h"

mealdisplay::mealdisplay(QWidget *parent) :

    QMainWindow(parent),

    ui(new Ui::mealdisplay)

{
    ui->setupUi(this);
}

mealdisplay::~mealdisplay()
{


    delete ui;

}

//The best implimentation of cooktime
void mealdisplay::updatemeal(int i){
   desiredTime=i;
}

void mealdisplay::loadmeals(mealloader mealLoader){

//color palletes used to identify
    QPalette redpallette = ui->label->palette();
    QPalette greypallette = ui->label->palette();
    greypallette.setColor(QPalette::WindowText, QColorConstants::Gray);
    redpallette.setColor(QPalette::WindowText, QColorConstants::Red);
    QPalette blackpallette = ui->label->palette();

    blackpallette.setColor(QPalette::WindowText, QColorConstants::Black);


    for (int i = 0; i < ui -> LabelContainer -> count(); ++i) {

      QLayout * layout = ui -> LabelContainer -> layout();
      QLabel * label = qobject_cast < QLabel * > (layout -> itemAt(i) -> widget());

    if(i<mealLoader.displaySize){
      string grabbedString = mealLoader.MealsToDisplay[i]->getName();
      QString qstr = QString::fromStdString(grabbedString);
      label->setText(qstr);

//sets color red if has restricionts
      if (mealLoader.MealsToDisplay[i]->getHealthinfo().hasRestrictions(findrestriction)||findrestriction==""){
//sets color black if we have the required ingredients grey if not
               if(mealLoader.canCook(i)){
                   label->setPalette(blackpallette);
               }
               else{
                  label->setPalette(greypallette);
               }
      }
      else{
        label->setPalette(redpallette);

      }

    }
    else{
        label->setText("");
    }

    }

}

//finds all the meals to the type specified in the radiobuttons
void getmealtype(mealloader& mealloader,int findtype){
   mealloader.displaySize=0;



   if(findtype!=4&&findtype!=5){
  for(int i=0;i<mealloader.mealsize;i++){
    if(mealloader.Meals[i]->getMealInfo()==findtype){
       mealloader.MealsToDisplay[mealloader.displaySize]=mealloader.Meals[i];
       mealloader.displaySize++;

    }
    }
   }

  if(findtype==4){
  for(int i=0;i<mealloader.mealsize;i++){
   if(mealloader.Meals[i]->getHealthinfo().hasRestrictions("HighProtien")){
     mealloader.MealsToDisplay[mealloader.displaySize]=mealloader.Meals[i];
     mealloader.displaySize++;
   }
  }
  }
   if(findtype==5){
   for(int i=0;i<mealloader.mealsize;i++){
    if(mealloader.Meals[i]->getHealthinfo().hasRestrictions("LowCarb")){
      mealloader.MealsToDisplay[mealloader.displaySize]=mealloader.Meals[i];
      mealloader.displaySize++;
    }
   }
   }
}







//sets display mode for list

void mealdisplay::on_BreakFastRadio_clicked(bool checked)
{
      displayMode=1;
   mealloader mealLoader(*selectedinput);
  if(checked){
      mealLoader.updateMealInfo();
      getmealtype(mealLoader,1);
      loadmeals(mealLoader);

  }
}


void mealdisplay::on_DinnerRadio_clicked(bool checked)
{
      displayMode=3;
    mealloader mealLoader(*selectedinput);
   if(checked){
       mealLoader.updateMealInfo();
       getmealtype(mealLoader,3);
       loadmeals(mealLoader);
   }

}


void mealdisplay::on_HighProtienRadio_clicked(bool checked)
{
      displayMode=4;
    mealloader mealLoader(*selectedinput);
   if(checked){
       mealLoader.updateMealInfo();
       getmealtype(mealLoader,4);
       loadmeals(mealLoader);
   }

}

void mealdisplay::on_LowCarbRadio_clicked(bool checked)
{
      displayMode=5;
    mealloader mealLoader(*selectedinput);
   if(checked){
       mealLoader.updateMealInfo();
       getmealtype(mealLoader,5);
       loadmeals(mealLoader);
   }
}
void mealdisplay::on_LunchRadio_clicked(bool checked)
{
      displayMode=2;
    mealloader mealLoader(*selectedinput);
   if(checked){
       mealLoader.updateMealInfo();
       getmealtype(mealLoader,2);
       loadmeals(mealLoader);
   }

}

//1
void mealdisplay::on_pushButton_3_clicked()
{

     mealloader mealLoader(*selectedinput);
     mealLoader.updateMealInfo();
     getmealtype(mealLoader,displayMode);
    // sets up the mealloader with currentmeals and updates ingredients inside

     //makes sure meal is displayed
    if(mealLoader.displaySize>0){
     //gets info and sets text boxes in bottom to meal displayed
     string str=mealLoader.MealsToDisplay[0]->getHealthinfo().displayInfo();
     QString qstr = QString::fromStdString(str);
     ui->textBrowser->setText(qstr);
    cooktime=mealLoader.MealsToDisplay[0]->getTime();
    QString s = QString::number(desiredTime);
    QString v=QString::number(cooktime);
    ui->label_6->setText("You want to cook " + s +" minutes\n this meal will take "+v +" minutes");
     str=mealLoader.MealsToDisplay[0]->printSteps();
     qstr = QString::fromStdString(str);
    ui->textBrowser_2->setText(qstr);
  }

}
//2
void mealdisplay::on_pushButton_4_clicked()
{

    mealloader mealLoader(*selectedinput);
    mealLoader.updateMealInfo();
    getmealtype(mealLoader,displayMode);
   if(mealLoader.displaySize>0){
    string str=mealLoader.MealsToDisplay[1]->getHealthinfo().displayInfo();
    QString qstr = QString::fromStdString(str);
    ui->textBrowser->setText(qstr);
    cooktime=mealLoader.MealsToDisplay[1]->getTime();
    QString s = QString::number(desiredTime);
    QString v=QString::number(cooktime);
    ui->label_6->setText("You want to cook " + s +" minutes\n this meal will take "+v +" minutes");
    str=mealLoader.MealsToDisplay[1]->printSteps();
    qstr = QString::fromStdString(str);
    ui->textBrowser_2->setText(qstr);
   }
}
//3
void mealdisplay::on_pushButton_2_clicked()
{
    mealloader mealLoader(*selectedinput);
    mealLoader.updateMealInfo();
    getmealtype(mealLoader,displayMode);
   if(mealLoader.displaySize>0){

     string str=mealLoader.MealsToDisplay[2]->getHealthinfo().displayInfo();
    QString qstr = QString::fromStdString(str);


    ui->textBrowser->setText(qstr);
    str=mealLoader.MealsToDisplay[2]->printSteps();
    qstr = QString::fromStdString(str);
     cooktime=mealLoader.MealsToDisplay[2]->getTime();
     QString s = QString::number(desiredTime);
     QString v=QString::number(cooktime);
     ui->label_6->setText("You want to cook " + s +" minutes\n this meal will take "+v +" minutes");
    ui->textBrowser_2->setText(qstr);
    }
}

//4
void mealdisplay::on_pushButton_5_clicked()
{
    mealloader mealLoader(*selectedinput);
    mealLoader.updateMealInfo();
    getmealtype(mealLoader,displayMode);
   if(mealLoader.displaySize>0){
    string str=mealLoader.MealsToDisplay[3]->getHealthinfo().displayInfo();
    QString qstr = QString::fromStdString(str);
    ui->textBrowser->setText(qstr);
    str=mealLoader.MealsToDisplay[3]->printSteps();
    cooktime=mealLoader.MealsToDisplay[3]->getTime();
    QString s = QString::number(desiredTime);
    QString v=QString::number(cooktime);
    ui->label_6->setText("You want to cook" + s +" minutes\n this meal will take "+v +"minutes");
    qstr = QString::fromStdString(str);
    ui->textBrowser_2->setText(qstr);
    }
}

//5
void mealdisplay::on_pushButton_clicked()
{
    mealloader mealLoader(*selectedinput);
    mealLoader.updateMealInfo();
    getmealtype(mealLoader,displayMode);
   if(mealLoader.displaySize>0){
    string str=mealLoader.MealsToDisplay[4]->getHealthinfo().displayInfo();
    QString qstr = QString::fromStdString(str);
    ui->textBrowser->setText(qstr);
    str=mealLoader.MealsToDisplay[4]->printSteps();
    cooktime=mealLoader.MealsToDisplay[4]->getTime();
    QString s = QString::number(desiredTime);
    QString v=QString::number(cooktime);
    ui->label_6->setText("You want to cook" + s +" minutes\n this meal will take "+v +"minutes");
    qstr = QString::fromStdString(str);
    ui->textBrowser_2->setText(qstr);

    }

}




//sets the diet to find


void mealdisplay::on_actionNone_triggered()
{

    findrestriction="";

}


void mealdisplay::on_actionVegan_triggered()
{

        findrestriction="Vegan";


}


void mealdisplay::on_actionPescatarian_triggered()
{

        findrestriction="Pescatarian";

}


void mealdisplay::on_actionDairyFree_triggered()
{

        findrestriction="DairyFree";

}

void mealdisplay::on_actionGlutan_triggered()
{

        findrestriction="GlutenFree";

}








