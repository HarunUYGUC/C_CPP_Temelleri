/*
Hesaplama i�lemlerinde farkl� veri t�rleri kullan�labilir.Program derleme a�amas�nda k���k veri tipini b�y�k veri 
tipine otomatik olarak d�n��t�r�r.�rne�in int bir de�i�ken ile double bir de�i�ken �zerinde matematiksel i�lem 
yapt���n�zda sonu� double olacakt�r.

Baz� durumlarda da kendimiz i�lem esnas�nda de�i�kenin tipini de�i�tirebiliriz fakat dikkat edilmesi gereken nokta, 
b�y�k veri tipinden k���k veri tipine d�n���m yaparken veri kay�plar� olabilir.

double > float > int > char

int ile int = int
int ile float = float
float ile double = double
int ile double = double
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	float b = 4;
	cout << a / b;
}


#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 4;
	cout << a / b;
}


#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 4;
	cout << float(a) / b;
}


#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	float b = 2.5;
	cout << a / b;
}


#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	float b = 2.5;
	cout << a / int(b);
}
