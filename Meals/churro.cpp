#include "churro.h"

churro::churro()
{

    requiredIngredients.insert(1,"Flour");
    requiredIngredients.insert(2,"Sugar");
    requiredIngredients.insert(3,"OliveOil");
     requiredIngredients.insert(4,"Salt");

    mealdata.cooktime=10;
    Mealinfo.mealtype=1;
}
string churro::getName(){
    return "Churro";
}

string churro::printSteps(){

 string returnstr;

  returnstr+="In a pot, place the water over medium heat along with the salt. When it is boiling, remove it from the heat and add the flour. Stir with the help of a wooden spoon until the dough separates from the walls.\n";
   returnstr+="Place the dough in a pastry bag with a narrow nozzle, in a churro or if you don't have either, you can use a small bag with a small hole in the bottom.\n";
    returnstr+="Heat the oil while you are making the portions of churros with the raw dough on a kitchen towel.\n";
     returnstr+="When the oil is hot, fry the churros over medium heat, so that they are not going to be raw inside, nor are they going to burn very lightly.\n";
    returnstr+="Once fried, remove them to a tray with kitchen paper to absorb excess oil.";
    returnstr+="Serve them sprinkled with sugar, and if you wish you can combine it with cinnamon\n";
   return returnstr;

}
unsigned int  churro::getTime(){
 return mealdata.cooktime;
}
int churro::getMealInfo(){
    return Mealinfo.mealtype;
}
ingredient churro::getHealthinfo(){
    ingredient supering;
    for(int i=1;i<=ingredients.getLength();i++){
        supering=supering+ingredients.getEntry(i);
    }
  supering.setHealth();
return supering;
}

