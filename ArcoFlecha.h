#ifndef ARCOFLECHA_H
#define  ARCOFLECHA_H
#include "Item.h"
#include <iostream>
using namespace std;

class ArcoFlecha:public Item{
public:
  int ataqueF;

  ArcoFlecha();
  ArcoFlecha(int, string, string);
  void setAtaqueF(int);
  int getAtaqueF();
};

#endif
