#include "ingredient.h"

ingredient::ingredient():type(None,0,0,0){
 calories=0;
 name="";
 diet="";
}


//CONSTRUCTOR IMPLEMENTATION
//INITALIZER LIST used to construct parent
//updates values in ingredient and sets setrestrictions in diet and setsvalues in type
ingredient::ingredient(int calories,string diet,string name,int protien,int carbs,int sugar):type(None,protien,carbs,sugar){
    this->calories=calories;
    this->name=name;
    this->diet=diet;
    getBreakdownValue();
    setDietCalories(calories);
    setHeath(carbs,protien,sugar);
}




//PRIVATE METHODS
//gets private variables that should not be normally modified
string ingredient::getName(){
    return name;
}
string ingredient::getType(){
    return diet;
}
int ingredient::getProtien(){
    return protienValue;
}
int ingredient::getCarb(){
    return carbValue;
}
int ingredient::getSugar(){
    return sugarValue;
}

int ingredient::getcal(){
      return calories;
}
bool ingredient::hasRestrictions(string restriction){
    return hasRestriction(restriction);
}



//DEEP COPY
//creates a copy ovingredient making sure to update diet info in processs
ingredient::ingredient (const ingredient &other){
    setRestriction();
    calories=other.calories;
    name=other.name;
    diet=other.diet;
    carbValue=other.carbValue;
    protienValue=other.protienValue;
    sugarValue=other.sugarValue;
}




//OPERATOR OVERLOADING
//this is used for the meals to create a sort of super ingredient which is used to tell the meals dietary info,calorie info,included ingredients, and other functions
//while this could be implimened in meal class this is a much simpler way to get these values
ingredient operator+(ingredient const& one, ingredient const& two)
   {
    ingredient returning;

    //generic adding
    returning.name=one.name+", "+two.name;
    returning.calories=one.calories+two.calories;
    returning.protienValue=one.protienValue+two.protienValue;
    returning.carbValue=one.carbValue+two.carbValue;
    returning.sugarValue=one.sugarValue+two.sugarValue;

     //update enum in type after additions
    returning.getBreakdownValue();

      //need to do twice for each ings diet
    returning.diet=one.diet;
    returning.setRestriction();

    returning.diet=two.diet;
    returning.setRestriction();

    returning.setDietCalories(returning.calories);
    returning.setHeath(returning.carbValue,returning.protienValue,returning.sugarValue);


    return returning;
   }

string ingredient::displayInfo(){
     return "This meals has "+to_string(calories)+" calories, has " +to_string(protienValue)+" grams of protien "+ to_string(carbValue)+", grams of carbs,and "+to_string(sugarValue)+" grams of sugar";
}

void ingredient::setHealth(){
  diet::setHeath(carbValue,protienValue,sugarValue);
}

//Sets restrictions in diet
void ingredient::setRestriction(){
  if(diet=="dairy"||diet=="cheese"){
    setDairyFree();
  }
  if(diet=="meat"){
    setVegan();
    setPescatarian();
  }
  if(diet=="fish"){
     setPescatarian();
    }
  if(diet=="gluten"){
     setGlutenFree();
  }

}
