/*

strchr(char s1[], char c1) => c1 karakterinin s1 stringi i�inde yer al�p almad���n� kontrol eder. 
E�er yer al�yorsa pointer de�i�kenine yer ald��� ilk noktan�n adresini d�nd�r�r.

strrchr(char s1[], char c1) => c1 karakterini s1 string ifadesinin sonundan arama yapar.
E�er yer al�yorsa pointer de�i�kenine yer ald��� ilk noktan�n adresini d�nd�r�r.

strstr(char s1[], char s2[]) => s2 stringinde yer alan karakterlerden s1 stringinde yer al�p almad���n� kontrol eder.
Karakterlerin yer almas� durumunda pointer de�i�kenine ilk konum bilgisini atar.

strcspn(char s1[], char s2[]) => bir karakter dizisi i�indeki karakterlerin herhangi birinin di�er karakter dizisi
i�inde bulundu�u ilk yerin indeksini hesaplar.

*/

/*
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	//char str[] = "Bilisim Dunyasi Udemy Kursu";
	//char* ptr;

	//ptr = strchr(str, 'm');
	//printf("%x \n", ptr);
	//printf("%s", ptr);

	//ptr = strrchr(str, 'm');
	//printf("%x \n", ptr);
	//printf("%s", ptr);

	//ptr = strstr(str, "Dunyasi");
	//printf("%x \n", ptr);
	//printf("%s", ptr);

	//ptr = strstr(str, "program");
	//printf("%x \n", ptr);
	//printf("%s", ptr);


	//char str[] = "Bilisim Dunyasi Udemy Kursu";
	//int konum;

	//konum = strcspn(str, "Uum");
	//printf("%d", konum);

	return 0;
}
*/
