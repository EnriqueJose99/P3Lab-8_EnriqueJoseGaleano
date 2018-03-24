#include "Joven.h"
#include <iostream>
using namespace std;


Joven::Joven(){

}

Joven::Joven(int defensaJ, int espadaKokiri, string nombre, int vida, int contidadJefes, int dinero, Item* itmes)
:Heroe(nombre, vida, cantidadJefes, dinero, items){
    this-> defensaJ = defensaJ;
    this-> espadaKokiri = espadaKokiri;
}

int Joven::getDefensaJ(){
  return defensaJ;
}
int Joven::getEspadaKokiri(){
  return espadaKokiri;
}

void Joven::ataqueJoven(Comun* monstruo1){
  int vidaM = (monstruo1->getVidaC()-espadaKokiri + monstruo1->getDefensaC());
  monstruo1->setVidaC(vidaM);
}
void Joven::ataqueJoven1(SemiJefe* monstruo2){
  int vidaM1 = (monstruo2->getVidaSJ()-espadaKokiri + monstruo2->getDefensaSJ());
  monstruo2->setVidaSJ(vidaM1);
}

void Joven::ataqueJoven2(Jefe* monstruo3){
  int vidaM2 = (monstruo3->getVidaJ()-espadaKokiri + monstruo3->getDefensaJ());
  monstruo3->setVidaJ(vidaM2);

}

void Joven::write(ofstream& out){
  int size=nombre.size();
  out.write(reinterpret_cast<char*>(&size),sizeof(int));
  out.write(nombre.data(),size);
  out.write(reinterpret_cast<char*>(&vida),sizeof(int));
  out.write(reinterpret_cast<char*>(&items),sizeof(int));
  out.write(reinterpret_cast<char*>(&cantidadJefes),sizeof(int));
  out.write(reinterpret_cast<char*>(&dinero),sizeof(int));
}
