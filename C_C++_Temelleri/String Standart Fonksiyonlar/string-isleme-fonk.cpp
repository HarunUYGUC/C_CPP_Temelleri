/*

strcpy(char s1, const char s2) => s2 stringini s1 dizisi içine kopyalar. s1'in deðeri döndürülür.

strncpy(char s1, const char s2, size_t n) => s2 stringinin en fazla n karakterini s1 dizisi içine kopyalar. 
s1'in deðeri döndürülür.

strcat(char s1, const char s2) => s2 stringini s1 dizisine ekler. s2'nin ilk karakteri s1 dizisinin null karakteri
üzerine yazýlýr. s1'in deðeri döndürülür.

strncat(char s1, const char s2, size_t n) => s2 stringinin en fazla n karakterini s1 dizisine ekler. s2'nin ilk
karakteri s1 dizisinin null karakteri üzerine yazýlýr. s1'in deðeri döndürülür.

strset(char s1, char s2) => s1 stringini s2 char ile doldurur.

strrev(s1) => s1 stringini ters çevirir.

strlwr(s1) => s1 stringini küçük harfe dönüþtürür.

strupr(s1) => s1 stringini büyük harfe dönüþtürür.

*/

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

void string_kopyala(char kd1[], char kd2[])
{
	int i = 0;

	while (kd2[i] != '\0')
	{
		kd1[i] = kd2[i];
		i++;
	}

	kd1[i] = '\0';
}


int main()
{
	setlocale(LC_ALL, "Turkish");
	char s1[] = "Biliþim Dünyasý";
	char s2[100];

	//strcpy_s(s2, s1);
	//cout << s2;
	
	char s1[100] = "Biliþim Dünyasý";
	char s2[100] = "C ve C++ Kursu";

	//strcpy_s(s2, s1);
	//cout << s2;
	
	//cout << "Ýlk hali: " << s1 << endl;
	//string_kopyala(s1, s2); // strcpy() fonksiyonunun kendimiz oluþturduk.
	//cout << "Son hali: " << s1;

	//cout << "Ýlk hali: " << s1 << endl;
	//strncpy_s(s1, s2, 5);
	//cout << "Son hali: " << s1;

	//cout << "Ýlk hali: " << s1 << endl;
	//strcat_s(s1, s2);
	//cout << "Son hali: " << s1;

	//cout << "Ýlk hali: " << s1 << endl;
	//strncat_s(s1, s2, 7);
	//cout << "Son hali: " << s1;
	
	//cout << "Ýlk hali: " << s1 << endl;
	//_strset_s(s1, 'w');
	//cout << "Son hali: " << s1;
	
	//cout << "Ýlk hali: " << s1 << endl;
	//_strrev(s1);
	//cout << "Son hali: " << s1;

	//cout << "Ýlk hali: " << s1 << endl;
	//_strlwr_s(s1);
	//cout << "Son hali: " << s1;

	//cout << "Ýlk hali: " << s1 << endl;
	//_strupr_s(s1);
	//cout << "Son hali: " << s1;

	return 0;
}
