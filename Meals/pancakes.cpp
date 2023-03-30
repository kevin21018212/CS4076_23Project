#include "pancakes.h"

Pancakes::Pancakes()
{
    //needs milk flour eggs

    //optional whey protien sugar lemon
    requiredIngredients.insert(1,"Milk");
    requiredIngredients.insert(2,"Flour");
    requiredIngredients.insert(3,"Eggs");
    requiredIngredients.insert(4,"Butter");
    mealdata.cooktime=20;
    Mealinfo.mealtype=1;
}
string Pancakes::getName(){
    return "pancakes";
}
string Pancakes::printSteps(){

 string returnstr;

 returnstr+="Sift the dry ingredients together ";


 if(contains("Sugar")){
   returnstr+="Make sure to add the sugar in";
 }

  returnstr+="\n Then mix all the wet ingredients together\n ";
   if(contains("Lemon")){
   returnstr+=",Dont forget a pinch of lemon";
   }


    returnstr+="Scoop the batter onto a hot griddle or pan\n ";
    returnstr+="Cook for two to three minutes, then flip\n ";
    returnstr+="They should be done when brown on both sides\n ";
   return returnstr;

}
unsigned int Pancakes::getTime(){
 return  mealdata.cooktime;
}
int Pancakes::getMealInfo(){
    return Mealinfo.mealtype;
}
ingredient Pancakes::getHealthinfo(){
    ingredient supering;
    for(int i=1;i<=ingredients.getLength();i++){
        supering=supering+ingredients.getEntry(i);
    }
    supering.setHealth();
return supering;
}

