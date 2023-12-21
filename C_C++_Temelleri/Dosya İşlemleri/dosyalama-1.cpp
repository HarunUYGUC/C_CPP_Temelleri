/*
Dosya A�ma Metodlar�:
--------------------

"w" => Yeni bir dosya a�mak ve i�ine veri yazmak i�in kullan�l�r. E�er ayn� konumda ayn� isimde 
dosya mevcutsa �nceki bilgileri siler ve imlecimizi dosya ba��na getirir.

"r" => Dosyay� okuma modunda a�ar. Dosya g�stergeci sayfa ba��ndad�r.

"a" => Dosyay� ekleme modunda a�ar. Dosya yoksa e�er olu�turur. Dosya g�stergeci sayfa
sonundad�r. Var olan bilgiler silinmez.

"w+" => Dosyay� yazma modunda a�ar, okuma da yap�labilir.
"r+" => Dosyay� okuma modunda a�ar, yazma da yap�labilir.
"a+" => D�syayu ekleme modunda a�ar, okuma da yap�labilir.

fopen() => D�sya olu�turur, a�ar.
fclose() => Dosyay� kapat�r.
putc() => Dosyaya karakter yazar.
getc() => Dosyadan karakter okur.
feof() => Dosya sonuna gelindi�ini sorgular.
fprintf() => Dosyaya formatl� veri yazar.
fscanf() => Dosyadan formatl� veri okur.

*/

// Visual Studio bunu yazmazsak hata veriyor!!! Hatam�z �u: _CRT_SECURE_NO_WARNINGS
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");

	FILE* fp; // Dosyam�z� tutacak FILE pointer de�i�keni fp'yi olu�turduk.

	// .... \ .... sembolu ka��� karakterlerinde kullan�ld��� i�in dosya i�lemlerinde \\ sembol� kullan�l�r.
	// Normalde bilgisayarlarda \ kullan�l�r.

	// \\ ile u�ra�mak yerine sadece dosyan�n ad�n� yazarsak ilgili klas�rde bu dosya olu�turulur.

	fp = fopen("ilkders.txt", "w");
	// Dosyay� a�t�ktan sonra i�imiz bitince kapatmal�y�z.
	fclose(fp);

	// L s�r�c�su olmad��� i�in NULL de�eri d�necektir.
	// FILE* fp2 = fopen("L:\\ilkders.txt", "w");

	int sayi;
	FILE* fp2 = fopen("ilkders2.txt", "w");

	if (fp2 == NULL)
	{
		printf("S�r�c� Bulunamad�!!!");
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			printf("%d. say�y� giriniz: ", i + 1);
			scanf("%d", &sayi);
			fprintf(fp2, "%d\n", sayi);
		}
	}

	fclose(fp2);

	return 0;
}
