#include <iostream>
using namespace std;

int main()
{
	cout << "ic ice donguler - odevler" << endl;

	int b;
	cout << "lutfen boyutunu giriniz!" << endl;

	cin >> b;

	for (int i = 0; i < b; i++) { //sat�rlar i�in

		for (int k = 0; k < b; k++) { //s�tunlar i�in
			if (i + k >= b - 1) // sadece ters k��egen i�in i+k==b-1
				cout << "1  ";
			else
				cout << "0  "; //her sat�rda b tane 0 olacak 
		}

		cout << endl;
		//ve her sat�r bitti�ininde bir a�a�� sat�ra ge�icek
	}

	return 0;
}
