/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int adet = 8, toplam = 0;

	//cout << "Ka� tane say� girip toplamak istiyorsunuz?: ";
	//cin >> adet;

	int sayilar[8]; // sayilar[adet] �eklinde dinamik dizi olu�turmak i�in pointer kullanmam�z gerekiyor.
	// �u an da pointer kullanmay� bilmedi�im i�in ileride bu soruya d�n�� yapaca��m.
	// Kod �u an da istedi�im gibi �al���yor fakat adet bilgisini kullan�c�dan almam gerekiyordu.

	for (int i = 0; i < adet; i++)
	{
		cout << i + 1 << ". say�y� giriniz: ";
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
