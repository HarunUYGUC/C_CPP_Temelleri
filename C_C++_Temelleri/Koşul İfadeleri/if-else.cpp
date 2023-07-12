#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi;

	cout << "Bir sayý giriniz: ";
	cin >> sayi;

	if (sayi > 0)
	{
		cout << "Sayýnýz pozitiftir.";
	}
	else if (sayi == 0)
	{
		cout << "Sayýnýz sýfýr (0) idir.";
	}
	else
	{
		cout << "Sayýnýz negatiftir.";
	}
}


#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int puan;

	cout << "0-100 arasý puan giriniz: ";
	cin >> puan;

	if (puan >= 85 && puan <= 100)
	{
		cout << "Notunuz 5 üzerinden 5.";
	}
	else if (puan >= 70 && puan < 85)
	{
		cout << "Notunuz 5 üzerinden 4.";
	}
	else if (puan >= 55 && puan < 70)
	{
		cout << "Notunuz 5 üzerinden 3.";
	}
	else if (puan >= 45 && puan < 55)
	{
		cout << "Notunuz 5 üzerinden 2.";
	}
	else if (puan >= 0 && puan < 45)
	{
		cout << "Notunuz 5 üzerinden 1.";
	}
	else
	{
		cout << "0-100 arasýnda bir puan girmelisiniz!";
	}
}
