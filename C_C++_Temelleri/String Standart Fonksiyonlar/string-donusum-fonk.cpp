/*

atoi() => atoi(char *ptr) ptr deðiþkenindeki string ifadeyi integer veri tipine dönüþtürür.
atof() => atof(char *ptr) ptr deðiþkenindeki string ifadeyi float veri tipine dönüþtürür.
atol() => atol(char *ptr) ptr deðiþkenindeki string ifadeyi long integer veri tipine dönüþtürür.

strtod() => strtod(char *ptr, char &endPtr) string ifadeyi double veri tipine dönüþtürür. 
String ifadede yer alan sayýsal ifade dönüþtürüldükten sonra geri kalan metinsel ifadenin baþlangýç konumunu
tutan endPtr deðiþkeni kullanýlýr. 
strtol() => strtol(char *ptr, char **endPtr, sayitabani) string to long integer

// "atoi" derken "to integer" demiþ oluyoruz. "strtod" derken "string to double" demiþ oluyoruz. Bu þekilde 
// akýlda tutmasý daha kolay olur.

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


	//char tarih[] = "1983biliþim";
	//int tarih2;

	//tarih2 = atoi(tarih);
	//tarih2 += 10;
	//cout << tarih2 << endl;
	

	//char tarih[] = "1983.25";
	//float tarih2;

	//tarih2 = atof(tarih);
	//tarih2 += 10;
	//cout << tarih2 << endl;


	//char tarih[] = "1983.25 biliþim";
	//float tarih2;

	//tarih2 = atof(tarih);
	//tarih2 += 10;
	//cout << tarih2 << endl;


	//char tarih[] = "1983.25 biliþim";
	//float tarih2;
	//char* ptrMetin;

	//tarih2 = strtod(tarih, &ptrMetin);
	//tarih2 += 10;
	//cout << tarih2 << endl;
	//cout << ptrMetin;


	//char tarih[] = "101983.25 biliþim";
	//long int tarih2;
	//char* ptrMetin;

	//tarih2 = strtol(tarih, &ptrMetin, 2);
	//cout << tarih2 << endl;
	//cout << ptrMetin;


	//char tarih[] = "101983.25 biliþim";
	//long int tarih2;
	//char* ptrMetin;

	//tarih2 = strtol(tarih, &ptrMetin, 10);
	//cout << tarih2 << endl;
	//cout << ptrMetin;

	return 0;
}
*/
