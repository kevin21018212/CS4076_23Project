#ifndef MEALTEMPLATE_H
#define MEALTEMPLATE_H
#include "FoodClasses/ingredient.h"


#include "Storage/arraylist.h"

//NAMESPACES
//passed down to each child
#include <string>
using namespace std;
class mealtemplate
{
protected:
//BIT STRUCT contains each meals cooktime
        struct mealdata
        {
            //no meal needs more than 128 minutes
            unsigned int cooktime: 7;

        };

//UNION contains mealtype only 1 of these should exist
        union mealinfo {
            int mealtype;
            char* mealtypename;
        };
private:
   int pos=1;
public:

    mealtemplate();
    //ABSTRACT CLASSES
    //contains virtual private functions that need to be implimented in each meal
    virtual string printSteps()=0;
    virtual  unsigned int getTime()=0;
    virtual ingredient getHealthinfo()=0;
    virtual string getName()=0;
    virtual int getMealInfo()=0;

    //methods used to store and check info in each meal
    bool contains(string checklist);  
    bool canCook(ArrayList<ingredient> input);
    void addmealingredient(ingredient input);
    ArrayList<ingredient> ingredients;
    ArrayList<string> requiredIngredients;

};

#endif // MEALTEMPLATE_H
