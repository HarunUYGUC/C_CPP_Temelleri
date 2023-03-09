/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int dizi[] = { 92, 65, 35, 15, 75, 89, 72, 23, 46, 7 };
	int tutucu;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < (9 - i); j++)
		{
			if (dizi[j] > dizi[j + 1])
			{
				tutucu = dizi[j];
				dizi[j] = dizi[j + 1];
				dizi[j + 1] = tutucu;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << dizi[i] << endl;
	}
	
	return 0;
}
*/
