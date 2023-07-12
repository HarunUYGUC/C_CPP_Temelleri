// Biti�i�indeki sa� ve sol say�lardan daha k���k olan say�lar� yenivektor vekt�r�ne aktaraca��z.
// 1. indisten ba�layarak sondan bir �nceki indise kadar bu kar��la�t�rmay� yapmal�y�z.

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
	
	cout << "Vekt�r�n ilk hali: " << endl;
	for (auto icerik : sayi)
		cout << icerik << endl;

	vector <int> yenivektor = kontrol(sayi);

	cout << "Yeni vekt�r�n i�eri�i: " << endl;
	for (auto icerik : yenivektor)
		cout << icerik << endl;

	return 0;
}
