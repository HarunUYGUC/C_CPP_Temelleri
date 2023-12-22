#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
using namespace std;

int main()
{
	// putc() => Dosyaya tek bir karakteri yazmay� sa�lar.
	// getc() => Dosyadan tek bir karakteri okumay� sa�lar.
	// gets() => Bo�luk i�erse bile string verinin tamam�n� almaya yarar.

	setlocale(LC_ALL, "Turkish");

	FILE* fp;
	char cumle[100];
	char kr;

	// YAZMA ��LEMLER�

	fp = fopen("yazma-okuma-modu.txt", "w");

	if (fp == NULL)
	{
		printf("Dosyan�z Olu�turulamad�!!!");
	}
	else
	{
		printf("Bir C�mle Giriniz: ");
		gets_s(cumle);

		for (int i = 0; i < strlen(cumle); i++)
		{
			putc(cumle[i], fp);
		}
	}

	fclose(fp);

	// OKUMA ��LEMLER�

	fp = fopen("yazma-okuma-modu.txt", "r");

	if (fp == NULL)
	{
		printf("Dosyan�z A��lamad�!!!");
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
