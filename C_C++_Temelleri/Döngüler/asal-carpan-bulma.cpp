#include <iostream>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Turkish");
	int sayi, asalCarpan = 2;

	cout << "Asal �arpanlar�n� bulmak istedi�iniz bir tam say�y� giriniz: ";
	cin >> sayi;

	while (sayi > 1)
	{
		if (sayi % asalCarpan == 0)
		{
			cout << asalCarpan << endl;
			sayi /= asalCarpan;
		}
		else
		{
			asalCarpan++;
		}
	}
}
