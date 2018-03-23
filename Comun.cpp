
#include "Comun.h"
#include "Item.h"
#include <iostream>
#include <string>
using namespace std;
Comun::Comun(){

}

Comun::Comun(int vidaC, int defensaC, int attC, string nombreM, Item* itemDebi):Monstruo(nombreM, itemDebi){
  this-> vidaC = vidaC;
  this-> defensaC = defensaC;
  this-> attC = attC;
}

int Comun::getVidaC(){
  return vidaC;
}
int Comun::getDefensaC(){
  return defensaC;
}
int Comun::getAttC(){
  return attC;
}
