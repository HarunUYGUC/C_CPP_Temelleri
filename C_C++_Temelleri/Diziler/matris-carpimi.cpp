/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int matrisA[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int matrisB[3][2] = { {1, 2}, {3, 4}, {5, 6} };
	int matrisC[2][2];

	for (int satir = 0; satir < 2; satir++)
	{
		for (int sutun = 0; sutun < 2; sutun++)
		{
			matrisC[satir][sutun] = 0;

			for (int eleman = 0; eleman < 3; eleman++)
			{
				matrisC[satir][sutun] += matrisA[satir][eleman] * matrisB[eleman][sutun];
			}
		}
	}

	for (int sat = 0; sat < 2; sat++)
	{
		for (int sut = 0; sut < 2; sut++)
		{
			cout << matrisC[sat][sut] << "\t";
		}

		cout << endl;
	}

	return 0;
}
*/
