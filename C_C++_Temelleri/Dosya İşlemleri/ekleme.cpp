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

	fp = fopen("ekleme.txt", "a");

	if (fp == NULL)
	{
		printf("Dosyanýz Açýlmadý");
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			printf("%d. sayýyý giriniz: ", i + 1);
			scanf("%d", &sayi);
			fprintf(fp, "%d\n", sayi);
		}
	}

	fclose(fp);

	return 0;
}
