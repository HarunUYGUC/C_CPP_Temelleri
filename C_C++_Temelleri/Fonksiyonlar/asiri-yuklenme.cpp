#include <iostream>
using namespace std;

int guncelle(int x)
{
	return ++x;
}

double guncelle(double x)
{
	return ++x;
}

int main()
{
	int a = 5;
	double b = 10.3;

	cout << guncelle(a) << endl;
	cout << guncelle(b);
}



#include <iostream>
using namespace std;
template <typename T>

T guncelle(T x)
{
	return ++x;
}

int main()
{
	int a = 5;
	double b = 10.3;

	cout << guncelle(a) << endl;
	cout << guncelle(b);
}
