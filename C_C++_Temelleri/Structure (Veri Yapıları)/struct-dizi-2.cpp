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
		cout << "Müþterinin kimlik numarasýný giriniz: ";
		cin >> mus[i].id;

		cout << "Müþterinin adýný giriniz: ";
		cin >> mus[i].ad;

		cout << "Müþterinin bakiyesini giriniz: ";
		cin >> mus[i].bakiye;

		cout << "*************" << endl;
	}

	cout << "Bilgileri getirilecek müþteri adýný giriniz: ";
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
