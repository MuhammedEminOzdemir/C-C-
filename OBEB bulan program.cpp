/*#include<iostream>
using namespace std;
int main()
{
	//�ki tam say�y� m�kemmel bir �ekilde b�lebilen en b�y�k tam say�, bu iki say�dan OBEB veya HCF olarak bilinir.

	int n1, n2;

	cout << "Enter two numbers: ";
	cin >> n1 >> n2;

	while (n1 != n2)
	{
		if (n1 > n2)
			n1 -= n2;
		else
			n2 -= n1;
	}

	cout << "HCF = " << n1;

	return 0;
}*/

//for d�ng�s� kullanarak 


#include <iostream>
using namespace std;

int main() {
	int n1, n2, hcf;
	cout << "Enter two numbers: ";
	cin >> n1 >> n2;

	//n2, n1'den b�y�kse, n1 ve n2 de�i�kenlerinin de�i�tirilmedir o zamanda temp ile de�i�tir de�i�kenle
	if (n1 > n2)
	{

    for (int i = 1; i <=  n2; ++i) 
	{
		if (n1 % i == 0 && n2 % i ==0) {
			hcf = i;
		}
	}

	}


	cout << "HCF = " << hcf;
	return 0;
}

