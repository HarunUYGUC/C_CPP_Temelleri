/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");

	switch (degisken)
	{
	case d1: 
	{
		islemler; 
		break;
	}
	case d2: 
	{
		islemler; 
		break;
	}	
	case d3: 
	{
		islemler; 
		break;
	}
	default:
	{
		cout << "Hatal� i�lem se�tiniz.";
	}
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi1, sayi2, islem;

	cout << "1. Say�y� Giriniz: ";
	cin >> sayi1;

	cout << "2. Say�y� Giriniz: ";
	cin >> sayi2;

	cout << endl << endl;
	cout << "**** ��lem Se�iniz ****" << endl;

	cout << "1. Toplama" << endl;
	cout << "2. ��karma" << endl;
	cout << "3. �arpma" << endl;
	cout << "4. B�lme" << endl;

	cin >> islem;

	switch (islem)
	{
	case 1: 
	{
		cout << sayi1 << " + " << sayi2 << " = " << sayi1 + sayi2;
		break;
	}
	case 2:
	{
		cout << sayi1 << " - " << sayi2 << " = " << sayi1 - sayi2;
		break;
	}
	case 3:
	{
		cout << sayi1 << " * " << sayi2 << " = " << sayi1 * sayi2;
		break;
	}
	case 4:
	{
		cout << sayi1 << " / " << sayi2 << " = " << float(sayi1) / sayi2;
		break;
	}
	default:
	{
		cout << "Hatal� i�lem se�tiniz.";
	}
	}
}
*/


// �ni. dersinden ��rendi�im kurallar...
/*
- {} kullanmadan da switch-case yap�s�ndaki case durumlar�n� farkl� sat�rlar�n aras�nda ; olacak �ekilde 
tek sat�rda yazabiliriz. Asl�nda bunu sadece switch-case durumu i�in de�il genel durumlarda da kullanabiliriz
ama �ok kullan��l� olaca��n� d���nm�yorum. Switch-case de ise duruma g�re gayet kullan��l� olabilir.

- �stteki case durumu ger�ekle�se de ger�ekle�mese de break komutunu i�ermiyorsa break komutu olan sat�ra kadarki
kodlar �al���r.
*/

/*
#include <stdio.h>

int main() {
	int s;

	printf("Bir tam say� giriniz: ");
	scanf_s("%d", &s);

	switch (s)
	{
	case 3:
	case 5:
	case 8: printf("Kazand�! \n"); printf("Deneme Metni: Harikas�n. :D"); break;
	case 1:
	case 4:
	case 7:
	case 9: printf("Kaybetti!"); break;
	default: printf("Berabere");
	}

	return 0;
}
*/
