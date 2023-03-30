#include "diet.h"

//generic constructor sets all restricitons to none by default
diet::diet():isLowCarb(false),isVegan(true),isDairyFree(true),isGlutenFree(true),isPescatarian(true),isLowSugar(false),isHighProtien(false),dietcalories(0)
{


}


//toogles for restrictions
void diet::setDairyFree(){
    isDairyFree=false;

}
void diet::setPescatarian(){
    isPescatarian=false;

}
void diet::setVegan(){
    isVegan=false;

}
void diet::setGlutenFree(){
    isGlutenFree=false;

}
void diet::setHeath(int carbs,int protien,int sugar){
    isLowCarb=false;
    isHighProtien=false;
    isLowSugar=false;
if(dietcalories>0){
   if(carbs/dietcalories<=.45){
     isLowCarb=true;
   }
   if(protien/dietcalories>=.25){
    isHighProtien=true;
   }
   if(sugar/dietcalories<=.25){
    isLowSugar=true;
   }
}
}

bool diet::hasRestriction(string restriction){
  if(restriction=="Vegan"&&isVegan){
      return true;
  }
  else if(restriction=="DairyFree"&&isDairyFree){
      return true;
  }
  else if(restriction=="GlutenFree"&&isGlutenFree){
      return true;
  }
  else if(restriction=="Pescatarian"&&isPescatarian){
      return true;
  }
  else if(restriction=="LowSugar"&&isLowSugar){
   return true;
  }
  else if(restriction=="HighProtien"&&isHighProtien){
    return true;
  }
  else if(restriction=="LowCarb"&&isLowCarb){
      return true;
  }
  return false;
}

void diet::setDietCalories(int cal){

    dietcalories=cal;

}




