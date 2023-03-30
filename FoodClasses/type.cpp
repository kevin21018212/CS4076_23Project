#include "type.h"




//generic constructor sets all values to zero
type::type(){
    value=None;
    carbValue=0;
    protienValue=0;
    sugarValue=0;

}


//CONSTRUCTORS
//sets all values to input
 type::type(mainthree Value,int ProtienValue,int CarbValue,int SugarValue){
    value=Value;
    carbValue=CarbValue;
    protienValue=ProtienValue;
    sugarValue=SugarValue;
}

//ENUM
//returns the value
type::mainthree type::getContains(){
    return value;
}


//ENUM
//determins what your ingredient is high in
void type::getBreakdownValue(){
 if(carbValue>protienValue&&carbValue>sugarValue){
     value=Carb;
 }
 if(sugarValue>protienValue&&sugarValue>carbValue){
     value=Sugar;
 }
 if(protienValue>carbValue&&protienValue>sugarValue){
     value=Protien;
 }

}
