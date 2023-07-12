#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int matris[3][3];
	
	for (int satir = 0; satir < 3; satir++)
	{
		for (int sutun = 0; sutun < 3; sutun++)
		{
			cout << satir + 1 << ". Satýr, " << sutun + 1 << ". Sütundaki Elemaný Giriniz: ";
			cin >> matris[satir][sutun];
		}
	}

	for (int sat = 0; sat < 3; sat++)
	{
		for (int sut = 0; sut < 3; sut++)
		{
			cout << matris[sat][sut] << "\t";
		}

		cout << endl;
	}

	return 0;
}
