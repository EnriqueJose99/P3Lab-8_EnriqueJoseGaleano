#include "SemiJefe.h"
#include <string>
#include <iostream>

using namespace std;

SemiJefe::SemiJefe(){

}

SemiJefe::SemiJefe(int vidaSJ, int defensaSJ, int attSJ, string nombreM, Item* item):Monstruo(nombreM, itemDebi){
  this->vidaSJ = vidaSJ;
  this-> defensaSJ = defensaSJ;
  this-> attSJ = attSJ;

}

int SemiJefe::getVidaSJ(){
  return vidaSJ;
}

void SemiJefe::setVidaSJ(int vidaSJ){
  this->vidaSJ = vidaSJ;
}

int SemiJefe::getDefensaSJ(){
  return defensaSJ;
}

int SemiJefe::getAttSJ(){
  return attSJ;
}
