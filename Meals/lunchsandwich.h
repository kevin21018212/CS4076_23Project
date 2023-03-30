#ifndef LUNCHSANDWICH_H
#define LUNCHSANDWICH_H
#include "Storage/mealtemplate.h"
class lunchsandwich:public mealtemplate
{
public:
    lunchsandwich();
    string printSteps();
    unsigned int getTime();
     int getMealInfo();
    ingredient getHealthinfo();
    string getName();
private:
    mealinfo Mealinfo;
    mealdata mealdata;
};

#endif // LUNCHSANDWICH_H
