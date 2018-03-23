#include "Adulto.h"
#include "Item.h"
#include <iostream>
using namespace std;


Adulto::Adulto(){

}

Adulto::Adulto(int defensaA, int MasterSword, int specialAttack):Heroe(nombre, vida, cantidadJefes, dinero, items){
  this->defensaA = defensaA;
  this->MasterSword = MasterSword;
  this->specialAttack = specialAttack;

}

int Adulto::getDefenaA(){
  return defensaA;
}

int Adulto::getMasterSword(){
  return defensaA;
}
int Adulto::getSpecialAttack(){
  return defensaA;
}
