#include <iostream>
using namespace std;

int main()
{
	float ortalama;
	int vize, final;

	cout << "Vize notunu giriniz: ";
	cin >> vize;
	
	cout << "Final notunu giriniz: ";
	cin >> final;

	if (vize < 0 || vize > 100 || final < 0 || final > 100)
	{
		cout << "Geçersiz not girdiniz.";
	}
	else
	{
		ortalama = vize * 0.3 + final * 0.7;
		cout << "Ortalamanýz = " << ortalama << endl;

		if (final >= 60 && ortalama >= 60)
		{
			cout << "Geçtiniz.";
		}
		else
		{
			cout << "Kaldýnýz.";
		}
	}
}
