#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi;

	cout << "Bir say� giriniz: ";
	cin >> sayi;

	if (sayi > 0)
	{
		cout << "Say�n�z pozitiftir.";
	}
	else if (sayi == 0)
	{
		cout << "Say�n�z s�f�r (0) idir.";
	}
	else
	{
		cout << "Say�n�z negatiftir.";
	}
}


#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int puan;

	cout << "0-100 aras� puan giriniz: ";
	cin >> puan;

	if (puan >= 85 && puan <= 100)
	{
		cout << "Notunuz 5 �zerinden 5.";
	}
	else if (puan >= 70 && puan < 85)
	{
		cout << "Notunuz 5 �zerinden 4.";
	}
	else if (puan >= 55 && puan < 70)
	{
		cout << "Notunuz 5 �zerinden 3.";
	}
	else if (puan >= 45 && puan < 55)
	{
		cout << "Notunuz 5 �zerinden 2.";
	}
	else if (puan >= 0 && puan < 45)
	{
		cout << "Notunuz 5 �zerinden 1.";
	}
	else
	{
		cout << "0-100 aras�nda bir puan girmelisiniz!";
	}
}
