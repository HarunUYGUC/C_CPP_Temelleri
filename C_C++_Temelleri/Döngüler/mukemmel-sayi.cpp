// Mükemmel sayý, kendisi hariç pozitif tam bölenlerinin toplamý kendisine eþit olan sayýdýr.
// Diðer bir ifadeyle, bir mükemmel sayý, bütün pozitif tam bölenlerinin toplamýnýn yarýsýna eþittir.
// Örnek: 28 sayýsýnýn pozitif tam bölenleri 1, 2, 4, 7 ve 14 idir. Toplamlarý 28 yapar.

/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi, toplam = 0, bolen = 1;

	cout << "Mükemmel sayý olup olmadýðýný merak ettiðiniz sayýyý giriniz: ";
	cin >> sayi;

	while (bolen <= (sayi / 2))
	{
		if (sayi % bolen == 0)
		{
			toplam += bolen;
			bolen++;
		}
		else
		{
			bolen++;
		}
	}

	//for (bolen = 1; bolen <= (sayi / 2); bolen++)
	//{
	//	if (sayi % bolen == 0)
	//	{
	//		toplam += bolen;
	//	}
	//}

	if (toplam == sayi)
	{
		cout << sayi << " sayýsý mükemmel sayýdýr.";
	}
	else
	{
		cout << sayi << " sayýsý mükemmel sayý deðildir.";
	}
}
*/

// Önemli Not!!!: Ýlk defa böyle bir þey farkettim ya da öyle sanýyorum. :D :D Gerçekleþse de 
// gerçekleþmese de deðiþkeni arttýrmak gerekiyorsa for döngüsü kullanmak daha mantýklý.
// Eðer döngünün içerisindeki þart gerçekleþirse deðil gerçekleþmezse arttýrmak gerekiyorsa while döngüsünü
// kullanmak daha mantýklý.
