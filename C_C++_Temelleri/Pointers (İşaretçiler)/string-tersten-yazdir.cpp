/*
#include <iostream>
using namespace std;

char* tersptr;

void tersYaz(char* cp)
{
	int uzunluk = strlen(cp) - 1;

	tersptr = (char*)calloc(uzunluk, sizeof(char));

	for (int i = uzunluk; i >= 0; i--)
	{
		tersptr[uzunluk - i] = cp[i];
	}
}

int main()
{
	setlocale(LC_ALL, "Turkish");
	char ad[] = "Biliþim";
	char* metin;

	metin = ad;
	tersYaz(metin);
	cout << tersptr;

	return 0;
}
*/
