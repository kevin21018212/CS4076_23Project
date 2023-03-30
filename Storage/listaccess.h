#ifndef LISTACCESS_H
#define LISTACCESS_H

#include "FoodClasses/ingredient.h"
#include "Storage/arraylist.h"
class listaccess
{

//POINTERS
//VIRTUALFUCNTION

    //basically just holds a pointers to the 2 arraylist of ingredients used in main window virutal function overwritten if not using both inputs
    //to save mem
public:
    listaccess();
    ArrayList<ingredient> *defaultinput;
    ArrayList<ingredient> *selectedinput;
    virtual void inputIngredients(ArrayList<ingredient> &input,ArrayList<ingredient> &selectedinput);
};

#endif // LISTACCESS_H
