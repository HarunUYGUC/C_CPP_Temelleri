/*

strcmp(s1, s2) => �ki string ifadeyi kar��la�t�r�r. �ki ifade e�itse 0 de�eri d�ner.
strncmp(s1, s2, n) => �ki stringin ilk n karakterini kar��la�t�r�r. �ki ifade e�itse 0 de�eri d�ner.

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

	// E�er kar��la�t�rma i�lemindeki b�t�n karakterler birbirine e�itse 0 sonucu d�ner.

	// Girdi�imiz karakter dizisindeki yanl�� karakterin bulundu�u yerdeki karakter, veri taban�ndaki o karakterin 
	// bulundu�u konumdaki karakterden alfabede daha �nce geliyorsa(yani int olarak daha k���k bir say� ise) 1 
	// de�eri d�nerken tam tersi bir durumda ise - 1 de�eri d�ner.

	cout << strcmp(kadi, "Bilisim") << endl;	// 0
	cout << strcmp(kadi, "Ailisim") << endl;	// 1
	cout << strcmp(kadi, "Cilisim") << endl;	// -1

	cout << "Kullan�c� Ad�n� Giriniz: ";
	cin >> girilenAd;
	cout << "�ifre Giriniz: ";
	cin >> girilenSifre;

	if (strcmp(kadi, girilenAd) == 0 && strcmp(sifre, girilenSifre) == 0)
		cout << "Do�ru kullan�c� ad� ve �ifre girdiniz." << endl;
	else
		cout << "Yanl�� kullan�c� ad� veya �ifre girdiniz." << endl;

	char s1[100] = "Bilisim";
	char s2[100] = "Bilim";

	cout << strncmp(s1, s2, 3) << endl;
	cout << strncmp(s1, s2, 5) << endl;
	cout << strncmp(s1, s2, 6) << endl;

	return 0;
}
*/
