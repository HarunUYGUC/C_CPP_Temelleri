/*

atoi() => atoi(char *ptr) ptr de�i�kenindeki string ifadeyi integer veri tipine d�n��t�r�r.
atof() => atof(char *ptr) ptr de�i�kenindeki string ifadeyi float veri tipine d�n��t�r�r.
atol() => atol(char *ptr) ptr de�i�kenindeki string ifadeyi long integer veri tipine d�n��t�r�r.

strtod() => strtod(char *ptr, char &endPtr) string ifadeyi double veri tipine d�n��t�r�r. 
String ifadede yer alan say�sal ifade d�n��t�r�ld�kten sonra geri kalan metinsel ifadenin ba�lang�� konumunu
tutan endPtr de�i�keni kullan�l�r. 
strtol() => strtol(char *ptr, char **endPtr, sayitabani) string to long integer

// "atoi" derken "to integer" demi� oluyoruz. "strtod" derken "string to double" demi� oluyoruz. Bu �ekilde 
// ak�lda tutmas� daha kolay olur.

*/

/*
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	//char tarih[] = "1983";
	//int tarih2;

	//tarih2 = atoi(tarih);
	//tarih2 += 10;
	//cout << tarih2 << endl;


	//char tarih[] = "1983bili�im";
	//int tarih2;

	//tarih2 = atoi(tarih);
	//tarih2 += 10;
	//cout << tarih2 << endl;
	

	//char tarih[] = "1983.25";
	//float tarih2;

	//tarih2 = atof(tarih);
	//tarih2 += 10;
	//cout << tarih2 << endl;


	//char tarih[] = "1983.25 bili�im";
	//float tarih2;

	//tarih2 = atof(tarih);
	//tarih2 += 10;
	//cout << tarih2 << endl;


	//char tarih[] = "1983.25 bili�im";
	//float tarih2;
	//char* ptrMetin;

	//tarih2 = strtod(tarih, &ptrMetin);
	//tarih2 += 10;
	//cout << tarih2 << endl;
	//cout << ptrMetin;


	//char tarih[] = "101983.25 bili�im";
	//long int tarih2;
	//char* ptrMetin;

	//tarih2 = strtol(tarih, &ptrMetin, 2);
	//cout << tarih2 << endl;
	//cout << ptrMetin;


	//char tarih[] = "101983.25 bili�im";
	//long int tarih2;
	//char* ptrMetin;

	//tarih2 = strtol(tarih, &ptrMetin, 10);
	//cout << tarih2 << endl;
	//cout << ptrMetin;

	return 0;
}
*/
