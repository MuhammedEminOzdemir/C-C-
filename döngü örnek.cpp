/*�ki karde�in ya�lar� 2 ve 4�t�r,
 annelerinin ya�� ise 25�tir.
  Ka� y�l sonra karde�lerin ya�lar�n�n toplam�, annelerinin ya��n� ge�er?*/

#include<stdio.h>
int main(void)
{
	int k1=2,k2=4;
	int anne=25;
	int yil;
	
	for(yil=0;k1+k2<=anne;yil++)
	{
		k1++;
		k2++;
		anne++;
		
	}
	printf("%d yil gecer",yil);

return 0;
}

/*Klavyeden girilen m ve n tamsay�lar�n�n
 aras�nda kalan tek ve �ift say�lar�n toplamlar�n�
  bulan ve ekrana yazan C program�n� while ve for kullanarak yaz�n�z.*/
  
 #include<stdio.h>
int main(void)
{
	int m,n,tek=0,cift=0;
	printf("m ve n sayilarinin giriniz:");
	scanf("%d%d",&m,&n);
	
	for(int i=m;i<=n;i++)
	{
		if(i%2==0)
		cift=cift+i;
		else
		tek=tek+i;
		
	}
	
	printf("Ciftler Toplami=%d\nTekler Toplami=%d",cift,tek);
		
return 0;	
}
  
  
