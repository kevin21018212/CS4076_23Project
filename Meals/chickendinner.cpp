#include "chickendinner.h"

chickendinner::chickendinner()
{


        mealdata.cooktime = 40;
        Mealinfo.mealtype = 3;
        requiredIngredients.insert(1, "ChickenBreast");
        requiredIngredients.insert(2, "Broccoli");
        requiredIngredients.insert(3, "Garlic");
        requiredIngredients.insert(4, "OliveOil");
        requiredIngredients.insert(5, "Salt");
        requiredIngredients.insert(6, "Pepper");

    }


    string chickendinner::getName(){
        return "Garlic Chicken with Broccoli";
    }


    string chickendinner::printSteps() {
        string returnstr;
        returnstr += "1. Preheat oven to 425 degrees F (220 degrees C).\n";
        returnstr += "2. In a large bowl, mix together chicken breast, broccoli, garlic, olive oil, salt and pepper.\n";
        returnstr += "3. Place chicken and broccoli mixture in a baking dish.\n";
        returnstr += "4. Bake in the preheated oven for 20 minutes, then stir the mixture.\n";
        returnstr += "5. Continue baking for another 15-20 minutes, or until the chicken is cooked through and the broccoli is tender.\n";
        return returnstr;
    }

    int chickendinner::getMealInfo() {
        return Mealinfo.mealtype;
    }

 unsigned   int chickendinner::getTime() {
        return mealdata.cooktime;
    }

    ingredient chickendinner::getHealthinfo(){
        ingredient supering;
        for(int i=1;i<=ingredients.getLength();i++){
            supering=supering+ingredients.getEntry(i);
        }
      supering.setHealth();
    return supering;
    }
