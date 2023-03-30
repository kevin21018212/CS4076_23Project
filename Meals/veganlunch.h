#ifndef VEGANLUNCH_H
#define VEGANLUNCH_H

#include "Storage/mealtemplate.h"
class veganlunch:public mealtemplate
{
public:
    veganlunch();
    string printSteps();
   unsigned int getTime();
    int getMealInfo();
   ingredient getHealthinfo();
   string getName();

private:
   mealdata mealdata;

   mealinfo Mealinfo;
};

#endif // VEGANLUNCH_H
