#include<iostream>
using namespace std;

int main()
{
	//3  Basamakl� bir Armstrong say�s� olmas� durumunda, 
		//her basama��n k�plerinin toplam� say�n�n kendisine e�ittir.
		//�rne�in, 153 bir Armstrong say�s�d�r ��nk�

	//	153 = 1 * 1 * 1 + 5 * 5 * 5 + 3 * 3 * 3   =153

	int sayi;
	int num1=0;
	int sonuc=0;
	cout << "Lutfen pozitif bir sayi giriniz:";
	cin >> sayi;
	int gecici;
	gecici = sayi;
	
	while (gecici != 0)
	{
		num1 = gecici % 10; //modlar�na yani par�alar�na ayr�l�r
		sonuc += num1 * num1*num1; //rakamlar �arp�l�p toplan�r
		gecici /= 10;
	}


	if (sonuc == sayi) {

cout << sayi << " Armstrong sayidir.";
	}
		
	else {
cout << sayi << " Armstrong sayi degildir.";
	}
		





	return 0;

}