#include "mealtemplate.h"


mealtemplate::mealtemplate()
{

}


//checks if meal ingredientlist contains any optional items
//NOTE this feature still needs fullimplementation as otpional implementations are not added into meal ingredients
bool mealtemplate::contains(string checklist){
    for(int i = 1; i <= ingredients.getLength();i++){
        if(ingredients.getEntry(i).getName()==checklist){
            return true;
        }
    }
    return false;
}

//adds ingredient into meal ingredients
void mealtemplate::addmealingredient(ingredient input){
    ingredients.insert(pos,input);
    pos++;

}



