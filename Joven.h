#ifndef JOVEN_H
#define JOVEN_H
#include "Heroe.h"
#include "Item.h"
#include <iostream>
#include <fstream>
using namespace std;
class Joven:public Heroe{
public:
  int defensaJ;
  int espadaKokiri;

  Joven();
  Joven(int, int, string, int, int, int, Item*);

  int getDefensaJ();
  int getEspadaKokiri();
  virtual void ataqueJoven(Comun*);
  virtual void ataqueJoven2(Jefe*);
  virtual void ataqueJoven1(SemiJefe*);
  void write(ofstream&);

};


#endif
