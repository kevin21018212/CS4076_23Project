#ifndef MEALLOADER_H
#define MEALLOADER_H

#include "FoodClasses/ingredient.h"
#include "Meals/chickendinner.h"
#include "Meals/lunchsandwich.h"
#include "Meals/omlet.h"
#include "Meals/turkeywrap.h"
#include "Meals/veganlunch.h"
#include "Storage/arraylist.h"
#include "Storage/mealtemplate.h"
#include "Meals/breakfastsandwhich.h"
#include "Meals/churro.h"
#include "Meals/diaryfreecrepe.h"
#include "Meals/pancakes.h"


#include <string>
using namespace std;


class mealloader
{
private:
   int pos=1;
     //your held ingredients
    ArrayList<ingredient> helding;


    int mealsize=9;
    //downcasting a list of meals that can be cooked
    //POINTER
    mealtemplate* Meals[9] = { new churro, new diaryfreecrepe, new breakfastsandwhich,new  Pancakes,new omlet
                             ,new chickendinner,new lunchsandwich,new turkeywrap,new veganlunch};
public:

    int displaySize=0;
    //constructor
    mealloader( ArrayList<ingredient> helding);

    void getRestrictions();
    bool canCook(int i);
    void getMealType();
    //list of meals to be displayed in mealdisplay
    mealtemplate *MealsToDisplay[5];
    void updateMealInfo();
    void updateHealthyMeals();
     mealloader heldloader();
    //FRIENDSHIP
        //friend functions used to get mealinfo
   friend void getmealtype(mealloader&,int findtype);
   friend void gethealthinfo(mealloader&,int findtype);

};

#endif // MEALLOADER_H
