#ifndef TYPE_H
#define TYPE_H


#include <string> // for string class
using namespace std;
class type
{

public:
  enum mainthree {Protien,Carb,Sugar,None};
  type();
  void getBreakdownValue();
  mainthree getContains();
  type(mainthree Value,int ProtienValue,int CarbValue,int SugarValue);
  int protienValue;
  int sugarValue;
  int carbValue;
  private:
  mainthree value;
};

#endif // TYPE_H
