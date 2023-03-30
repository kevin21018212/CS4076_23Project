#ifndef BREAKFASTSANDWHICH_H
#define BREAKFASTSANDWHICH_H


#include "Storage/mealtemplate.h"
class breakfastsandwhich: public mealtemplate
{
public:
    breakfastsandwhich();
    string printSteps();
    unsigned int getTime();
    int getMealInfo();
    ingredient getHealthinfo();
    string getName();

private:
   mealinfo Mealinfo;
   mealdata mealdata;
};

#endif // BREAKFASTSANDWHICH_H
