#ifndef TURKEYWRAP_H
#define TURKEYWRAP_H

#include "Storage/mealtemplate.h"
class turkeywrap:public mealtemplate
{
public:
    turkeywrap();
    string printSteps();
  unsigned  int getTime();
    int getMealInfo();
   ingredient getHealthinfo();
   string getName();

private:
   mealdata mealdata;

   mealinfo Mealinfo;
};

#endif // TURKEYWRAP_H
