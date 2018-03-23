#include "Monstruo.h"
#include <string>
#include <iostream>

using namespace std;

Monstruo::Monstruo(string nombreM, Item* itemDebi){
  this-> nombreM = nombreM;
  this->itemDebi = itemDebi;
}

Monstruo::Monstruo(){
}

void Monstruo::setNombreM(string nombreM){
  this->nombreM = nombreM;
}
string Monstruo::getNombreM(){
  return nombreM;
}

void Monstruo::setItemDebi(Item* itemDebi){
  this->itemDebi = itemDebi;
}

Item* Monstruo::getItemDebi(){
  return itemDebi;
}
