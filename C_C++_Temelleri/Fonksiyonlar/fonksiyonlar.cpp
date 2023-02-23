/*

FONKSÝYONLAR:
-- Belirli bir iþlevi yerine getirmek üzere ana programdan baðýmsýz kod bloklarýna fonksiyon denir.
-- Ana program tarafýndan çaðrýlarak kodlarýn tekrar tekrar kullanýlmasýna imkan saðlar.
-- Kod tekrarýný önleyerek hata tespitini kolaylaþtýrýr.

Fonksiyonlarý 4 Baþlýk Altýnda Ýnceleyeceðiz:
1- Parametre Almayan
2- Parametre Alan
3- Geriye Deðer Döndürmeyen
4- Geriye Deðer Döndüren

*/

/*
#include <iostream>
using namespace std;

void mesaj()
{
	cout << "Fonksiyonunuz çalýþtý.";
}

int main()
{	
	setlocale(LC_ALL, "Turkish");
	mesaj();
}
*/

/*
#include <iostream>
using namespace std;

void mesaj();

int main()
{
	setlocale(LC_ALL, "Turkish");
	mesaj();
}

void mesaj()
{
	cout << "Fonksiyonunuz çalýþtý!";
}
*/
