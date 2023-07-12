#include <iostream>
using namespace std;

struct ogrenci
{
	int numara;
	char ad[20];
	char soyad[20];
	double ortalama;
};

int main()
{
	setlocale(LC_ALL, "Turkish");
	struct ogrenci ogr;

	cout << "Öðrencinin numarasýný giriniz: ";
	cin >> ogr.numara;

	cout << "Öðrencinin adýný giriniz: ";
	cin >> ogr.ad;

	cout << "Öðrencinin soyadýný giriniz: ";
	cin >> ogr.soyad;

	cout << "Öðrencinin ortalamasýný giriniz: ";
	cin >> ogr.ortalama;

	cout << endl;

	cout << "Numara" << "\t" << "Ad" << "\t" << "Soyad" << "\t" << "Ortalama" << endl;
	cout << ogr.numara << "\t" << ogr.ad << "\t" << ogr.soyad << "\t" << ogr.ortalama;

	return 0;
}
