#include <iostream>
// #include <cstdlib>
// #include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int bulunacakSayi, tahmin, denemeSayisi = 0;

	srand(time(NULL));
	bulunacakSayi = rand() % 100 + 1;

	while (1)
	{	
		denemeSayisi++;
		cout << "Tahmininizi giriniz: ";
		cin >> tahmin;

		if (tahmin == bulunacakSayi)
		{
			cout << "Tebrikler " << denemeSayisi << " hakta bildiniz. Bulunacak say� " << bulunacakSayi << " idi.";
			break;
		}
		else if (tahmin > bulunacakSayi)
		{
			cout << "Say�n�z� azalt�n�z.";
		}
		else
		{
			cout << "Say�n�z� art�r�n�z.";
		}	
	}
}
