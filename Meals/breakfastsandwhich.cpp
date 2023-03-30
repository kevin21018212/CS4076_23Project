#include "breakfastsandwhich.h"

breakfastsandwhich::breakfastsandwhich()
{


   mealdata.cooktime=20;
   Mealinfo.mealtype=1;
    requiredIngredients.insert(1,"Milk");
    requiredIngredients.insert(2,"Eggs");
    requiredIngredients.insert(3,"Butter");
     requiredIngredients.insert(4,"Bread");


}

string breakfastsandwhich::getName(){
    return "Breakfast Sandwhich";
}

string breakfastsandwhich::printSteps(){

 string returnstr;

 if(contains("Bacon")){
   returnstr+="In a large skillet, cook the bacon until crisp. Drain on paper towels\n";
 }

 returnstr+="In a bowl, whisk the eggs together with the milk. Salt and pepper to taste. Melt the 1 teaspoon of butter in a skillet over medium heat and add the eggs. Scrambled to your desired doneness.\n";

 returnstr+="Heat a waffle iron to high heat.\n ";

 returnstr+="Butter the outsides of the bread. Place one slice of bread, buttered side down, on the waffle iron. Add half of the eggs,";
 if(contains("Cheese")||contains("Bacon")){
   returnstr+="2 slices of bacon and a slice of Cheese";
 }

  returnstr+=" Place another piece of bread on top, buttered side out. Repeat with the second sandwich. \n Close the waffle maker and cook until the bread is toasted";
   return returnstr;

}
int breakfastsandwhich::getMealInfo(){
    return Mealinfo.mealtype;
}
unsigned int breakfastsandwhich::getTime(){
 return mealdata.cooktime;
}
ingredient breakfastsandwhich::getHealthinfo(){
    ingredient supering;
    for(int i=1;i<=ingredients.getLength();i++){
        supering=supering+ingredients.getEntry(i);
    }
  supering.setHealth();
return supering;
}

