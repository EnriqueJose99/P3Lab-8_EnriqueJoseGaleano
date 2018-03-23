#ifndef SEMIJEFE_H
#define SEMIJEFE_H
#include <iostream>
#include <string>
#include "Monstruo.h"
using namespace std;
class SemiJefe:public Monstruo{
public:
  int vidaSJ;
  int defensaSJ;
  int attSJ;

  SemiJefe();
  SemiJefe(int, int, int, string, Item*);

  int getVidaSJ();
  int getDefensaSJ();
  int getAttSJ();

};
#endif
