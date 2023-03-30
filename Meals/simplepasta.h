#ifndef SIMPLEPASTA_H
#define SIMPLEPASTA_H


#include "Storage/mealtemplate.h"
class simplepasta:public mealtemplate
{
public:
    simplepasta();

    string printSteps();
   unsigned  int getTime();
    int getMealInfo();
   ingredient getHealthinfo();
   string getName();

private:
   mealdata mealdata;

   mealinfo Mealinfo;
};

#endif // SIMPLEPASTA_H
