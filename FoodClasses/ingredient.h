#ifndef INGREDIENT_H
#define INGREDIENT_H
#include "FoodClasses/diet.h"

#include "FoodClasses/type.h"

//MULTIPLE INHERITANCE
//stores nutrition data type along with a type of food
//stores allergy data inside diet
class ingredient: diet,protected type
{
    int calories;
    string name;
    string diet;

public:
//2 sets of constructors
    ingredient(int calories,string diet,string name, int protien,int carbs,int sugar);
    ingredient();

    //setterfunctions
    void setHealth();
    string getName();
    void setRestriction();
    void setCalories(int cal);
    //getterfunctions
    string getType();
    int getSugar();
    int getCarb();
    int getProtien();
    int getcal();
    string displayInfo();

    //virtual private implemtation from diet
    bool hasRestrictions(string restriction);
    //calls parent function in diet
    void update(int calories,string diet,string name, int protien,int carbs,int sugar);

    //FRIENDSHIP OPERATOR OVERLOADING
    //lets us add ingredients together while allowing for diet information to be consistant
    friend ingredient operator+(ingredient const& one, ingredient const& two);


    //DEEPY COPY CONSTRUCTOR
    ingredient (const ingredient &other);
    //forces copy assigment operator to use default RULE OF THREE
    ingredient& operator=(const ingredient&)=default;



};


#endif // INGREDIENT_H
