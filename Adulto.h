#ifndef ADULTO_H
#define ADULTO_H
#include "Heroe.h"
#include "Item.h"
#include <iostream>
using namespace std;
class Adulto:public Heroe{

public:
   int defensaA;
   int MasterSword;
   int specialAttack;

   Adulto();
   Adulto(int, int, int);

   int getDefenaA();
   int getMasterSword();
   int getSpecialAttack();

};
#endif
