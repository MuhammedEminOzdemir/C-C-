#include"S�cakl�kD�n��t�r�c�.h"
#include<iostream>
using namespace std;

int main()
{
	double derece, fahrenhayt,santigrat;

	cout << "Lutfen derece giriniz: ";
	cin >> derece;

	cout << "Santigrat d�n���m� i�in fahrenhayt degeri giriniz: ";
	cin >> fahrenhayt;

	cout << "fahrenhayt d�n���m� i�in Santigrat degeri giriniz: ";
	cin >> santigrat;

	S�cakl�kD�n��t�r�c� fah(derece, fahrenhayt, santigrat);

	cout << "Cel--->>> fah  "<<fah.FahrenhaytHesapla() << endl;
	cout << "Fah--->>> Cel  "<<fah.SantigratHesapla() << endl;

	



	return 0;
}