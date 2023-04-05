/*

.insert()	=> Vekt�r�n istenilen bir konumuna eleman eklemek i�in kullan�l�r. 
			   O indisteki �nceki eleman ise sa��ndaki di�er elemanlarla birlikte 1 indis sa�a kayar.
.erase()	=> Vekt�r�n istenilen konumundaki eleman� silmek i�in kullan�l�r.
			   O indisteki �nceki eleman ise sa��ndaki di�er elemanlarla birlikte 1 indis sola kayar.

iterator	=> Yineliyici olarak terc�me edilmi�tir. Bir nevi pointer gibi davran�r.
			   Vekt�r�n elemanlar� aras�nda gezinmemizi sa�layan adres tutuculard�r.

.begin() iterat�r�	=> Vekt�r�n ilk eleman�n�n adresini tutar.
.end() iterat�r�	=> Vekt�r�n son eleman�n�ndan sonraki adresi tutar. 
					   Yani .end() - 1 vekt�r�n son eleman�n�n adresini tutar.

*/

/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	vector <int> vek1 = { 1, 2, 3, 4, 5, 6, 7 };
	
	cout << *vek1.begin() << endl;
	cout << *(vek1.begin() + 1) << endl;
	cout << *(vek1.begin() + 3) << endl;

	cout << *(vek1.end() - 1) << endl;
	cout << *(vek1.end() - 2) << endl;

	cout << &(*(vek1.end() - 2)) << endl;
	cout << &(*(vek1.end() - 1)) << endl;

	return 0;
}
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	vector <int> vek1 = { 1, 2, 3, 4, 5, 6, 7 };
	vector <int>::iterator it;

	it = vek1.begin();
	vek1.insert(it + 2, 10);

	vek1.insert(vek1.begin() + 2, 15);
	vek1.insert(vek1.end(), 25);
	vek1.insert(vek1.end() - 2, 45);

	for (auto icerik : vek1)
	{
		cout << icerik << endl;
	}

	return 0;
}
