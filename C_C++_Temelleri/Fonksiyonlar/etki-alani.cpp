/*
--Local Scope'da tan�mlad���m�z de�i�keni Global Scope'da kullanmaya �al���rsak hata 
al�r�z ama Global Scope'da tan�mlad���m�z de�i�keni Local Scope'da kullanabiliriz.

-- if'den �nce int a = 6 �eklinde bir tan�mlama yap�l�rsa if'den sonraki cout << a komutunda 6 sonucunu al�r�z. 
if'in i�inde int a = 5 �eklinde bir tan�mlama yap�l�rsa if'in i�indeki cout << a komutunda 5 sonucunu al�r�z.

-- Ayn� de�i�ken ismi farkl� etki alanlar�nda kullan�labilir.
-- Scope; kapsam, etki alan� demektir.
*/

/*
#include <iostream>
using namespace std;

int main()
{	
	int a = 6;

	if (true)
	{
		int a = 5;

		cout << "Local Scope: " << a << endl;
	}

	cout << "Global Scope: " << a;
}
*/
