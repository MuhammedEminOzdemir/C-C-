//============================================================================
// Name        : Muhasebe.cpp
// Description : Ic�ce For donguleri ve goto uygulamasi: bulmaca cozumu
//============================================================================
/* Bulmaca tanimi:100 i��i �al��t�rd���m bir fabrika var. Toplam �al��ma
 * s�relerine g�re 3 ayr� �cret �d�yorum: Baz� i��iler ayda 500 birim,
 * baz�lar� 100 birim ve baz�lar� 5 birim maa� al�yor. Her kategoride en az
 * bir i��i bulunmaktad�r.
 * Ayda 10000 birim maa� �demesi yap�yorum. Ka� i��inin maa�� ayda 5 birimdir?
 */
#include <iostream>
using namespace std;

int main() {
	//Butun olasi degerleri deneyerek cozume ulasma
	int isci5, isci100, isci500;
	for(isci500 = 1; isci500 < 20; isci500++){
		for(isci100 = 1; isci100 < 98; isci100++){
			isci5 = 100 - (isci500 + isci100);
			if((500 * isci500 + 100 * isci100 + 5 * isci5) == 10000){
				goto bulundu;
			}
		}
	}
	bulundu:
		cout << "5 tl alanlarin sayisi: " << isci5 << endl;
		cout << "100 tl alanlarin sayisi: " << isci100 << endl;
		cout << "500 tl alanlarin sayisi: " << isci500 << endl;
	return 0;
}
