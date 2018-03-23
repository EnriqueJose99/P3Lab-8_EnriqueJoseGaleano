#ifndef COMUN_H
#define COMUN_H
#include <string>
#include "Monstruo.h"
#include "Item.h"
#include <iostream>
using namespace std;

class Comun:public Monstruo{

public:
  int vidaC;
  int defensaC;
  int attC;

  Comun();
  Comun(int, int, int, string, Item*);

  int getVidaC();
  int getDefensaC();
  int getAttC();
};
#endif
