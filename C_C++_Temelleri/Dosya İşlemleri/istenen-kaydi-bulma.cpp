#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <cstring> // strcmp() gibi haz�r string fonksiyonlar�n� kullanmak i�in gerekli k�t�phane.
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
		printf("Dosya Bulunamad�!!!");
	}
	else
	{
		printf("Kimin Kayd� Getirilsin?: ");
		scanf("%s", arama);

		while (fscanf(fp, "%s %s %d", ad, babaAdi, &dYili) != EOF)
		{
			// String ifadelerde kar��la�t�rma yapmak i�in strcmp() fonksiyonu kullan�l�r.
			// Kar��la�t�r�lan ifadeler birbirine e�itse 0 sonucu �retilir.

			if (strcmp(ad, arama) == 0)
			{
				printf("%s\t %s\t %d\n", ad, babaAdi, dYili);
				bayrak = 1;
			}
		}

		if (bayrak == 0)
			printf("Kay�t Bulunamad�!!!");
	}

	fclose(fp);

	return 0;
}
