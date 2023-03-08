/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int adet = 8, toplam = 0;

	//cout << "Kaç tane sayý girip toplamak istiyorsunuz?: ";
	//cin >> adet;

	int sayilar[8]; // sayilar[adet] þeklinde dinamik dizi oluþturmak için pointer kullanmamýz gerekiyor.
	// Þu an da pointer kullanmayý bilmediðim için ileride bu soruya dönüþ yapacaðým.
	// Kod þu an da istediðim gibi çalýþýyor fakat adet bilgisini kullanýcýdan almam gerekiyordu.

	for (int i = 0; i < adet; i++)
	{
		cout << i + 1 << ". sayýyý giriniz: ";
		cin >> sayilar[i];
	}

	for (int i = 0; i < adet; i++)
	{
		toplam += sayilar[i];
	}

	for (int i = 0; i < (adet - 1); i++)
	{
		cout << sayilar[i] << " + ";
	}

	cout << sayilar[adet - 1] << " = " << toplam;

	return 0;
}
*/
