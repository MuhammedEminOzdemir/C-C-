#ifndef  Nokta_h
#define Nokta_h
class Nokta
{
public:

	Nokta(int =0,int =0);//koordinat sistemini 0 ,1 veya 2 paremetli yapıcı 
	int Getx(); //x koordinatını getir 
	int Gety(); //y koordinatını getir 
	void SetX(int); // x kooordinatını değiştir 
	void SetY(int); //y koordinatını değiştir
	void SetXY(int, int); //x ve y koordinatlarını değiştir.

private:
	int x, y; //x ve y koordinatları

};
#endif 



