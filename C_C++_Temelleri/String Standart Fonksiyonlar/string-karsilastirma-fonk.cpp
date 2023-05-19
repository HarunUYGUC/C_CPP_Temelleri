/*

strcmp(s1, s2) => Ýki string ifadeyi karþýlaþtýrýr. Ýki ifade eþitse 0 deðeri döner.
strncmp(s1, s2, n) => Ýki stringin ilk n karakterini karþýlaþtýrýr. Ýki ifade eþitse 0 deðeri döner.

*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	char kadi[100] = "Bilisim";
	char sifre[100] = "Dunyasi";
	char girilenSifre[100];
	char girilenAd[100];

	// Eðer karþýlaþtýrma iþlemindeki bütün karakterler birbirine eþitse 0 sonucu döner.

	// Girdiðimiz karakter dizisindeki yanlýþ karakterin bulunduðu yerdeki karakter, veri tabanýndaki o karakterin 
	// bulunduðu konumdaki karakterden alfabede daha önce geliyorsa(yani int olarak daha küçük bir sayý ise) 1 
	// deðeri dönerken tam tersi bir durumda ise - 1 deðeri döner.

	cout << strcmp(kadi, "Bilisim") << endl;	// 0
	cout << strcmp(kadi, "Ailisim") << endl;	// 1
	cout << strcmp(kadi, "Cilisim") << endl;	// -1

	cout << "Kullanýcý Adýný Giriniz: ";
	cin >> girilenAd;
	cout << "Þifre Giriniz: ";
	cin >> girilenSifre;

	if (strcmp(kadi, girilenAd) == 0 && strcmp(sifre, girilenSifre) == 0)
		cout << "Doðru kullanýcý adý ve þifre girdiniz." << endl;
	else
		cout << "Yanlýþ kullanýcý adý veya þifre girdiniz." << endl;

	char s1[100] = "Bilisim";
	char s2[100] = "Bilim";

	cout << strncmp(s1, s2, 3) << endl;
	cout << strncmp(s1, s2, 5) << endl;
	cout << strncmp(s1, s2, 6) << endl;

	return 0;
}
*/
