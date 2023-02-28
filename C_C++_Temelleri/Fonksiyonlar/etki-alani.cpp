/*
--Local Scope'da tanýmladýðýmýz deðiþkeni Global Scope'da kullanmaya çalýþýrsak hata 
alýrýz ama Global Scope'da tanýmladýðýmýz deðiþkeni Local Scope'da kullanabiliriz.

-- if'den önce int a = 6 þeklinde bir tanýmlama yapýlýrsa if'den sonraki cout << a komutunda 6 sonucunu alýrýz. 
if'in içinde int a = 5 þeklinde bir tanýmlama yapýlýrsa if'in içindeki cout << a komutunda 5 sonucunu alýrýz.

-- Ayný deðiþken ismi farklý etki alanlarýnda kullanýlabilir.
-- Scope; kapsam, etki alaný demektir.
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
