#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a = 15;
	int *pt;

	cout << "a de�i�keninin de�eri: " << a << endl;
	pt = &a;
	cout << "pointer'�n de�eri (yani a de�i�keninin adresi): " << pt << endl;
	cout << "pointer'�n i�aret etti�i adresteki de�er: " << *pt << endl;

	*pt = 25;
	cout << "a de�i�keninin yeni de�eri: " << a << endl;

	cout << "pointer'�n adresi: " << &pt;
	
	return 0;
}
