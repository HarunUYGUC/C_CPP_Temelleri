/*
#include <iostream>
using namespace std;

int menu()
{
	int secenek;

	cout << "Karenin �evresini hesaplamak i�in (1)" << endl;
	cout << "Karenin alan�n� hesaplamak i�in (2)" << endl;
	cout << "��genin �evresini hesaplamak i�in (3)" << endl;
	cin >> secenek;
	
	return secenek;
}

float kareninCevresi()
{
	float kenar;

	cout << "Karenin kenar�n� giriniz: ";
	cin >> kenar;

	return kenar * 4;
}

float kareninAlani()
{
	float kenar;

	cout << "Karenin kenar�n� giriniz: ";
	cin >> kenar;

	return kenar * kenar;
}

float ucgeninCevresi()
{
	float kenar1, kenar2, kenar3;

	cout << "��genin 1. kenar�n� giriniz: ";
	cin >> kenar1;
	cout << "��genin 2. kenar�n� giriniz: ";
	cin >> kenar2;
	cout << "��genin 3. kenar�n� giriniz: ";
	cin >> kenar3;

	return kenar1 + kenar2 + kenar3;
}

int main()
{
	setlocale(LC_ALL, "Turkish");

	switch (menu())
	{
	case 1:
	{
		cout << "Karenin �evresi = " << kareninCevresi();
		break;
	}
	case 2:
	{
		cout << "Karenin alan� = " << kareninAlani();
		break;
	}
	case 3:
		cout << "��genin �evresi = " << ucgeninCevresi();
		break;
	}
}
*/
