/*Klavyeden girilen iki tamsay� kenar bilgisini kullanarak
 yine klavyeden girilen A veya a se�ene�i i�in dikd�rtgenin alan�n�,
  C veya c se�ene�i i�in de dikd�rtgenin �evresini hesaplay�p ekrana yazan program�n C kodunu yaz�n�z
   switch-case ile yaz�n�z. Di�er t�m se�eneklerde yanl�� bilgi girildi�i bilgisi kullan�c�ya verilecektir.*/
   
  #include<stdio.h>
int main()
{
	int a,b,cevre,alan;
	char secim;
	printf("Iki kenar uzunlugu giriniz\n:");
	scanf("%d%d",&a,&b);
	printf("Alan icin A veya a, cevre icin C veya c giriniz:");
	scanf(" %c",&secim);
	switch(secim)
	{
		case 'A':
		case 'a':alan=a*b;
				 printf("Alan=%d",alan);
				 break;
		case 'C':
		case 'c':cevre=2*(a+b);
				 printf("Cevre=%d",cevre);
				 break;
		default:printf("Gecersiz bir secim yaptiniz!");
	}		
	return 0;
}
