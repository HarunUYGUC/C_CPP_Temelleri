/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int dizi[] = { 15, 89, 35, 65, 75, 72, 7, 92, 23, 3 };
	int enKucuk, enKninIndis, tutucu;

	for (int i = 0; i < 9; i++)
	{
		enKucuk = dizi[i];
		enKninIndis = i;
		
		for (int j = i + 1; j < 10; j++)
		{
			if (dizi[j] < enKucuk)
			{
				enKucuk = dizi[j];
				enKninIndis = j;
			}
		}

		tutucu = dizi[i];
		dizi[i] = dizi[enKninIndis];
		dizi[enKninIndis] = tutucu;
	}

	cout << "Dizinin küçükten büyüðe sýralanmýþ hali: " << endl;

	for (int k = 0; k < 10; k++)
		cout << dizi[k] << endl;
	
	return 0;
}
*/
