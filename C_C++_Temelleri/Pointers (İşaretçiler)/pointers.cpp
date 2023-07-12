#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	int a = 15;
	int *pt;

	cout << "a deðiþkeninin deðeri: " << a << endl;
	pt = &a;
	cout << "pointer'ýn deðeri (yani a deðiþkeninin adresi): " << pt << endl;
	cout << "pointer'ýn iþaret ettiði adresteki deðer: " << *pt << endl;

	*pt = 25;
	cout << "a deðiþkeninin yeni deðeri: " << a << endl;

	cout << "pointer'ýn adresi: " << &pt;
	
	return 0;
}
