#ifndef  Nokta_h
#define Nokta_h
class Nokta
{
public:

	Nokta(int =0,int =0);//koordinat sistemini 0 ,1 veya 2 paremetli yap�c� 
	int Getx(); //x koordinat�n� getir 
	int Gety(); //y koordinat�n� getir 
	void SetX(int); // x kooordinat�n� de�i�tir 
	void SetY(int); //y koordinat�n� de�i�tir
	void SetXY(int, int); //x ve y koordinatlar�n� de�i�tir.

private:
	int x, y; //x ve y koordinatlar�

};
#endif 



