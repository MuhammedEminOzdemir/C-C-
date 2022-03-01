#include<iostream>
using namespace std;

int main(void)
{
	int satir, sutun;
	cout << "satir ve sutun giriniz:";
		cin >> satir >> sutun;
		for (int i = 0; i < satir; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << "*";
			}
			cout << endl;
	}


	return 0;
}
/*Her sat�rla beraber i de�eri art�yor ancak her sat�rda sadece i de�eri kadar * sembol� g�steriliyor, yani 1. sat�rda bir tane * sembol�, 2. sat�rda 2 tane * sembol� �eklinde bir algoritma geli�tirmemiz laz�m.
�ncelikle kullanaca��m�z d�ng�lere karar vermemiz laz�m, sat�r say�s� g�rebilece�iniz gibi kullan�c�dan al�nd��� yani sonu belli bir de�er oldu�u i�in sat�rlar� olu�turmak i�in for d�ng�s� kullanmal�y�z, 
di�er yandan s�tunlarda ise * sembol� say�s� sat�r say�s�na ba�l� oldu�u i�in belli bir sabit son de�ere sahip de�ildir ve kar��la�t�rma i�lemi gerekti�i i�in while d�ng�s� kullanmam�z uygun olacakt�r.
D�� d�ng�de for yap�s�n�, i� d�ng�de ise while yap�s�n� kullanmaya karar verdikten sonra art�k i�lemlere ge�ebiliriz, d��ta ki for  d�ng�s�n�n de�erinin s�ras�yla artarak kullan�c�n�n girdi�i de�ere kadar 
gidece�ini biliyoruz,
i�te ise while d�ng�s�n� �al��t�rmak i�in yani * sembol�n� ekrana bast�rmak i�in bir �art kullanmam�z gerekiyor, 
bu �rnekte ise g�rebilece�iniz gibi i�te ki d�ng�n�n indisi d��taki d�ng�n�n indisinden k���k oldu�u s�rece ekrana * sembol�n� bas�yor,
yani while d�ng�s�n�n �art� bu olmal�, e�er �art sa�lan�yor ise d�ng�ye girilmeli ve indis de�eri �art sa�lanmayana kadar birer birer artt�r�lmal�d�r.*/