/*
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a = 5, b = 7, temp;

	cout << "Ýlk a: " << a << "\t" << "Ýlk b: " << b << endl;
	temp = a;
	a = b;
	b = temp;
	cout << "Son a: " << a << "\t" << "Son b: " << b;

	return 0;
}
*/

/*
#include <iostream>
using namespace std;

void degistir(int &a, int &b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a = 5, b = 7;
	
	cout << "Ýlk a: " << a << "\t" << "Ýlk b: " << b << endl;
	degistir(a, b);
	cout << "Son a: " << a << "\t" << "Son b: " << b;

	return 0;
}
*/

/*
#include <iostream>
using namespace std;

void degistir(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a = 5, b = 7;

	cout << "Ýlk a: " << a << "\t" << "Ýlk b: " << b << endl;
	degistir(&a, &b);
	cout << "Son a: " << a << "\t" << "Son b: " << b;

	return 0;
}
*/
