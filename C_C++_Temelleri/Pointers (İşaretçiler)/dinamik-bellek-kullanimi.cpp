/*
malloc() : Programýn çalýþma anýnda belirli bir bellek alanýný tahsis eder.

calloc() : Programýn çalýþma anýnda belirli bir bellek alanýný tahsis eder ve bu alaný sýfýrlar, yani null (\n) haline getirir.

realloc() : malloc veya calloc ile tahsis edilen bellek alanýnýn büyütmek veya küçültmek için kullanýlýr.

free() : Tahsis edilen bellek alanýný serbest býrakýr.

Bu fonksiyonlar yardýmýyla dinamik dizi oluþturup üzerinde deðiþiklikler yapabiliriz.
Bu fonksiyonlar yardýmýyla alan tahsis etmek için byte cinsinden veri girmemiz gerekmektedir.
*/
/*
malloc() ve calloc() fonksiyonlarýný kullandýktan sonra (realloc() da olur tabii) free() fonksiyonunu kullanarak tahsis edilen 
belleði kapatmalýyýz. Eðer kapatmazsak programý her çalýþtýrdýðýmýzda (bilgisayar kapatýlana dek) diðer tahsis edilen 
bellek alanlarý silinmediði halde bellekte belirtilen miktarda yeni alanlar açýlýr ve bu yüzden ram gereksiz ve aþýrý 
kullanýlýr yani dolar, donmalar meydana gelir.
*/

/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int* p;
	// p = (int*)malloc(10 * sizeof(int));
	p = (int*)calloc(10, sizeof(int));

	for (int i = 0; i < 10; i++)
		p[i] = i;

	cout << "Ýlk hali: " << endl;
	for (int i = 0; i < 10; i++)
		cout << p[i] << endl; 

	p = (int*)realloc(p, 10 * sizeof(int));

	for (int i = 10; i < 20; i++)
		p[i] = i;

	cout << endl << "Geniþletilmiþ hali: " << endl;
	for (int i = 0; i < 20; i++)
		cout << p[i] << endl;
	
	free(p);

	return 0;
}
*/
