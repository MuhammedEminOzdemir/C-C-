
//Karakter dizileri kullanilarak string manip�lasyonu



/*cin>> kullanarak klavyeden girilen bir string�i bir
karakter dizisinin i�ine atayabiliriz.

�rnek:
cin >> string1;

Fakat cin>> ile dizinin kapasitesinden fazla
karakterin okunabilece�i unutulmamal�d�r.
Fazladan girilen bilgi kaybolacakt�r.

null ile sonland�r�lm�� bir string�i temsil eden bir
karakter dizisi cout<< ile ekrana yazd�r�labilir.*/

#include<iostream>
using namespace std;
int main()
{
	char string[100]; //Max 100 karakter saklayan bir dizi
	char string1[]="Merhaba Hosgeldiniz";
	cout<<string1<<endl;
	
    cout<<"Adinizi soyadinizi giriniz: ",
	cin>>string;
	
	cout<<"Kullanici ismi arasinda bir bosluk\n";
	for(int i=0;i<string[i];i++)
	cout<<string[i]<<" ";
	 
	 
	cout<<endl;
	
	return 0;
}
