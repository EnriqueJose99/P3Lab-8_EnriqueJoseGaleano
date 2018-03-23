#include "Item.h"
#include <iostream>
#include <string>
using namespace std;

Item::Item(){

}

Item::Item(string pNombreI, string pColor){
  nombreI = pNombreI;
  color = pColor;
}

void Item::setNombreI(string pNombreI){
  nombreI = pNombreI;
}
string Item::getNombreI(){
  return nombreI;
}
void Item::setColor(string pColor){
  color = pColor;
}
string Item::getColor(){
  return color;
}
