/*Girilen n satir sayis�na g�re * karakterlerini a�a��daki �ekilde yazd�ran program�n C kodunu yaz�n�z.
�rnek:
n=8 i�in
*
**
***
****
*****
******
*******
********     */

#include<stdio.h>
int main(void)
{
  int i,j;
  
  
  for(i=1;i<=8;i++)
  {
  	for(j=1;j<=i;j++)
  	
  	printf("*",i,j);
  	
  	printf("\n");
  }
	
	return 0;
}
