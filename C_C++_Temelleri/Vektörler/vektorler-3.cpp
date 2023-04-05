/*

.push_back()	=> Vektörün sonuna eleman eklemeyi saðlar.
.pop_back()		=> Vektörün son elemanýný silmeyi saðlar.
.front()		=> Vektörün ilk elemanýný ekrana yazar.
.back()			=> Vektörün son elemanýný ekrana yazar.
.swap()			=> Ýki vektörün elemanlarýný takas etmeyi saðlar.

*/

/*
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	vector <int> vek1(5, 10);
	vector <int> vek2 = { 1, 2, 3, 4, 5, 6, 7 };

	cout << vek1.at(0) << endl;
	cout << vek1[1] << endl;

	vek1.push_back(11);
	cout << vek1.back() << endl;

	cout << vek1.front() << endl;

	cout << "**********" << endl;
	vek1.push_back(12);
	vek1.push_back(13);
	vek1.push_back(14);

	cout << vek1.at(vek1.size() - 1) << endl;
	vek1.pop_back();
	cout << vek1.at(vek1.size() - 1) << endl;

	cout << "**********" << endl;
	for (int i = 0; i < vek1.size(); i++)
	{
		cout << vek1.at(i) << endl;
	}

	cout << "**********" << endl;
	for (auto icerik : vek1)
	{
		cout << icerik << endl;
	}

	cout << "**********" << endl;
	for (auto icerik : vek2)
	{
		cout << icerik << endl;
	}

	cout << "**********" << endl;
	vek1.swap(vek2);

	for (auto icerik : vek1)
	{
		cout << icerik << endl;
	}

	cout << "-----------" << endl;
	for (auto icerik : vek2)
	{
		cout << icerik << endl;
	}

	return 0;
}
*/
