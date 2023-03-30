#include "selectmenu.h"

#include "ui_selectmenu.h"

selectmenu::selectmenu(QWidget * parent):

    QWidget(parent),

  ui(new Ui::selectmenu) {

    ui -> setupUi(this);

  }

selectmenu::~selectmenu() {
  delete ui;
}


 //displays next set of items in arraylist if at end loops through loop again
void selectmenu::on_pushButton_2_clicked() {

  if (canNext) {
    loadIngredients();
  } else {
    currposition = 1;
    count = 0;
    canNext = true;
    loadIngredients();
  }
}

void selectmenu::updateCheckbox() {
    //loop throught each checkbox
  for (int i = 0; i < ui -> LabelContainer -> count(); ++i) {
    QLayout * layout = ui -> LabelContainer -> layout();
    QCheckBox * label = qobject_cast < QCheckBox * > (layout -> itemAt(i) -> widget());

    //loop through selected ingredients and if they match checkbox set to checked
    for (int j = 1; j <selectedinput -> getLength() ; j++) {
      if (selectedinput -> getEntry(j).getName() == label -> text().toStdString()) {
        label -> setChecked(true);
        break;
      } else {
        label -> setChecked(false);
      }

    }
  }
  //stops checkbox on upate from occuring when chaninging labels
  updatecomplete=true;
}



//Updates the label with set ofingredients
void selectmenu::loadIngredients() {
  //for each checkbox label in container
  for (int i = 0; i < ui -> LabelContainer -> count(); ++i) {
  //From QLayout docs
    QLayout * layout = ui -> LabelContainer -> layout();
    QCheckBox * label = qobject_cast < QCheckBox * > (layout -> itemAt(i) -> widget());

    if (currposition <= defaultinput->getLength()) {
      //grab each item from default ingredients and sets the text to them
      string grabbedString = defaultinput->getEntry(currposition).getName();
      QString qstr = QString::fromStdString(grabbedString);
      label -> setText(qstr);
      currposition++;

    } else {
       //hide when out of items and set for wrap on next button push
      label -> setText("");

      canNext = false;
    }

  }
  //update the checkboxes to match helding
  updateCheckbox();

}




//POINTER
//Below code is the same for all checkboxes
void selectmenu::on_checkBox_2_stateChanged(int arg1)
{

//stops updating labels to default inglist from being changed
if(updatecomplete){
     //unchecked
 if(arg1==0){
     //loop through selecteding and until find matching string and remove at index from heldingredients
   for (int j = 1; j <selectedinput->getLength(); j++) {
       if(selectedinput->getEntry(j).getName()==ui->checkBox_2->text().toStdString()){
        selectedinput->remove(j);
        insertLocation--;
        break;
       }


   }
 }
 //checked
 else{
    //loop through defaulting until finding matching entery and place in selecteding at new location in heldList
   for (int j = 1; j <defaultinput->getLength(); j++) {
      //checks that names are the same
       string checkboxstr=ui->checkBox_2->text().toStdString();   
      string entrystr=defaultinput->getEntry(j).getName();
     if(checkboxstr==entrystr){
       selectedinput->insert(insertLocation,defaultinput->getEntry(j));
       insertLocation++;
       break;
     }
 }
 }
}
}









///This is a copy of the other checkboxes there was no easy way to wrap this
void selectmenu::on_checkBox_3_stateChanged(int arg1)
{
    if(updatecomplete){
     if(arg1==0){
       for (int j = 1; j <selectedinput->getLength(); j++) {
           if(selectedinput->getEntry(j).getName()==ui->checkBox_3->text().toStdString()){
            selectedinput->remove(j);
            insertLocation--;
            break;
           }
       }
     }
     //checked
     else{

       for (int j = 1; j <defaultinput->getLength(); j++) {
           string checkboxstr=ui->checkBox_3->text().toStdString();
           string entrystr=defaultinput->getEntry(j).getName();
         if(checkboxstr==entrystr){
           selectedinput->insert(insertLocation,defaultinput->getEntry(j));
           insertLocation++;
           break;
         }
     }
     }
    }

}


void selectmenu::on_checkBox_4_stateChanged(int arg1)
{
    if(updatecomplete){
     if(arg1==0){
       for (int j = 1; j <selectedinput->getLength(); j++) {
           if(selectedinput->getEntry(j).getName()==ui->checkBox_4->text().toStdString()){
            selectedinput->remove(j);
            insertLocation--;
            break;
           }
       }
     }
     //checked
     else{

       for (int j = 1; j <defaultinput->getLength(); j++) {
           string checkboxstr=ui->checkBox_4->text().toStdString();
           string entrystr=defaultinput->getEntry(j).getName();
         if(checkboxstr==entrystr){
           selectedinput->insert(insertLocation,defaultinput->getEntry(j));
           insertLocation++;
           break;
         }
     }
     }
    }

}


void selectmenu::on_checkBox_5_stateChanged(int arg1)
{
    if(updatecomplete){
     if(arg1==0){
       for (int j = 1; j <selectedinput->getLength(); j++) {
           if(selectedinput->getEntry(j).getName()==ui->checkBox_5->text().toStdString()){
            selectedinput->remove(j);
            insertLocation--;
            break;
           }
       }
     }
     //checked
     else{

       for (int j = 1; j <defaultinput->getLength(); j++) {
           string checkboxstr=ui->checkBox_5->text().toStdString();
           string entrystr=defaultinput->getEntry(j).getName();
         if(checkboxstr==entrystr){
           selectedinput->insert(insertLocation,defaultinput->getEntry(j));
           insertLocation++;
           break;
         }
     }
     }
    }
}


void selectmenu::on_checkBox_6_stateChanged(int arg1)
{
    if(updatecomplete){
     if(arg1==0){
       for (int j = 1; j <selectedinput->getLength(); j++) {
           if(selectedinput->getEntry(j).getName()==ui->checkBox_6->text().toStdString()){
            selectedinput->remove(j);
            insertLocation--;
            break;
           }
       }
     }
     //checked
     else{

       for (int j = 1; j <defaultinput->getLength(); j++) {
           string checkboxstr=ui->checkBox_6->text().toStdString();
           string entrystr=defaultinput->getEntry(j).getName();
         if(checkboxstr==entrystr){
           selectedinput->insert(insertLocation,defaultinput->getEntry(j));
           insertLocation++;
           break;
         }
     }
     }
    }
}


void selectmenu::on_checkBox_7_stateChanged(int arg1)
{
    if(updatecomplete){
     if(arg1==0){
       for (int j = 1; j <selectedinput->getLength(); j++) {
           if(selectedinput->getEntry(j).getName()==ui->checkBox_7->text().toStdString()){
            selectedinput->remove(j);
            insertLocation--;
            break;
           }
       }
     }
     //checked
     else{

       for (int j = 1; j <defaultinput->getLength(); j++) {
           string checkboxstr=ui->checkBox_7->text().toStdString();
           string entrystr=defaultinput->getEntry(j).getName();
         if(checkboxstr==entrystr){
           selectedinput->insert(insertLocation,defaultinput->getEntry(j));
           insertLocation++;
           break;
         }
     }
     }
    }
}


void selectmenu::on_checkBox_8_stateChanged(int arg1)
{
    if(updatecomplete){
     if(arg1==0){
       for (int j = 1; j <selectedinput->getLength(); j++) {
           if(selectedinput->getEntry(j).getName()==ui->checkBox_8->text().toStdString()){
            selectedinput->remove(j);
            insertLocation--;
            break;
           }
       }
     }
     //checked
     else{

       for (int j = 1; j <defaultinput->getLength(); j++) {
           string checkboxstr=ui->checkBox_8->text().toStdString();
           string entrystr=defaultinput->getEntry(j).getName();
         if(checkboxstr==entrystr){
           selectedinput->insert(insertLocation,defaultinput->getEntry(j));
           insertLocation++;
           break;
         }
     }
     }
    }
}


void selectmenu::on_checkBox_9_stateChanged(int arg1)
{
    if(updatecomplete){
     if(arg1==0){
       for (int j = 1; j <selectedinput->getLength(); j++) {
           if(selectedinput->getEntry(j).getName()==ui->checkBox_9->text().toStdString()){
            selectedinput->remove(j);
            insertLocation--;
            break;
           }
       }
     }
     //checked
     else{

       for (int j = 1; j <defaultinput->getLength(); j++) {
           string checkboxstr=ui->checkBox_9->text().toStdString();
           string entrystr=defaultinput->getEntry(j).getName();
         if(checkboxstr==entrystr){
           selectedinput->insert(insertLocation,defaultinput->getEntry(j));
           insertLocation++;
           break;
         }
     }
     }
    }
}


void selectmenu::on_checkBox_10_stateChanged(int arg1)
{
    if(updatecomplete){
     if(arg1==0){
       for (int j = 1; j <selectedinput->getLength(); j++) {
           if(selectedinput->getEntry(j).getName()==ui->checkBox_10->text().toStdString()){
            selectedinput->remove(j);
            insertLocation--;
            break;
           }
       }
     }
     //checked
     else{

       for (int j = 1; j <defaultinput->getLength(); j++) {
           string checkboxstr=ui->checkBox_10->text().toStdString();
           string entrystr=defaultinput->getEntry(j).getName();
         if(checkboxstr==entrystr){
           selectedinput->insert(insertLocation,defaultinput->getEntry(j));
           insertLocation++;
           break;
         }
     }
     }
    }
}


void selectmenu::on_checkBox_stateChanged(int arg1)
{
    if(updatecomplete){
     if(arg1==0){
       for (int j = 1; j <selectedinput->getLength(); j++) {
           if(selectedinput->getEntry(j).getName()==ui->checkBox->text().toStdString()){
            selectedinput->remove(j);
            insertLocation--;
            break;
           }
       }
     }
     //checked
     else{

       for (int j = 1; j <defaultinput->getLength(); j++) {
           string checkboxstr=ui->checkBox->text().toStdString();
           string entrystr=defaultinput->getEntry(j).getName();
         if(checkboxstr==entrystr){
           selectedinput->insert(insertLocation,defaultinput->getEntry(j));
           insertLocation++;
           break;
         }
     }
     }
    }
}

