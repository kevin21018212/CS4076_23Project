#include "mealloader.h"

//sets the held ing
mealloader::mealloader(ArrayList<ingredient> helding)
{
 this->helding=helding;
}

//checks if you can cook a displayed meal
bool mealloader::canCook(int input){
if(Meals[input]->requiredIngredients.getLength()==Meals[input]->ingredients.getLength()){
    return true;
}
return false;

}


//POINTERS
//updates the ingreident values inside so that they are no longer string and match the values stored inside heldingredients
//only add if ingreidnets match required ingredients
void mealloader::updateMealInfo(){

     for(int i=0;i<mealsize;i++){
         for(int j=1;j<=Meals[i]->requiredIngredients.getLength();j++){
             for(int k=1;k<=helding.getLength();k++){
                 string one=helding.getEntry(k).getName();
                 string two=Meals[i]->requiredIngredients.getEntry(j);
                if(one==two){
                  Meals[i]->addmealingredient(helding.getEntry(k));
                 }
                }
             }
         }

}



