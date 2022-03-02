//Uzayda bir dikd�rtgeni sol �st ile sa� alt 
//k��elerinin kooordinatlar�n� ile temsil eden 
//kullan�c� tan�ml� veri tipi

#ifndef Didortgen_h
#define Didortgen_h
#include "Nokta.h"
class Dikdortgen
{
public:
	Dikdortgen(Nokta, Nokta); //2 parametreli yap�c�
	Nokta GetSolUst(); //sol �st koordinat� getirir.
	Nokta GetSagAlt(); //sa� alt koordinat� getirir.
	void SetSolUst(Nokta); //sol �st koordinat�n� de�i�tir.
	void SetSagAlt(Nokta); //sa� alt koordinat�� de�i�tirir.
	void SetSolUstSagAlt(Nokta, Nokta);
	int Alan(); //dikd�rtgeini alan�
	bool IcindeMi(Nokta);// Parametre dikd�rtgen i�erisinde mi diye kontrol etcek 
private: 

	Nokta solUst;
	Nokta sagAlt;
	//nokta s�n�fl� solust ve sa�alt diye iki tane nesne tan�mland�.
};
#endif // !1



