#include "Adulto.h"
#include "ArcoFlecha.h"
#include "Bomba.h"
#include "Bumeran.h"
#include "Heroe.h"
#include "Item.h"
#include "Joven.h"
#include "Monstruo.h"
#include "Jefe.h"
#include "SemiJefe.h"
#include "Comun.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int menu();
int main() {
  int opc = 0;
  vector<Jefe*> jefe;
  vector<SemiJefe*> semi;
  vector<Comun*> com;
  Heroe* heroe;
  Item* item;
  Item* global;
  string nombreH;
  int vidaH = 12;
  string nombreI;
  string colorI;
  int itemE;
  string nombreMn;
  Bumeran* bumeran;
  ArcoFlecha* arcofl;
  Bomba* bomba;
  cout<<"----Bienvenido al juego de Zelda----"<<endl;
  cout<<"Nombre del Heroe"<<endl;
  cin>>nombreH;
  cout<<"Ingrese el nombre del Item"<<endl;
  cin>>nombreI;
  cout<<"Ingrese el color del Item"<<endl;
  cin>>colorI;
  cout<<"Elija cual item quiere usar"<<endl;
  cout<<"1. Bumeran"<<endl;
  cout<<"2. Arco y Flecha"<<endl;
  cout<<"3. Bomba"<<endl;
  cin>>itemE;
  if (itemE == 1) {
    bumeran = new Bumeran(5, nombreI, colorI);
  }
  if (itemE == 2) {
    arcofl = new ArcoFlecha(4, nombreI, colorI);
  }
  if (itemE == 3) {
    bomba = new Bomba(10, nombreI, colorI);
  }
  item = new Item(nombreI, colorI);
  heroe = new Heroe(nombreH, 12, 0, 0, item);// agregar contador al final de heroes derrotados
  while (opc != 7) {
    switch (opc = menu()) {
      case 1:{
        cout<<"Ingrese el nombre del monstruo"<<endl;
        cin>>nombreMn;
        cout<<"Debilidad del monstruo del monstuo"<<endl;
        cout<<"1. Bumeran"<<endl;
        cout<<"2. Arco y Flecha"<<endl;
        cout<<"3. Bomba"<<endl;
        cin>>itemE;
        if (itemE == 1) {
          global = new Bumeran(5, nombreI, colorI);

        }
        if (itemE == 2) {
          global = new ArcoFlecha(4, nombreI, colorI);
        }
        if (itemE == 3) {
          global = new Bomba(10, nombreI, colorI);
        }
        break;
      }
    }
  }

  return 0;
}


int menu(){
  int flag = 0;
  int numeroElection = 0;

  while (flag == 0) {
    cout<<"1. Agregar un Monsturo "<<endl;
    cout<<"2. Elegir el item"<<endl;
    cout<<"3. Visitar Tienda"<<endl;
    cout<<"4. Elegir Master Sword o ponerla en el Pedestal"<<endl;
    cout<<"5. Luchar contra los monstruos"<<endl;
    cout<<"6. Guardar en archivo binario"<<endl;
    cout<<"7. Salir"<<endl;
    cout<<"Eliga un numero para meterse a una opcion"<<endl;
    cin>>numeroElection;
    return numeroElection;
  }
}
