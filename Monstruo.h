#ifndef MONSTRUO_H
#define  MONSTRUO_H
#include <iostream>
#include <string>
#include "Item.h"
using namespace std;
class Monstruo{
public:
  string nombreM;
  Item* itemDebi;

  Monstruo();
  Monstruo(string, Item*);

  void setNombreM(string);
  string getNombreM();
  void setItemDebi(Item*);
  Item* getItemDebi();





};
#endif
