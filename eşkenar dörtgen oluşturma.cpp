#include<iostream>
using namespace std;

int main() 
{
	
	int i, j;
	for (i = 1; i < 10; i += 2)  //ka� sat�r olacak? 9 sat�r olarak verilmi�
	{
		for (j = 0; j < 9 - i/2 ; j++) // bosluk say�s�
		{
			cout << " ";
		}
		for (j = 0; j < i; j++)
		{
			cout << "*";
		} // y�ld�z say�s�
		cout << endl;
	}

	for (i = 7; i > 0; i -= 2) {

		for (j = 0; j < 9 - i / 2; j++)
		{
			cout << " ";
		}

		for (j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}











	return 0;

}