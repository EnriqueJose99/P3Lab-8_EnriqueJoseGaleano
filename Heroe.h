#ifndef HEREO_H
#define  HEREO_H
#include <iostream>
#include "Item.h"
#include "Monstruo.h"
#include "Jefe.h"
#include "SemiJefe.h"
#include "Comun.h"
#include <string>
#include <fstream>


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
    virtual void ataqueHeroe(Jefe*);
    virtual void ataqueHeroe(SemiJefe*);
    virtual void ataqueHeroe(Comun*);
    void write(ofstream&);

};
#endif
