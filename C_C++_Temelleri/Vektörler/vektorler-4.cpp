/*

.insert()	=> Vektörün istenilen bir konumuna eleman eklemek için kullanýlýr. 
			   O indisteki önceki eleman ise saðýndaki diðer elemanlarla birlikte 1 indis saða kayar.
.erase()	=> Vektörün istenilen konumundaki elemaný silmek için kullanýlýr.
			   O indisteki önceki eleman ise saðýndaki diðer elemanlarla birlikte 1 indis sola kayar.

iterator	=> Yineliyici olarak tercüme edilmiþtir. Bir nevi pointer gibi davranýr.
			   Vektörün elemanlarý arasýnda gezinmemizi saðlayan adres tutuculardýr.

.begin() iteratörü	=> Vektörün ilk elemanýnýn adresini tutar.
.end() iteratörü	=> Vektörün son elemanýnýndan sonraki adresi tutar. 
					   Yani .end() - 1 vektörün son elemanýnýn adresini tutar.

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
