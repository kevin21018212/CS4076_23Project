#ifndef DIARYFREECREPE_H
#define DIARYFREECREPE_H


#include "Storage/mealtemplate.h"
class diaryfreecrepe:public mealtemplate
{
public:
    diaryfreecrepe();

    string printSteps();
    unsigned int getTime();
     int getMealInfo();
    ingredient getHealthinfo();
    string getName();
private:
    mealinfo Mealinfo;
    mealdata mealdata;
 };

#endif // DIARYFREECREPE_H
