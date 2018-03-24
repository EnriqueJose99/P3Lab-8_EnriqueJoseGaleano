#ifndef JEFE_H
#define JEFE_H
#include "Monstruo.h"
#include "Item.h"
#include <iostream>
using namespace std;

class Jefe:public Monstruo{
public:
  int vidaJ;
  int defensaJ;
  int attJ;

  Jefe();
  Jefe(int, int, int, string, Item*);

  int getVidaJ();
  void setVidaJ(int);
  int getDefensaJ();
  int getAttJ();

};
#endif
