
/*Girilen n sat�r say�s�na g�re a�a��daki matrisi yazd�ran program�n C kodunu yaz�n�z.
�rnek:
	
n=5 i�in

1bbbb
a1bbb
aa1bb
aaa1b
aaaa1

n=7 i�in

1bbbbbb
a1bbbbb
aa1bbbb
aaa1bbb
aaaa1bb
aaaaa1b
aaaaaa1  */

#include<stdio.h>
int main(void)
{
	int n;
	printf("n tamsayisini giriniz:");
	scanf("%d",&n);
	
	int i,j;
	
	for(i=0;i<n;i++)
	{
			for(j=0;j<i;j++)
			printf("a");
		printf("1");
		for(j=i+1;j<n;j++)
			printf("b");
		printf("\n");
	}
	
	
	
	
	
	return 0;
}
