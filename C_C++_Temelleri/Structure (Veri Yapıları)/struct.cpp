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

	cout << "��rencinin numaras�n� giriniz: ";
	cin >> ogr.numara;

	cout << "��rencinin ad�n� giriniz: ";
	cin >> ogr.ad;

	cout << "��rencinin soyad�n� giriniz: ";
	cin >> ogr.soyad;

	cout << "��rencinin ortalamas�n� giriniz: ";
	cin >> ogr.ortalama;

	cout << endl;

	cout << "Numara" << "\t" << "Ad" << "\t" << "Soyad" << "\t" << "Ortalama" << endl;
	cout << ogr.numara << "\t" << ogr.ad << "\t" << ogr.soyad << "\t" << ogr.ortalama;

	return 0;
}
