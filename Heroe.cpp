#include "Heroe.h"
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
