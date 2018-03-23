#ifndef JOVEN_H
#define JOVEN_H
#include "Heroe.h"
#include <iostream>
using namespace std;
class Joven:public Heroe{
public:
  int defensaJ;
  int espadaKokiri;

  Joven();
  Joven(int, int);

  int getDefensaJ();
  int getEspadaKokiri();

};


#endif
