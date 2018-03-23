#include "Bumeran.h"
#include <iostream>
using namespace std;

Bumeran::Bumeran(){

}

Bumeran::Bumeran(int ataque, string nombreI, string color):Item(nombreI, color){
  this->ataque = ataque;
}

void Bumeran::setAtaque(int pAtaque){
  this->ataque = ataque;
}
int Bumeran::getAtaque(){
  return ataque;
}
