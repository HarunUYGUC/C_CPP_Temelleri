// Di�er �rnekte, ChatGPT sayesinde :D pointer kullanarak hatay� d�zelttim. A�a��daki �ekilde bir soru sordum ve oldu.

/*
I want to determine the size of the list according to the number I will get from the user, but I am getting an error.

int piece;

cout << "How many numbers do you want to enter and then sum?: ";
cin >> piece;

int numbers[piece];
*/

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

/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int adet, toplam = 0;

	cout << "Ka� tane say� girip toplamak istiyorsunuz?: ";
	cin >> adet;

	int* sayilar = new int[adet];

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

	delete[] sayilar;

	return 0;
}
*/
