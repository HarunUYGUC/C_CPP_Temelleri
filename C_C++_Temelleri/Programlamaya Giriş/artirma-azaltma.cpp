/*
�nden ve sondan artt�rma ve azaltma operat�rleri:

degisken++ : Sonradan Art�rma
degisken-- : Sonradan Azaltma
++degisken : �nceden Art�rma
--degisken : �nceden Azaltma

*/

#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	a = a + 1;
	cout << a << endl;
	a += 1;
	cout << a << endl;
	a++;
	cout << a;
}


#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 4;
	int c;
	
	c = a++;
	cout << c << endl;
	cout << a;
}


#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 4;
	int c;

	c = a++ + b;
	cout << c << endl;
	cout << a;
}


#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 4;
	int c;

	c = ++a + b;
	cout << c << endl;
	cout << a;
}


#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 4;
	int c;

	c = --a + b++;
	cout << a << endl;
	cout << b << endl;
	cout << c;
}
