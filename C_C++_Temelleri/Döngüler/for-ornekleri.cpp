// Kullan�c�dan al�nan 10 say�n�n toplam�n� veren program.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int i, sayi, toplam = 0;

	for (i = 1; i <= 10; i++)
	{
		cout << i << ". say�y� giriniz: ";
		cin >> sayi;

		toplam += sayi;
	}
	
	cout << "Girdi�iniz say�lar�n toplam� = " << toplam;
}


// Kullan�c�dan al�nan say�n�n fakt�riyelini hesaplayan program.

#include <iostream>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Turkish");
	int i, sayi, faktoriyel = 1;

	cout << "Fakt�riyelini hesaplamak istedi�iniz say�y� giriniz: ";
	cin >> sayi;

	for (i = 1; i <= sayi; i++)
	{
		faktoriyel *= i;
	}

	cout << sayi << " say�s�n�n fakt�riyeli = " << faktoriyel;
}
