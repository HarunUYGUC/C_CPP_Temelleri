// M�kemmel say�, kendisi hari� pozitif tam b�lenlerinin toplam� kendisine e�it olan say�d�r.
// Di�er bir ifadeyle, bir m�kemmel say�, b�t�n pozitif tam b�lenlerinin toplam�n�n yar�s�na e�ittir.
// �rnek: 28 say�s�n�n pozitif tam b�lenleri 1, 2, 4, 7 ve 14 idir. Toplamlar� 28 yapar.

/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi, toplam = 0, bolen = 1;

	cout << "M�kemmel say� olup olmad���n� merak etti�iniz say�y� giriniz: ";
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
		cout << sayi << " say�s� m�kemmel say�d�r.";
	}
	else
	{
		cout << sayi << " say�s� m�kemmel say� de�ildir.";
	}
}
*/

// �nemli Not!!!: �lk defa b�yle bir �ey farkettim ya da �yle san�yorum. :D :D Ger�ekle�se de 
// ger�ekle�mese de de�i�keni artt�rmak gerekiyorsa for d�ng�s� kullanmak daha mant�kl�.
// E�er d�ng�n�n i�erisindeki �art ger�ekle�irse de�il ger�ekle�mezse artt�rmak gerekiyorsa while d�ng�s�n�
// kullanmak daha mant�kl�.
