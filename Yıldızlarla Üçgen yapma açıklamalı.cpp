/*
         *
		***
	   *****
	  *******
	 *********
*/
#include<iostream>
using namespace std;

int main()
{
	int e=1;

	for (int a = 1; a <= 5; a++)  //Bu d�ng� �eklin programdaki sat�r say�s�n� belirliyor
	{
		for (int b = 4; b >= a; b--) //Bu d�ng� sat�r�n sondan 1 er 1 er azalmas�n� sa�l�yor 4.sat�rdan ba�lams�n�n sebebi ilk o sat�rda azalma oluyor.
		{
			cout << " ";

		}
		for (int c = 0; c < e; c++) //Bu d�ng� programdaki e ani 1 y�ld�z dan ba�l�yor 2 �er artacak sayac (e=e+2);
		{
			cout << "*";
		}
		cout << endl;
		e = e + 2;
	}



	return 0;
}