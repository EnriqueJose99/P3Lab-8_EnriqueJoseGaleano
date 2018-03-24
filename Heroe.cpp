#include "Heroe.h"
#include "Monstruo.h"
#include <string>
#include <iostream>

using namespace std;

Heroe::Heroe(){

}

Heroe::Heroe(string nombre, int vida, int cantidadJefes, int dinero, Item* items){
  this->nombre = nombre;
  this->vida = vida;
  this->cantidadJefes = cantidadJefes;
  this->dinero = dinero;
  this->items = items;
}

void Heroe::setNombre(string nombre){
  this->nombre = nombre;
}
string Heroe::getNombre(){
  return nombre;
}
void Heroe::setVida(int vida){
  this->vida = vida;
}
int Heroe::getVida(){
  return vida;
}
void Heroe::setCantidadJefes(int cantidadJefes){
  this->cantidadJefes = cantidadJefes;
}
int Heroe::getCantidadJefes(){
  return cantidadJefes;
}
void Heroe::setDinero(int dinero){
  this->dinero = dinero;
}
int Heroe::getDinero(){
  return dinero;
}

void Heroe::ataqueHeroe(Jefe* monstruo1){
  int vidaM = monstruo1->getVidaJ();
  if (this->vida > 0) {
    this->vida-=vidaM;
  }
}
void Heroe::ataqueHeroe(SemiJefe* monstruo2){
  int vidaM1 = monstruo2->getVidaSJ();
  if (this->vida>0) {
    this->vida-=vidaM1;
  }
}
void Heroe::ataqueHeroe(Comun* monstruo3){
  int vidaM2 = monstruo3->getVidaC();
  if (this->vida>0) {
    this->vida-=vidaM2;
  }
}
void Heroe::write(ofstream& out){
  int size=nombre.size();
  out.write(reinterpret_cast<char*>(&size),sizeof(int));
  out.write(nombre.data(),size);
  out.write(reinterpret_cast<char*>(&vida),sizeof(int));
  out.write(reinterpret_cast<char*>(&items),sizeof(int));
  out.write(reinterpret_cast<char*>(&cantidadJefes),sizeof(int));
  out.write(reinterpret_cast<char*>(&dinero),sizeof(int));
}
