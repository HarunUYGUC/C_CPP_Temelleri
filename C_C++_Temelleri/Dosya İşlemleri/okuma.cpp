#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	FILE* fp;
	int sayi;

	fp = fopen("ilkders2.txt", "r");

	if (fp == NULL)
	{
		printf("Dosya Bulunamadý!!!");
	}
	else
	{
		// Her dosyanýn sonunda dosya sonu göstergeci (End of File) vardýr.
		// Bunun adý EOF dur.

		// Dosyanýn sonuna kadarki verileri satýr satýr yazdýrýyoruz.
		while (fscanf(fp, "%d", &sayi) != EOF)
		{
			printf("%d\n", sayi);
		}
	}

	fclose(fp);

	return 0;
}
