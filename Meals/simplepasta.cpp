#include "simplepasta.h"

#include "simplepasta.h"

simplepasta::simplepasta()
{
mealdata.cooktime=10;
Mealinfo.mealtype=2;
requiredIngredients.insert(1,"Pasta");
requiredIngredients.insert(2,"Tomato");
requiredIngredients.insert(3,"Garlic");
}

string simplepasta::getName(){
return "Simple Pasta";
}

string simplepasta::printSteps(){

string returnstr;

returnstr+="Bring a pot of salted water to boil. Add the pasta and cook according to package instructions.\n";

returnstr+="While the pasta is cooking, heat a tablespoon of oil in a pan. Add minced garlic and cook for 1-2 minutes until fragrant. Add the tomato sauce and stir to combine. Let it simmer for a few minutes.\n";

returnstr+="Drain the cooked pasta and add it to the tomato sauce. Toss everything together until the pasta is coated in the sauce.\n";

return returnstr;

}

int simplepasta::getMealInfo(){
return Mealinfo.mealtype;
}

unsigned int simplepasta::getTime(){
return mealdata.cooktime;
}

ingredient simplepasta::getHealthinfo(){
ingredient supering;
for(int i=1;i<=ingredients.getLength();i++){
supering=supering+ingredients.getEntry(i);
}
supering.setHealth();
return supering;
}
