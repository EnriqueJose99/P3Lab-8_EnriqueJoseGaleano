#include "Bomba.h"
#include <iostream>
using namespace std;

Bomba::Bomba(){

}

Bomba::Bomba(int ataqueB, string nombreI, string color):Item(nombreI, color){
  this->ataqueB = ataqueB;
}

void Bomba::setBomba(int pAtaqueB){
  ataqueB = pAtaqueB;
}

int Bomba::getBomba(){
  return ataqueB;
}
