#include "turkeywrap.h"

turkeywrap::turkeywrap()
{
mealdata.cooktime=10;
Mealinfo.mealtype=2;
requiredIngredients.insert(1,"Bread");
requiredIngredients.insert(2,"Turkey");
requiredIngredients.insert(3,"Lettuce");
requiredIngredients.insert(4,"Tomato");
}

string turkeywrap::getName(){
return "Turkey Wrap";
}

string turkeywrap::printSteps(){
string returnstr = "Lay out a whole wheat wrap on a flat surface. Spread a thin layer of mayonnaise on the wrap.\n";
returnstr += "Add a few lettuce leaves on top of the mayonnaise.\n";
returnstr += "Place 3-4 slices of turkey on top of the lettuce.\n";
returnstr += "Cut avocado into thin slices and add to the wrap.\n";
returnstr += "Add sliced tomato on top of the avocado.\n";
returnstr += "Roll up the wrap tightly, tucking in the sides as you go.\n";
returnstr += "Cut the wrap in half and serve.\n";
return returnstr;
}

int turkeywrap::getMealInfo(){
return Mealinfo.mealtype;
}

unsigned int turkeywrap::getTime(){
return mealdata.cooktime;
}

ingredient turkeywrap::getHealthinfo(){
ingredient supering;
for(int i=1;i<=ingredients.getLength();i++){
supering=supering+ingredients.getEntry(i);
}
supering.setHealth();
return supering;
}
