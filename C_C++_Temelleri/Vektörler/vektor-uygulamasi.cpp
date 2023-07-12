// Bitiþiðindeki sað ve sol sayýlardan daha küçük olan sayýlarý yenivektor vektörüne aktaracaðýz.
// 1. indisten baþlayarak sondan bir önceki indise kadar bu karþýlaþtýrmayý yapmalýyýz.

#include <iostream>
#include <vector>
using namespace std;

vector <int> kontrol(vector <int> sayilar)
{	
	vector <int> temp;

	for (int i = 1; i < sayilar.size() - 1; i++)
	{
		if (sayilar[i] < sayilar[i - 1] && sayilar[i] < sayilar[i + 1])
		{
			temp.push_back(sayilar[i]);
		}
	}

	return temp;
}

int main()
{
	setlocale(LC_ALL, "Turkish");
	vector <int> sayi = { 10, 5, 7, 12, 3, 1, 37, 56 };
	
	cout << "Vektörün ilk hali: " << endl;
	for (auto icerik : sayi)
		cout << icerik << endl;

	vector <int> yenivektor = kontrol(sayi);

	cout << "Yeni vektörün içeriði: " << endl;
	for (auto icerik : yenivektor)
		cout << icerik << endl;

	return 0;
}
