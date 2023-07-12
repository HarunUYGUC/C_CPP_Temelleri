#include <iostream>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Turkish");
	int i = 1, sayi, ciftlerinToplami = 0;

	for (i; i <= 10; i++)
	{
		cout << i << ". sayýyý giriniz: ";
		cin >> sayi;

		if (sayi % 2 == 0)
		{
			ciftlerinToplami += sayi;
		}
	}

	cout << "Çift sayýlarýn toplamý = " << ciftlerinToplami;
}
