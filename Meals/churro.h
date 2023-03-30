#ifndef CHURRO_H
#define CHURRO_H


#include "Storage/mealtemplate.h"
class churro:public mealtemplate
{
public:
    churro();
    string printSteps();
   unsigned  int getTime();
    int getMealInfo();
    ingredient getHealthinfo();
    string getName();
 private:
    mealinfo Mealinfo;
    mealdata mealdata;
};

#endif // CHURRO_H
