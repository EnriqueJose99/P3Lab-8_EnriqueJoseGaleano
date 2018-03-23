#ifndef BOMBA_H
#define BOMBA_H
#include "Item.h"
#include <iostream>
using namespace std;


class Bomba:public Item{
public:
  int ataqueB;

  Bomba();
  Bomba(int, string, string);

  void setBomba(int);
  int getBomba();

};


#endif
