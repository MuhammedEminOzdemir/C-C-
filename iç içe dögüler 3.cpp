#include <iostream>
using namespace std;
int main()
{
	cout << "ic ice donguler ornekler" << endl;

	int boyut;

	cout << "lutfen boyut bildiren bir sayi giriniz" << endl;
	cin >> boyut;

	for (int a = 1; a <= boyut; a++) //bu for d�ng�s� iki tane for'u kapsamaktad�r
	{

		for (int b = 1; b < a; b++) //ilk for d�ng�s� bo�luk say�s�n� belirleyecek
		{
			cout << " ";
		}

		for (int c = 1; c <= boyut - a + 1; c++) //ikinci for d�ng�s� ise y�ld�z say�s�n� belirleyecektir
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
