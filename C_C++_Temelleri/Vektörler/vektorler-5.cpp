/*

.assign()	=> Bir vekt�r�n i�ini doldurmay� sa�lar.
		=> Bir vekt�re ba�ka bir vekt�rden de�erler almay� sa�lar.
		=> Bir diziden vekt�re veri almay� sa�lar.

*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	vector <int> vek1;

	vek1.assign(7, 100);

	for (auto icerik : vek1)
		cout << icerik << endl;

	return 0;
}


#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	vector <int> vek1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	vector <int> vek2;

	//vek1.assign(7, 100);

	//for (auto icerik : vek1)
	//	cout << icerik << endl;

	vek2.assign(vek1.begin() + 2, vek1.end() - 2);

	for (auto icerik : vek2)
		cout << icerik << endl;

	return 0;
}


#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int dizi[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	vector <int> vek3;

	vek3.assign(dizi, dizi + 5);
	
	for (auto icerik : vek3)
		cout << icerik << endl;

	cout << "Dizinin ilk eleman�n�n adresi: " << dizi << endl;
	cout << "Dizinin ilk eleman�: " << *dizi << endl;
	cout << "Dizinin ilk eleman�: " << dizi[0] << endl;
	cout << "Dizinin ilk eleman�n�n adresi: " << &dizi[0] << endl;

	cout << "Dizinin 5. indisindeki eleman�n adresi: " << dizi + 5 << endl;
	cout << "Dizinin 5. indisindeki eleman: " << *(dizi + 5) << endl;
	cout << "Dizinin 5. indisindeki eleman: " << dizi[5] << endl;
	cout << "Dizinin 5. indisindeki eleman�n�n adresi: " << &dizi[5] << endl;

	return 0;
}
