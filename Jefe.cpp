#include "Jefe.h"
#include <iostream>
using namespace std;

Jefe::Jefe(){

}

Jefe::Jefe(int vidaJ, int defensaJ, int attJ, string nombreM, Item* itemDebi):Monstruo(nombreM, itemDebi){
  this->vidaJ = vidaJ;
  this-> defensaJ =defensaJ;
  this->attJ = attJ;
}

int Jefe::getVidaJ(){
  return vidaJ;
}
void Jefe::setVidaJ(int vidaJ){
  this->vidaJ = vidaJ;
}
int Jefe::getDefensaJ(){
  return defensaJ;
}
int Jefe::getAttJ(){
  return attJ;
}
