#include<iostream>
using namespace std;

int main()
{
	//Bu program kullan�c�dan iki say� (bir taban say� ve bir �s) al�r ve g�c� hesaplar.
	//burada k�saltma olarak pow() fonksiyonunu kullanabilirz

	float x, y,sonuc;
	cout << "Lutfen sayilari giriniz:";
	cin >> x >> y;

	sonuc = pow(x, y);
	cout << x << "^" << y << "=" << sonuc;

	return 0;
}