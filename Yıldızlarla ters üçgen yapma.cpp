/*

      *********
	   *******
	    *****
	     ***
	      *
*/
#include<iostream>
using namespace std;

int main()
{
	int sayac = 9;
	for (int a = 1; a <= 5; a++) //Bu d�ng� �eklin programdaki sat�r say�s�n� belirliyor
	{
		for (int b = 0; b < sayac; b++) //bu d�ng� s�t�n gibi y�ld�zlar� 2�er 2�er azalt�yor
		{
			cout << "*";
			
		}
		cout << endl;
		sayac -= 2;

		for (int c = 0; c < a; c++)
		{
			cout << " ";
		}
	}



	return 0;
}

