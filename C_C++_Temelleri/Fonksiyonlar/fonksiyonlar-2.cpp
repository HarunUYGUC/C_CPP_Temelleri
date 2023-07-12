#include <iostream>
using namespace std;

void topla(int sayi1, int sayi2)
{
	cout << sayi1 << " + " << sayi2 << " = " << sayi1 + sayi2 << endl;
}


int main()
{
	int a = 15, b = 20, c = 7, d = 12;

	topla(a, b);
	topla(c, d);
	topla(a, d);
}
