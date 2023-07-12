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


// 0 girilene kadarki sayýlarýn toplamýný bulan program.

#include <iostream>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Turkish");
	int i = 1, sayi, toplam = 0;

	cout << "0 girene kadarki sayýlarýn toplamýný bulabilirsiniz." << endl;
	cout << "Bir sayý giriniz: ";
	cin >> sayi;

	while (sayi != 0)
	{
		toplam += sayi;

		cout << "Bir sayý giriniz: ";
		cin >> sayi;
	}

	cout << "Sayýlarýn toplamý = " << toplam;
}
