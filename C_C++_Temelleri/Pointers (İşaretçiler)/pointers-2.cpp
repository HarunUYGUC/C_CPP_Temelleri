/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayilar[10] = { 15, 25, 36, 7, 65, 99, 76, 48, 81, 19 };

	for (int i = 0; i < 10; i++)
		cout << &sayilar[i] << " --> " << sayilar[i] << endl;

	cout << sayilar;
	
	return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayilar[10] = { 15, 25, 36, 7, 65, 99, 76, 48, 81, 19 };
	int* spt;

	spt = sayilar;

	//for (int i = 0; i < 10; i++)
	//	cout << *(spt + i) << endl;

	//for (int i = 0; i < 10; i++)
	//	cout << spt[i] << endl;

	return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayilar[10] = { 15, 25, 36, 7, 65, 99, 76, 48, 81, 19 };
	int* spt;

	spt = sayilar;

	spt[0] = 11;

	for (int i = 0; i < 10; i++)
		cout << &spt[i] << " --> " << spt[i] << endl;

	return 0;
}
*/
