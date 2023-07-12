#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int matrisA[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int matrisB[3][2];

	for (int satir = 0; satir < 2; satir++)
	{
		for (int sutun = 0; sutun < 3; sutun++)
		{
			matrisB[sutun][satir] = matrisA[satir][sutun];
		}
	}

	for (int sat = 0; sat < 3; sat++)
	{
		for (int sut = 0; sut < 2; sut++)
		{
			cout << matrisB[sat][sut] << "\t";
		}

		cout << endl;
	}
	
	return 0;
}
