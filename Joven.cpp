#include "Joven.h"
#include <iostream>
using namespace std;


Joven::Joven(){

}

Joven::Joven(int defensaJ, int espadaKokiri):Heroe(nombre, vida, cantidadJefes, dinero, items){
    this-> defensaJ = defensaJ;
    this-> espadaKokiri = espadaKokiri;
}

int Joven::getDefensaJ(){
  return defensaJ;
}
int Joven::getEspadaKokiri(){
  return espadaKokiri;
}
