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

	cout << "1. Sayıyı Giriniz: ";
	cin >> a;

	cout << "2. Sayıyı Giriniz: ";
	cin >> b;

	cout << "3. Sayıyı Giriniz: ";
	cin >> c;

	cout << "En büyük sayı ile en küçük sayının farkı = " << enBuyuk(a, b, c) - enKucuk(a, b, c);
}
