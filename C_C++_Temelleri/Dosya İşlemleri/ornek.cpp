#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <conio.h> // getche() fonksiyonunu kullanabilmek için gerekli.
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	char ad[20], babaAdi[20];
	int dYili;
	FILE* fp;
	char devam;

	fp = fopen("ornek.txt", "w");

	if (fp == NULL)
	{
		printf("Dosya Oluþturulamadý!!!");
	}
	else
	{
		while (1)
		{
			// scanf() ile string veri alma iþlemi aslýnda biraz sorunlu. Çünkü
			// boþluk içeren iki kelimeyi ayný anda girmeye çalýþýrsak sadece ilk
			// kelimeyi girmiþ oluruz, boþluktan sonrasý giriþ olarak alýnmaz.

			// scanf() ile string veri giriþi alýrken &ad yazmak yerine ad yazmamýz
			// yeterlidir. Çünkü string deðiþkenler zaten ilk harfin adresini tutar.

			printf("Öðrenci Adý: ");
			scanf("%s", ad);

			printf("Öðrencinin Babasýnýn Adý: ");
			scanf("%s", babaAdi);

			printf("Öðrencinin Doðum Yýlý: ");
			scanf("%d", &dYili);

			fprintf(fp, "%s\t %s\t %d\n", ad, babaAdi, dYili);

			printf("Yeni kayýt eklenecek mi? (E / H): ");
			// getche() fonksiyonu bir karakter girilene kadar bekleme iþlemi yapar.
			devam = _getche();

			if (devam == 'H')
				break;

			printf("\n");
		}
	}

	fclose(fp);

	return 0;
}
