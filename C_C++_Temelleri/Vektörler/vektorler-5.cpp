/*

.assign()	=> Bir vektörün içini doldurmayý saðlar.
		=> Bir vektöre baþka bir vektörden deðerler almayý saðlar.
		=> Bir diziden vektöre veri almayý saðlar.

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

	cout << "Dizinin ilk elemanýnýn adresi: " << dizi << endl;
	cout << "Dizinin ilk elemaný: " << *dizi << endl;
	cout << "Dizinin ilk elemaný: " << dizi[0] << endl;
	cout << "Dizinin ilk elemanýnýn adresi: " << &dizi[0] << endl;

	cout << "Dizinin 5. indisindeki elemanýn adresi: " << dizi + 5 << endl;
	cout << "Dizinin 5. indisindeki eleman: " << *(dizi + 5) << endl;
	cout << "Dizinin 5. indisindeki eleman: " << dizi[5] << endl;
	cout << "Dizinin 5. indisindeki elemanýnýn adresi: " << &dizi[5] << endl;

	return 0;
}
