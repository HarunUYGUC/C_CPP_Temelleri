// Diziler ile dizinin boyutundan fazla eleman alamayacaðýmýz için bu program hatalý çalýþacaktýr.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int dizi[5];
	int sayi = 1, i = 0, uzunluk;

	while (sayi != 0)
	{
		cout << "Bir sayý giriniz: ";
		cin >> sayi;
		
		dizi[i] = sayi;
		i++;
	}

	uzunluk = sizeof(dizi) / sizeof(int);
	cout << "Dizinin eleman sayýsý = " << uzunluk << endl;

	for (i = 0; i < uzunluk; i++)
	{
		cout << dizi[i] << endl;
	}

	return 0;
}


#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	vector <int> vek1;
	vector <int> vek2(5);
	vector <char> vek3 = { 'A', 'B', 'C'};
	vector <double> vek4(5, 3.14);
	vector <double> vek5(vek4);

	cout << vek1.size() << endl;
	cout << vek2.size() << endl;
	cout << vek3.size() << endl;
	cout << vek4.size() << endl;
	cout << vek5.size() << endl;

	for (int i = 0; i < vek5.size(); i++)
	{
		// cout << vek5[i] << endl;
		cout << vek5.at(i) << endl;
	}

	return 0;
}
