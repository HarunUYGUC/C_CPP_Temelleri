#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
using namespace std;

int main()
{
	// putc() => Dosyaya tek bir karakteri yazmayý saðlar.
	// getc() => Dosyadan tek bir karakteri okumayý saðlar.
	// gets() => Boþluk içerse bile string verinin tamamýný almaya yarar.

	setlocale(LC_ALL, "Turkish");

	FILE* fp;
	char cumle[100];
	char kr;

	// YAZMA ÝÞLEMLERÝ

	fp = fopen("yazma-okuma-modu.txt", "w");

	if (fp == NULL)
	{
		printf("Dosyanýz Oluþturulamadý!!!");
	}
	else
	{
		printf("Bir Cümle Giriniz: ");
		gets_s(cumle);

		for (int i = 0; i < strlen(cumle); i++)
		{
			putc(cumle[i], fp);
		}
	}

	fclose(fp);

	// OKUMA ÝÞLEMLERÝ

	fp = fopen("yazma-okuma-modu.txt", "r");

	if (fp == NULL)
	{
		printf("Dosyanýz Açýlamadý!!!");
	}
	else
	{
		while ((kr = getc(fp)) != EOF)
		{
			printf("%c", kr);
		}
	}

	fclose(fp);

	return 0;
}
