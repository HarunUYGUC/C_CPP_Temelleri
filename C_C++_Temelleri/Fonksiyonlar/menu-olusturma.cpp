/*
#include <iostream>
using namespace std;

int menu()
{
	int secenek;

	cout << "Karenin çevresini hesaplamak için (1)" << endl;
	cout << "Karenin alanını hesaplamak için (2)" << endl;
	cout << "Üçgenin çevresini hesaplamak için (3)" << endl;
	cin >> secenek;
	
	return secenek;
}

float kareninCevresi()
{
	float kenar;

	cout << "Karenin kenarını giriniz: ";
	cin >> kenar;

	return kenar * 4;
}

float kareninAlani()
{
	float kenar;

	cout << "Karenin kenarını giriniz: ";
	cin >> kenar;

	return kenar * kenar;
}

float ucgeninCevresi()
{
	float kenar1, kenar2, kenar3;

	cout << "Üçgenin 1. kenarını giriniz: ";
	cin >> kenar1;
	cout << "Üçgenin 2. kenarını giriniz: ";
	cin >> kenar2;
	cout << "Üçgenin 3. kenarını giriniz: ";
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
		cout << "Karenin çevresi = " << kareninCevresi();
		break;
	}
	case 2:
	{
		cout << "Karenin alanı = " << kareninAlani();
		break;
	}
	case 3:
		cout << "Üçgenin çevresi = " << ucgeninCevresi();
		break;
	}
}
*/
