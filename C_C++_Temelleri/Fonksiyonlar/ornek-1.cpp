#include <iostream>
using namespace std;

float enBuyuk(float sayi1, float sayi2, float sayi3)
{
	if (sayi1 > sayi2 && sayi1 > sayi3)
	{
		return sayi1;
	}
	else if (sayi2 > sayi1 && sayi2 > sayi3)
	{
		return sayi2;
	}
	else
	{
		return sayi3;
	}
}

float enKucuk(float sayi1, float sayi2, float sayi3)
{
	if (sayi1 < sayi2 && sayi1 < sayi3)
	{
		return sayi1;
	}
	else if (sayi2 < sayi1 && sayi2 < sayi3)
	{
		return sayi2;
	}
	else
	{
		return sayi3;
	}
}

int main()
{
	float a, b, c, buyukKucukFarki;

	cout << "1. Say�y� Giriniz: ";
	cin >> a;

	cout << "2. Say�y� Giriniz: ";
	cin >> b;

	cout << "3. Say�y� Giriniz: ";
	cin >> c;

	cout << "En b�y�k say� ile en k���k say�n�n fark� = " << enBuyuk(a, b, c) - enKucuk(a, b, c);
}
