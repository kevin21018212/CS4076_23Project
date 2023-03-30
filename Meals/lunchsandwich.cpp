#include "lunchsandwich.h"

lunchsandwich::lunchsandwich()
{
    mealdata.cooktime=15;
    Mealinfo.mealtype=2;
    requiredIngredients.insert(1,"Bread");
    requiredIngredients.insert(2,"Turkey");
    requiredIngredients.insert(3,"Cheese");
    requiredIngredients.insert(4,"Lettuce");
    requiredIngredients.insert(5,"Tomato");
}

string lunchsandwich::getName()
{
    return "Turkey and Cheese Sandwich";
}

string lunchsandwich::printSteps()
{
    string returnstr;
    returnstr += "Toast two slices of bread.\n";
    returnstr += "Add turkey, cheese, lettuce, and tomato slices to one slice of the toasted bread.\n";
    returnstr += "Place the other slice of toasted bread on top.\n";
    returnstr += "Cut the sandwich in half and serve.\n";
    return returnstr;
}

int lunchsandwich::getMealInfo()
{
    return Mealinfo.mealtype;
}

unsigned int lunchsandwich::getTime()
{
    return mealdata.cooktime;
}

ingredient lunchsandwich::getHealthinfo()
{
    ingredient supering;
    for(int i=1;i<=ingredients.getLength();i++)
    {
        supering=supering+ingredients.getEntry(i);
    }
    supering.setHealth();
    return supering;
}
