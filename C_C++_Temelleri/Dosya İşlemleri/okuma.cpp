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
		printf("Dosya Bulunamad�!!!");
	}
	else
	{
		// Her dosyan�n sonunda dosya sonu g�stergeci (End of File) vard�r.
		// Bunun ad� EOF dur.

		// Dosyan�n sonuna kadarki verileri sat�r sat�r yazd�r�yoruz.
		while (fscanf(fp, "%d", &sayi) != EOF)
		{
			printf("%d\n", sayi);
		}
	}

	fclose(fp);

	return 0;
}
