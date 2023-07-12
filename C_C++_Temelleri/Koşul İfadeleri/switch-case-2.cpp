#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int puan;

	cout << "Notunuzu giriniz: ";
	cin >> puan;

	if (puan >= 90 && puan <= 100)
	{
		cout << "Harf notunuz AA";
	}
	else if (puan >= 85 && puan < 90)
	{
		cout << "Harf notunuz BA";
	}
	else if (puan >= 80 && puan < 85)
	{
		cout << "Harf notunuz BB";
	}
	else if (puan >= 70 && puan < 80)
	{
		cout << "Harf notunuz CB";
	}
	else if (puan >= 60 && puan < 70)
	{
		cout << "Harf notunuz CC";
	}
	else if (puan >= 55 && puan < 60)
	{
		cout << "Harf notunuz DC";
	}
	else if (puan >= 50 && puan < 55)
	{
		cout << "Harf notunuz DD";
	}
	else if (puan >= 40 && puan < 50)
	{
		cout << "Harf notunuz FD";
	}
	else
	{
		cout << "Harf notunuz FF";
	}
}


// Aþaðýdaki switch - case kullanýmý Visual Studio'da hata verdiði için if - else þeklinde problemi çözdüm.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int puan;

	cout << "Notunuzu giriniz: ";
	cin >> puan;

	switch (puan)
	{
	case 90 ... 100:
	{
		cout << "Harf notunuz AA";
		break;
	}
	}
}
