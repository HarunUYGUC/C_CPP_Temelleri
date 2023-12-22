#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <conio.h> // getche() fonksiyonunu kullanabilmek i�in gerekli.
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
		printf("Dosya Olu�turulamad�!!!");
	}
	else
	{
		while (1)
		{
			// scanf() ile string veri alma i�lemi asl�nda biraz sorunlu. ��nk�
			// bo�luk i�eren iki kelimeyi ayn� anda girmeye �al���rsak sadece ilk
			// kelimeyi girmi� oluruz, bo�luktan sonras� giri� olarak al�nmaz.

			// scanf() ile string veri giri�i al�rken &ad yazmak yerine ad yazmam�z
			// yeterlidir. ��nk� string de�i�kenler zaten ilk harfin adresini tutar.

			printf("��renci Ad�: ");
			scanf("%s", ad);

			printf("��rencinin Babas�n�n Ad�: ");
			scanf("%s", babaAdi);

			printf("��rencinin Do�um Y�l�: ");
			scanf("%d", &dYili);

			fprintf(fp, "%s\t %s\t %d\n", ad, babaAdi, dYili);

			printf("Yeni kay�t eklenecek mi? (E / H): ");
			// getche() fonksiyonu bir karakter girilene kadar bekleme i�lemi yapar.
			devam = _getche();

			if (devam == 'H')
				break;

			printf("\n");
		}
	}

	fclose(fp);

	return 0;
}
