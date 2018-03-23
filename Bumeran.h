#ifndef BUMERAN_H
#define  BUMERAN_H
#include "Item.h"
#include <iostream>
using namespace std;

class Bumeran:public Item{
private:

public:
    int ataque;
    Bumeran();
    Bumeran(int, string, string);
    void setAtaque(int);
    int getAtaque();
};
#endif
