// toupper() => B�y�k harfe d�n��t�r
// tolower() => K���k harfe d�n��t�r

// �lk harfi b�y�k, di�er harfleri k���k harfe d�n��t�ren uygulamay� yapaca��z.

/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	string isimler[] = { "ahmet", "mEhmet" };

	cout << static_cast <char> (toupper(isimler[0][0]));

	return 0;
}
*/

/*
#include <iostream>
#include <vector>
using namespace std;

vector <string> guncelle(vector <string> adlar)
{
	for (int i = 0; i < adlar.size(); i++)
	{
		adlar[i][0] = toupper(adlar[i][0]);

		for (int j = 1; j < adlar[i].size(); j++)
		{
			adlar[i][j] = tolower(adlar[i][j]);
		}
	}

	return adlar;
}

int main()
{
	setlocale(LC_ALL, "Turkish");
	vector <string> isimler = { "aHmEt", "mURAt", "ayCAN", "cAn", "mErT" };

	cout << "Vekt�r�n ilk hali: " << endl;
	for (auto isim : isimler)
		cout << isim << endl;

	vector <string> yeniVektor = guncelle(isimler);

	cout << "Yeni vekt�r: " << endl;
	for (auto isim : yeniVektor)
		cout << isim << endl;

	return 0;
}
*/
