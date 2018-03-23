#ifndef HEREO_H
#define  HEREO_H
#include <iostream>
#include "Item.h"
#include <string>


class Heroe{
  private:

  public:
    string nombre;
    int vida;
    int cantidadJefes;
    int dinero;
    Item* items;
    Heroe();
    Heroe(string, int, int, int, Item*);
    void  setNombre(string);
    string getNombre();
    void setVida(int);
    int getVida();
    void setCantidadJefes(int);
    int getCantidadJefes();
    void setDinero(int);
    int getDinero();


};
#endif
