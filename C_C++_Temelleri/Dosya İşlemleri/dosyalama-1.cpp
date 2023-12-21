/*
Dosya Açma Metodlarý:
--------------------

"w" => Yeni bir dosya açmak ve içine veri yazmak için kullanýlýr. Eðer ayný konumda ayný isimde 
dosya mevcutsa önceki bilgileri siler ve imlecimizi dosya baþýna getirir.

"r" => Dosyayý okuma modunda açar. Dosya göstergeci sayfa baþýndadýr.

"a" => Dosyayý ekleme modunda açar. Dosya yoksa eðer oluþturur. Dosya göstergeci sayfa
sonundadýr. Var olan bilgiler silinmez.

"w+" => Dosyayý yazma modunda açar, okuma da yapýlabilir.
"r+" => Dosyayý okuma modunda açar, yazma da yapýlabilir.
"a+" => Dýsyayu ekleme modunda açar, okuma da yapýlabilir.

fopen() => Dýsya oluþturur, açar.
fclose() => Dosyayý kapatýr.
putc() => Dosyaya karakter yazar.
getc() => Dosyadan karakter okur.
feof() => Dosya sonuna gelindiðini sorgular.
fprintf() => Dosyaya formatlý veri yazar.
fscanf() => Dosyadan formatlý veri okur.

*/

// Visual Studio bunu yazmazsak hata veriyor!!! Hatamýz þu: _CRT_SECURE_NO_WARNINGS
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");

	FILE* fp; // Dosyamýzý tutacak FILE pointer deðiþkeni fp'yi oluþturduk.

	// .... \ .... sembolu kaçýþ karakterlerinde kullanýldýðý için dosya iþlemlerinde \\ sembolü kullanýlýr.
	// Normalde bilgisayarlarda \ kullanýlýr.

	// \\ ile uðraþmak yerine sadece dosyanýn adýný yazarsak ilgili klasörde bu dosya oluþturulur.

	fp = fopen("ilkders.txt", "w");
	// Dosyayý açtýktan sonra iþimiz bitince kapatmalýyýz.
	fclose(fp);

	// L sürücüsu olmadýðý için NULL deðeri dönecektir.
	// FILE* fp2 = fopen("L:\\ilkders.txt", "w");

	int sayi;
	FILE* fp2 = fopen("ilkders2.txt", "w");

	if (fp2 == NULL)
	{
		printf("Sürücü Bulunamadý!!!");
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			printf("%d. sayýyý giriniz: ", i + 1);
			scanf("%d", &sayi);
			fprintf(fp2, "%d\n", sayi);
		}
	}

	fclose(fp2);

	return 0;
}
