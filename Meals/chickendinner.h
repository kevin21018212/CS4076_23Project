#ifndef CHICKENDINNER_H
#define CHICKENDINNER_H


#include "Storage/mealtemplate.h"
class chickendinner: public mealtemplate
{
public:
   chickendinner();
    string printSteps();
    unsigned int getTime();
    int getMealInfo();
    ingredient getHealthinfo();
    string getName();

private:
   mealinfo Mealinfo;
   mealdata mealdata;
};

#endif // CHICKENDINNER_H
