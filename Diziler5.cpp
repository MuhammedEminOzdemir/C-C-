#include<iostream>
using namespace std;

int main()
{
	//Bir dizinin elemanlar�n� toplayan program

	int toplam = 0;
	const int DIZI_BOYUTU = 10; //Buradaki const sabit de�i�ken pi gibi
	int i;

	int a[10] = { 0,10,20,30,40,55,70,80,90,100 };

	for (i = 0; i < 10; i++)
		toplam = toplam + a[i];
	cout << " Elemanlarin Toplami=" << toplam;




	return 0;
}
