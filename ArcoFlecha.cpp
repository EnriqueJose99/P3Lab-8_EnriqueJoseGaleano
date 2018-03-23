#include "ArcoFlecha.h"
#include <iostream>
using namespace std;

ArcoFlecha::ArcoFlecha(){

}

ArcoFlecha::ArcoFlecha(int ataqueF, string nombreI, string color):Item(nombreI, color){
  this->ataqueF = 4;
}

void ArcoFlecha::setAtaqueF(int pAtaqueF){
  this->ataqueF = ataqueF;
}

int ArcoFlecha::getAtaqueF(){
  return ataqueF;
}
