#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <cstring> // strcmp() gibi hazýr string fonksiyonlarýný kullanmak için gerekli kütüphane.
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	FILE* fp;
	char ad[20], babaAdi[20], arama[20];
	int dYili;
	int bayrak = 0;

	fp = fopen("ornek.txt", "r");

	if (fp == NULL)
	{
		printf("Dosya Bulunamadý!!!");
	}
	else
	{
		printf("Kimin Kaydý Getirilsin?: ");
		scanf("%s", arama);

		while (fscanf(fp, "%s %s %d", ad, babaAdi, &dYili) != EOF)
		{
			// String ifadelerde karþýlaþtýrma yapmak için strcmp() fonksiyonu kullanýlýr.
			// Karþýlaþtýrýlan ifadeler birbirine eþitse 0 sonucu üretilir.

			if (strcmp(ad, arama) == 0)
			{
				printf("%s\t %s\t %d\n", ad, babaAdi, dYili);
				bayrak = 1;
			}
		}

		if (bayrak == 0)
			printf("Kayýt Bulunamadý!!!");
	}

	fclose(fp);

	return 0;
}
