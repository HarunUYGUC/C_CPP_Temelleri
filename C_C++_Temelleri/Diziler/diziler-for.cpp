/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int dizi1[] = { 80, 90, 72, 56, 85, 65, 90, 80 };
	int dizi2[10];
	int sayi;

	for (int i = 0; i < 8; i++)
	{
		cout << dizi1[i] << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << ". sayýyý giriniz: ";
		cin >> sayi,
		dizi2[i] = sayi;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << dizi2[i] << endl;
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
	int dizi[5];
	int toplam = 0;
	double ortalama;

	cout << "Girdiðiniz 5 sayýnýn ortalamasý hesaplanacak." << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << ". sayýyý giriniz: ";
		cin >> dizi[i];
	}

	for (int i = 0; i < 5; i++)
	{
		toplam += dizi[i];
	}

	ortalama = toplam / 5.0;
	cout << "5 sayýnýn ortalamasý = " << ortalama << endl;

	cout << "Aþaðýdakiler girdiðiniz sayýlardýr." << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << dizi[i] << endl;
	}
}
*/
