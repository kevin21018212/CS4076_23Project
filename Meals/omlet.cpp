#include "omlet.h"

omlet::omlet()
{
     requiredIngredients.insert(1,"Milk");
     requiredIngredients.insert(2,"Eggs");
     requiredIngredients.insert(3,"Butter");


   mealdata.cooktime=10;
   Mealinfo.mealtype=1;
}

string omlet::getName(){
    return "Omlet";
}

string omlet::printSteps(){

 string returnstr;

 returnstr+="In a medium bowl, lightly beat the eggs and milk with a whisk. Season with salt and pepper and continue to whisk\n";

 returnstr+="Heat the butter in a non-stick fry pan over a medium high heat.\n Once the butter has melted, pour in the egg mixture, and tilt the pan slightly to cover the base. As the omelet begins to set, use a heatproof plastic spatula to gently lift the omelet, and stir so any uncooked egg runs underneath to cook\n";

 if(contains("Ham")||contains("Cheese")){
     returnstr+="Sprinkle over the ham and cheese and cook for 30 seconds\n";
 }
 returnstr+="Gently fold the omelet in half and turn onto a plate/n";
 if(contains("Bread")){
    returnstr+="Serve with toast/n";
 }
 return returnstr;

}
unsigned int omlet::getTime(){
 return mealdata.cooktime;
}
int omlet::getMealInfo(){
    return Mealinfo.mealtype;
}

ingredient omlet::getHealthinfo(){
    ingredient supering;
    for(int i=1;i<=ingredients.getLength();i++){
        supering=supering+ingredients.getEntry(i);
    }

supering.setHealth();
    return supering;
}

