// Kullanýcýdan alýnan 10 sayýnýn toplamýný veren program.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int i, sayi, toplam = 0;

	for (i = 1; i <= 10; i++)
	{
		cout << i << ". sayýyý giriniz: ";
		cin >> sayi;

		toplam += sayi;
	}
	
	cout << "Girdiðiniz sayýlarýn toplamý = " << toplam;
}


// Kullanýcýdan alýnan sayýnýn faktöriyelini hesaplayan program.

#include <iostream>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Turkish");
	int i, sayi, faktoriyel = 1;

	cout << "Faktöriyelini hesaplamak istediðiniz sayýyý giriniz: ";
	cin >> sayi;

	for (i = 1; i <= sayi; i++)
	{
		faktoriyel *= i;
	}

	cout << sayi << " sayýsýnýn faktöriyeli = " << faktoriyel;
}
