#include "diaryfreecrepe.h"

diaryfreecrepe::diaryfreecrepe()
{

    requiredIngredients.insert(1,"Flour");
    requiredIngredients.insert(2,"Sugar");
    requiredIngredients.insert(3,"OliveOil");
     requiredIngredients.insert(4,"Salt");

    mealdata.cooktime=20;
    Mealinfo.mealtype=1;
}

string diaryfreecrepe::getName(){
    return "Crepe";
}

string diaryfreecrepe::printSteps(){

 string returnstr;

   returnstr+="In a bowl, mix the flour, water, eggs, sugar, salt, and 1 tablespoon of olive oil until smooth. Refrigerate for 30 minutes.";


  returnstr+="After 30 minutes, wet a crepe skillet or saucepan with the remaining olive oil. Distribute it evenly and get rid of the excess with a kitchen paper towel.";

  returnstr+="Over low - medium heat, in a crepe skillet, pour a portion of the crepe batter then tilt the skillet continuously to swirl it around batter evenly. Flip to cook the other side when it is cooked through.";
  return returnstr;

}
unsigned int diaryfreecrepe::getTime(){
 return mealdata.cooktime;
}

int diaryfreecrepe::getMealInfo(){
    return Mealinfo.mealtype;
}
ingredient diaryfreecrepe::getHealthinfo(){
    ingredient supering;
    for(int i=1;i<=ingredients.getLength();i++){

        supering=supering+ingredients.getEntry(i);
    }
    supering.setHealth();
 return supering;
}

