/*
#include <iostream>
using namespace std;

struct musteri
{
	int id;
	char ad[30];
	double bakiye;
};

int main()
{
	setlocale(LC_ALL, "Turkish");
	struct musteri mus[3];
	char musteriAdi[30];

	for (int i = 0; i < 3; i++)
	{
		cout << "M��terinin kimlik numaras�n� giriniz: ";
		cin >> mus[i].id;

		cout << "M��terinin ad�n� giriniz: ";
		cin >> mus[i].ad;

		cout << "M��terinin bakiyesini giriniz: ";
		cin >> mus[i].bakiye;

		cout << "*************" << endl;
	}

	cout << "Bilgileri getirilecek m��teri ad�n� giriniz: ";
	cin >> musteriAdi;

	cout << "ID" << "\t" << "Ad" << "\t" << "Bakiye" << endl;
	for (int i = 0; i < 3; i++)
	{
		if (strcmp(musteriAdi, mus[i].ad) == 0)
		{
			cout << mus[i].id << "\t" << mus[i].ad << "\t" << mus[i].bakiye;
		}
	}

	return 0;
}
*/
