/*Klavyeden girilen iki tamsay� kenar bilgisini kullanarak
 yine klavyeden girilen 1 se�ene�i i�in dikd�rtgenin alan�n�,
  2 se�ene�i i�in de dikd�rtgenin �evresini hesaplay�p ekrana yazan program�n C kodunu yaz�n�z.*/
  
 #include<stdio.h>
int main()
{
	int a,b,cevre,alan,secim;
	
	printf("Iki tamsayi kenar uzunlugu giriniz:");
	scanf("%d%d",&a,&b);
	
	printf("Alan icin 1, cevre icin 2 giriniz:");
	scanf("%d",&secim);
	
	if(secim==1)
	{
		alan=a*b;
		printf("Alan=%d",alan);
	}
	if(secim==2)
	{
		cevre=2*(a+b);
		printf("Cevre=%d",cevre);
	}		
	return 0;
}

