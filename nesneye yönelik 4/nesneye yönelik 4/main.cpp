#include"SıcaklıkDönüştürücü.h"
#include<iostream>
using namespace std;

int main()
{
	double derece, fahrenhayt,santigrat;

	cout << "Lutfen derece giriniz: ";
	cin >> derece;

	cout << "Santigrat dönüşümü için fahrenhayt degeri giriniz: ";
	cin >> fahrenhayt;

	cout << "fahrenhayt dönüşümü için Santigrat degeri giriniz: ";
	cin >> santigrat;

	SıcaklıkDönüştürücü fah(derece, fahrenhayt, santigrat);

	cout << "Cel--->>> fah  "<<fah.FahrenhaytHesapla() << endl;
	cout << "Fah--->>> Cel  "<<fah.SantigratHesapla() << endl;

	



	return 0;
}