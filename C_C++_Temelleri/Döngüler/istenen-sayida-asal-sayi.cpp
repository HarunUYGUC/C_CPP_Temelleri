/*
#include <iostream>
using namespace std;

int main()
{
	int kacTaneBulunacak, bulunanAdet = 0, kontrolEdilecekSayi = 2, bolen;
	bool bayrak;

	cout << "Ka� tane asal say� bulmak istersiniz?: ";
	cin >> kacTaneBulunacak;

	while (bulunanAdet < kacTaneBulunacak)
	{	
		bayrak = true;

		for (bolen = 2; bolen <= (kontrolEdilecekSayi / 2); bolen++)
		{
			if (kontrolEdilecekSayi % bolen == 0)
			{
				bayrak = false;
				break;
			}
		}

		if (bayrak == true)
		{
			cout << kontrolEdilecekSayi << " asal say�d�r." << endl;
			bulunanAdet++;
		}

		kontrolEdilecekSayi++;
	}
}
*/
