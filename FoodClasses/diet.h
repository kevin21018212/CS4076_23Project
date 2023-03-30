#ifndef DIET_H
#define DIET_H


#include <string> // for string class
using namespace std;

class diet{
private:
    bool isLowCarb=false,isVegan,isDairyFree,isGlutenFree,isPescatarian,isLowSugar=false,isHighProtien=false;

     int dietcalories;
public:
    void setVegan(),setDairyFree(),setGlutenFree(),setPescatarian();

   diet();
    virtual bool hasRestriction(string findrestriction);
    void setDietCalories(int cal);
    bool hasCalories();
    void setHeath(int carbs,int protien,int sugar);
    virtual void setRestriction()=0;

}
;
#endif // DIET_H
