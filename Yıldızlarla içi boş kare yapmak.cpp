/*
   ***************
   *             *
   *             *
   *             *
   *             *
   *             *
   ***************

*/
#include<iostream>
using namespace std;

int main()
{

	for (int i = 1; i <= 10; i++) //Bu d�ng�de karenin ilk sat�r� olan 10 tane * yap�ld�
	{
		cout << "*";
	}
	cout << endl;
	// alt sat�ra giderek
	for (int a = 1; a <= 5; a++) //bu d�ng�de alt ast�r olan alt alta olan 5 y�ld�z i�in yap�ld�
	{
		for (int b = 0; b < 1; b++)  //bi solda oldu�undan birde sa�da alt alta olan 5 y�ld�z i�in yap�ld�
		{
			cout <<"*";
		}

		for (int d = 1; d <= 8; d++) //burada karenin i�erisindeki 8 tane bo�uk b�rakmak i�in tum sat�rlara o y�zden
		{
			cout <<" ";
		}
		cout <<"*";
		cout << endl; // alt alta ge�mesi i�in y�ld�zlar�n
	}


	for (int z = 1; z <= 10; z++) //Bu d�ng�de karenin alt sat�r� olan 10 tane * yap�ld� tekrardan
	{
		cout << "*";
	}




		
	return 0;
}