#include "veganlunch.h"



veganlunch::veganlunch()
{
    mealdata.cooktime = 30;
    Mealinfo.mealtype = 2;
    requiredIngredients.insert(1, "Lemon");
    requiredIngredients.insert(2, "Garlic");
    requiredIngredients.insert(3, "OliveOil");
    requiredIngredients.insert(4, "Salt");
    requiredIngredients.insert(5, "Pepper");
    requiredIngredients.insert(6, "Bread");
    requiredIngredients.insert(7, "Tomatoes");

}

string veganlunch::getName()
{
    return "Vegan Chickpea Pita Sandwich";
}

string veganlunch::printSteps()
{
    string returnstr;
    returnstr += "1. Drain and rinse chickpeas.\n";
    returnstr += "2. In a food processor, combine chickpeas, lemon juice, tahini, garlic, olive oil, salt, and pepper. Process until smooth.\n";
    returnstr += "3. Toast the pita bread in a toaster or on a grill until warm and slightly crispy.\n";
    returnstr += "4. Slice the tomatoes and cucumber, and thinly slice the red onion.\n";
    returnstr += "5. Fill the pita with the chickpea mixture, sliced tomatoes, cucumber, and red onion.\n";
    returnstr += "6. Serve and enjoy!\n";
    return returnstr;
}

int veganlunch::getMealInfo()
{
    return Mealinfo.mealtype;
}

 unsigned int veganlunch::getTime()
{
    unsigned int ret=mealdata.cooktime;
     return ret;
}

ingredient veganlunch::getHealthinfo()
{
    ingredient supering;
    for(int i=1; i<=ingredients.getLength(); i++){
        supering = supering + ingredients.getEntry(i);
    }
    supering.setHealth();
    return supering;
}
