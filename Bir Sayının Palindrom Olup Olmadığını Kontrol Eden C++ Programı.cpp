#include<iostream>
using namespace std;

int main(void)
{
	/*Bu program kullan�c�dan bir tamsay� al�r ve bu tamsay� tersine �evrilir
     Ters tamsay�, kullan�c� taraf�ndan girilen tamsay�ya e�itse, 
     o say� bir palindrom de�ilse, o say� bir palindrom de�ildir.*/

	int sayi,n;
	int num1, num2=0;
	cout << "Lutfen bir sayi giriniz:";
	cin >> sayi;
	n = sayi;
	while (sayi != 0)
	{
		num1= sayi % 10;
		num2 = (num2 * 10) + num1;
		sayi /= 10;
	}
	
	cout << "Sayinin tersi=" << num2<<endl;

	if (sayi == num2)
	{
		cout << "girdiginiz sayi polindrom sayidir";
	}

	else {
		cout << "girdiginiz sayi polindrom sayi degildir";

	}
	return 0;
}