output.o: main.o Adulto.o ArcoFlecha.o Bomba.o Bumeran.o Heroe.o Item.o Joven.o Monstruo.o Jefe.o SemiJefe.o Comun.o
	g++ main.o Adulto.o ArcoFlecha.o Bomba.o Bumeran.o Heroe.o Item.o Joven.o Monstruo.o Jefe.o SemiJefe.o Comun.o -o output

main.o: main.cpp Adulto.h ArcoFlecha.h Bomba.h Bumeran.h Heroe.h Item.h Joven.h Monstruo.h Jefe.h SemiJefe.h Comun.o
	g++ -c main.cpp

Adulto.o: Adulto.cpp Adulto.h Heroe.h Item.h
	g++ -c Adulto.cpp

ArcoFlecha.o: ArcoFlecha.cpp ArcoFlecha.h Item.h
	g++ -c ArcoFlecha.cpp

Bomba.o: Bomba.cpp Bomba.h Item.h
	g++ -c Bomba.cpp

Bumeran.o: Bumeran.cpp Bumeran.h Item.h
	g++ -c Bumeran.cpp

Heroe.o: Heroe.cpp Heroe.h Item.h
	g++ -c Heroe.cpp

Item.o: Item.cpp Item.h
	g++ -c Item.cpp

Joven.o: Joven.cpp Joven.h Heroe.h Item.h
	g++ -c Joven.cpp

Monstruo.o:  Monstruo.cpp Monstruo.h
	g++ -c Monstruo.cpp

Jefe.o: Jefe.cpp Jefe.h Monstruo.h Item.h
	g++ -c Jefe.cpp

SemiJefe.o: SemiJefe.cpp SemiJefe.h Monstruo.h
	g++ -c SemiJefe.cpp

Comun.o: Comun.cpp Comun.h Monstruo.h Item.h
	g++ -c Comun.cpp
