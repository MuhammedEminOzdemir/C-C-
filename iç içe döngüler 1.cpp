#include <iostream>
using namespace std;
int main()

{
	cout << "ic ice donguler ornekler" << endl;


	for (int i = 1; i <= 4; i++)
		/*bizim �arp�m tablomuz 1'den ba�alad��� i�in
		 * de�eri 1'e atayarak ba�lad�k ve ayr�ca
		 * de�erin 4'e <= olmas�n�n sebebi yine �arp�m tablomuzun
		 * 4'ler k�sm�nda bitiyor olmas�d�r. */
	{

		for (int a = 1; a <= 4; a++)
		{

			cout << i * a << " , ";
			// yan yana yaz�lmalar� i�in endl koymuyoruz, e�er koyarsak sat�r a�a�� k�s�ma ge�er

		}
		cout << endl;
	}

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	// boyutu kullan�c�dan al�nan �rnek
	int boyut;
	cout << "lutfen bir sayi giriniz.." << endl;
	cin >> boyut;
	for (int b = 1; b <= boyut; b++) {

		for (int c = 1; c <= boyut; c++) {

			cout << b * c << " , ";

		}
		cout << endl;
	}

	return 0;
}
