#ifndef ITEM_H
#define  ITEM_H
#include <string>
#include <iostream>
using namespace std;

class Item{
private:

public:
  string nombreI;
  string color;
  Item();
  Item(string, string);

  void setNombreI(string);
  string getNombreI();
  void setColor(string);
  string getColor();

};
#endif
