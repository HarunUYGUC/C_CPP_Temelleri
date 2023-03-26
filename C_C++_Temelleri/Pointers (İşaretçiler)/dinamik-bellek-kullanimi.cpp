/*
malloc() : Program�n �al��ma an�nda belirli bir bellek alan�n� tahsis eder.

calloc() :�Program�n �al��ma an�nda belirli bir bellek alan�n� tahsis eder ve bu alan� s�f�rlar, yani null (\n) haline getirir.

realloc() :�malloc veya calloc ile tahsis edilen bellek alan�n�n b�y�tmek veya k���ltmek i�in kullan�l�r.

free() :�Tahsis edilen bellek alan�n� serbest b�rak�r.

Bu fonksiyonlar yard�m�yla dinamik dizi olu�turup �zerinde de�i�iklikler yapabiliriz.
Bu fonksiyonlar yard�m�yla alan tahsis etmek i�in byte cinsinden veri girmemiz gerekmektedir.
*/
/*
malloc() ve calloc() fonksiyonlar�n� kulland�ktan sonra (realloc() da olur tabii) free() fonksiyonunu kullanarak tahsis edilen 
belle�i kapatmal�y�z. E�er kapatmazsak program� her �al��t�rd���m�zda (bilgisayar kapat�lana dek) di�er tahsis edilen 
bellek alanlar� silinmedi�i halde bellekte belirtilen miktarda yeni alanlar a��l�r ve bu y�zden ram gereksiz ve a��r� 
kullan�l�r yani dolar, donmalar meydana gelir.
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

	cout << "�lk hali: " << endl;
	for (int i = 0; i < 10; i++)
		cout << p[i] << endl; 

	p = (int*)realloc(p, 10 * sizeof(int));

	for (int i = 10; i < 20; i++)
		p[i] = i;

	cout << endl << "Geni�letilmi� hali: " << endl;
	for (int i = 0; i < 20; i++)
		cout << p[i] << endl;
	
	free(p);

	return 0;
}
*/
