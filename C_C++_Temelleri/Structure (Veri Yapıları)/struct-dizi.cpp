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

	cout << "ID" << "\t" << "Ad" << "\t" << "Bakiye" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << mus[i].id << "\t" << mus[i].ad << "\t" << mus[i].bakiye << endl;
	}
	
	return 0;
}
