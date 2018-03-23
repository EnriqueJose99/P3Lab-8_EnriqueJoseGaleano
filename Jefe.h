#ifndef JEFE_H
#define JEFE_H
#include "Monstruo.h"
#include <iostream>
using namespace std;

class Jefe:public Monstruo{
public:
  int vidaJ;
  int defensaJ;
  int attJ;

  Jefe();
  Jefe(int, int, int);

  int getVidaJ();
  int getDefensaJ();
  int getAttJ();

};
#endif
