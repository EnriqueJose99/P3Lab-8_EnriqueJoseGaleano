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
#include <time.h>
#include <stdlib.h>

using namespace std;


int menu();
void binHeroe(Heroe*);

int main() {
  int opc = 0;
  vector<Jefe*> jeFe;
  vector<SemiJefe*> semi;
  vector<Comun*> com;
  vector<Monstruo*> mon;
  Heroe* heroe;
  Joven* jov;
  Item* item;
  Item* global;
  Jefe* jefe;
  SemiJefe* semij;
  Comun* comunP;
  string nombreH;
  int vidaH = 12;
  string nombreI;
  string colorI;
  int itemE;
  string nombreMn;
  Bumeran* bumeran;
  ArcoFlecha* arcofl;
  Bomba* bomba;
  int rango;
  int vidaTiene;
  int dineroTiene;
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
  heroe = new Heroe(nombreH, vidaH, 0, dineroTiene, item);// agregar contador al final de heroes derrotados
  jov = new Joven(2, 4, nombreH, vidaH, 0, 0, item);
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
        cout<<"Ingrese el rango del monstruo"<<endl;
        cout<<"1.Jefe"<<endl;
        cout<<"2.Semi Jefe"<<endl;
        cout<<"3.Comun"<<endl;
        cin>>rango;
        if (rango == 1) {
          cout<<"Se selecciono exitosamente"<<endl;
          srand(time(NULL));
          int vida;
          vida = rand() % 46 + 26;
          jefe = new Jefe(vida, 2, 9, nombreMn, global);
          jeFe.push_back(jefe);
          mon.push_back(jefe);
        }
        if (rango == 2) {
          cout<<"Se selecciono exitosamente"<<endl;
          srand(time(NULL));
          int vida2;
          vida2 = rand() % 26 + 12;
          semij = new SemiJefe(vida2, 1, 7, nombreMn, global);
          semi.push_back(semij);
          mon.push_back(semij);
        }
        if (rango == 3) {
          cout<<"Se selecciono exitosamente"<<endl;
          srand(time(NULL));
          int vida3;
          vida3 = rand() % 12 + 4;
          std::cout << vida3 << '\n';
          comunP = new Comun(vida3, 0, 5, nombreMn, global);
          com.push_back(comunP);
          mon.push_back(comunP);
        }
        cout<<"Lista de monstruos"<<endl;
        for (int i = 0; i < mon.size(); i++) {
          cout<<"Posicion: "<<i<<" Monstruo-> "<<mon[i]->getNombreM()<<endl;
        }

        break;
      }
      case 3:{

        cout<<"----Bienvenido a la tienda----"<<endl;
        if (heroe->getDinero()>=200) {
          cout<<"Usted compro un corazon que le otorga +4 de vida"<<endl;
          heroe->setVida(vidaTiene +4);
          heroe->setDinero(dineroTiene-200);
      }
      break;
    }
    case 5:{
      int opcLuchar;
      for (int i = 0; i < mon.size(); i++) {
        cout<<"Hay Monstruos para luchar!!"<<endl;
      }
      cout<<"----Luchar----"<<endl;
      cout<<"Contra que quiere luchar"<<endl;
      cout<<"1.Jefe"<<endl;
      cout<<"2.Semi Jefe"<<endl;
      cout<<"3.Comun"<<endl;
      cin>>opcLuchar;
      if (opcLuchar == 1) {
        jov->ataqueJoven2(jefe);
        cout<<jov->getVida()<<endl;
        cout<<jefe->getVidaJ()<<endl;
        if (jefe->getVidaJ() < 0) {
          cout<<"Usted mato un monstruo comun"<<endl;
        }else{
          cout<<"El monstruo sigue con vida"<<endl;
          vidaTiene = 4;
        }
      }
      if (opcLuchar == 2) {
        jov->ataqueJoven1(semij);
        cout<<jov->getVida()<<endl;
        cout<<semij->getVidaSJ()<<endl;
        if (semij->getVidaSJ() < 0) {
          cout<<"Usted mato un monstruo comun"<<endl;
        }else{
          cout<<"El monstruo sigue con vida"<<endl;
          dineroTiene = 100;

        }

      }

      if (opcLuchar == 3) {
        jov->ataqueJoven(comunP);
        cout<<jov->getVida()<<endl;
        cout<<comunP->getVidaC()<<endl;
        if (comunP->getVidaC() < 0) {
          cout<<"Usted mato un monstruo comun"<<endl;
        }else{
          cout<<"El monstruo sigue con vida"<<endl;
          dineroTiene = 40;
        }
      }
      break;
    }
    case 6:{
      binHeroe(heroe);
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
void binHeroe(Heroe* heroe){
  ofstream heroes1("Heroes.bina", ios::binary);
  heroe->write(heroes1);
  std::cout << "se guardo correctamente" << '\n';
  heroes1.close();
}
