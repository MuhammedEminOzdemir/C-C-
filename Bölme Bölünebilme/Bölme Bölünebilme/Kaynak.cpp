#include<stdlib.h>
#include<stdio.h>

int main(void)
{
	int sayi;
	printf("Lutfen Bir Sayi Giriniz:");
	scanf_s("%d", &sayi); //kullan�c�dan sayi istedik


	if ((sayi % 13 == 0) && (sayi % 17 == 0)) // mod al�rken % i�areti kullan�larak (==0) tam b�l�n�yor anlam�ndad�r
	{
		printf("Girdiginiz sayi 13 ve 17' ye b�lunuyor\n");
	}

	if (sayi % 13 == 0)
	{
		printf("Sayi sadece 13'e bolunuyor\n");
	}

	if(sayi % 17 == 0) 
	{
		printf("Girdiginiz sayi sadece 17'e bolunuyor\n");
	}

	if ((sayi % 13 == 1) && (sayi % 17 == 1)) //mod al�rken % i�areti kullan�larak (== 1) tam b�l�nm�yor anlam�ndad�r
	{
		printf("sayi 13 ve 17'e bolunmuyor\n");
	}

	return 0;
}