#include <iostream>
using namespace std;

int main()
{
	int i = 1;

	while (i <= 10)
	{
		cout << i << endl;
		i++;
	}
}


// 0 girilene kadarki say�lar�n toplam�n� bulan program.

#include <iostream>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Turkish");
	int i = 1, sayi, toplam = 0;

	cout << "0 girene kadarki say�lar�n toplam�n� bulabilirsiniz." << endl;
	cout << "Bir say� giriniz: ";
	cin >> sayi;

	while (sayi != 0)
	{
		toplam += sayi;

		cout << "Bir say� giriniz: ";
		cin >> sayi;
	}

	cout << "Say�lar�n toplam� = " << toplam;
}
