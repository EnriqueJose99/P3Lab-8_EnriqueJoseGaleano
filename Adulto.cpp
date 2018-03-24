#include "Adulto.h"
#include "Item.h"
#include <iostream>
#include <fstream>
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
void Adulto::write(ofstream& out){
  int size=nombre.size();
  out.write(reinterpret_cast<char*>(&size),sizeof(int));
  out.write(nombre.data(),size);
  out.write(reinterpret_cast<char*>(&vida),sizeof(int));
  out.write(reinterpret_cast<char*>(&items),sizeof(int));
  out.write(reinterpret_cast<char*>(&cantidadJefes),sizeof(int));
  out.write(reinterpret_cast<char*>(&dinero),sizeof(int));
}
