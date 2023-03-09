/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi1[] = { 15, 36, 32, 72 };
	int sayi2[4];

	for (int i = 0; i < 4; i++)
	{
		sayi2[i] = sayi1[i];
	}

	for (int i = 0; i < 4; i++)
	{
		cout << sayi2[i] << endl;
	}

	return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi1[] = { 15, 36, 32, 72 };
	int sayi2[4];

	cout << sayi1 << " " << sayi2 << endl;  // Adresleri farklý.
	
	memcpy(sayi2, sayi1, sizeof(sayi1));

	cout << sayi1 << " " << sayi2 << endl;  // Adresleri yine farklý.
	// Yani sadece hafýzadaki veriler kopyalanýr, bellek adresi deðil.

	for (int i = 0; i < 4; i++)
	{
		cout << sayi2[i] << endl;
	}

	return 0;
}
*/
