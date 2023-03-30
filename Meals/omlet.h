#ifndef OMLET_H
#define OMLET_H


#include "Storage/mealtemplate.h"
class omlet:public mealtemplate
{
public:
    omlet();
    string printSteps();
  unsigned   int getTime();
    int getMealInfo();
    ingredient getHealthinfo();
    string getName();
private:

    mealdata mealdata;
    mealinfo Mealinfo;
};

#endif // OMLET_H
