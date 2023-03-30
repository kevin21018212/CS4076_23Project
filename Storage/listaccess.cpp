#include "listaccess.h"

listaccess::listaccess()
{

}


//VIRTUAL PARENT FUNCTION
//sets to pointers to address of inputs
void listaccess::inputIngredients(ArrayList < ingredient > &input, ArrayList < ingredient > & selected) {

 defaultinput = &input;

 selectedinput = & selected;

}
