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
		cout << "Hatalý iþlem seçtiniz.";
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

	cout << "1. Sayýyý Giriniz: ";
	cin >> sayi1;

	cout << "2. Sayýyý Giriniz: ";
	cin >> sayi2;

	cout << endl << endl;
	cout << "**** Ýþlem Seçiniz ****" << endl;

	cout << "1. Toplama" << endl;
	cout << "2. Çýkarma" << endl;
	cout << "3. Çarpma" << endl;
	cout << "4. Bölme" << endl;

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
		cout << "Hatalý iþlem seçtiniz.";
	}
	}
}
*/


// Üni. dersinden öðrendiðim kurallar...
/*
- {} kullanmadan da switch-case yapýsýndaki case durumlarýný farklý satýrlarýn arasýnda ; olacak þekilde 
tek satýrda yazabiliriz. Aslýnda bunu sadece switch-case durumu için deðil genel durumlarda da kullanabiliriz
ama çok kullanýþlý olacaðýný düþünmüyorum. Switch-case de ise duruma göre gayet kullanýþlý olabilir.

- Üstteki case durumu gerçekleþse de gerçekleþmese de break komutunu içermiyorsa break komutu olan satýra kadarki
kodlar çalýþýr.
*/

/*
#include <stdio.h>

int main() {
	int s;

	printf("Bir tam sayý giriniz: ");
	scanf_s("%d", &s);

	switch (s)
	{
	case 3:
	case 5:
	case 8: printf("Kazandý! \n"); printf("Deneme Metni: Harikasýn. :D"); break;
	case 1:
	case 4:
	case 7:
	case 9: printf("Kaybetti!"); break;
	default: printf("Berabere");
	}

	return 0;
}
*/
