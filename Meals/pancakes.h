#ifndef PANCAKES_H
#define PANCAKES_H



#include "Storage/mealtemplate.h"

class Pancakes:public mealtemplate
{


public:
    Pancakes();
    string printSteps();
   unsigned  int getTime();
    int getMealInfo();
   ingredient getHealthinfo();
   string getName();

private:
   mealdata mealdata;

   mealinfo Mealinfo;
};

#endif // PANCAKES_H
