/*) f(x,y) fonksiyonunu; x�in 0�dan b�y�k de�erleri i�in f(x,y)= x2+4y+3,
 x�in di�er de�erleri i�in f(x,y)= x3+3y olarak hesaplay�p
 sonucu ekrana yazan program�n C kodunu yaz�n�z.*/
 
 #include<stdio.h>
 #include<math.h>
 int main(void)
 {
 	float x,y,f;
 	printf("x ve y yi giriniz:");
 	scanf("%f%f",&x,&y);
 	
 if(x>0)
		f=pow(x,y)*2+4*y+3;
	else
		f=pow(x,y)*3+3*y;
 	
 	printf("F=%f",f);
 	
 	
 	return 0;
 	
 }
