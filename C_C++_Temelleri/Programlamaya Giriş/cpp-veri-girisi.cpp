#include <iostream>
using namespace std;

int main()
{
	char k;
	string metin;
	int sayi1;
	float sayi2;
	double sayi3;

	cout << "Bir karakter giriniz: ";
	cin >> k;

	cout << "Bir metin giriniz: ";
	cin >> metin;

	cout << "Bir tam say� giriniz: ";
	cin >> sayi1;

	cout << "Float tipinde bir say� giriniz: ";
	cin >> sayi2;

	cout << "Double tipinde bir say� giriniz: ";
	cin >> sayi3;

	cout << k << endl;
	cout << metin << endl;
	cout << sayi1 << endl;
	cout << sayi2 << endl;
	cout << sayi3 << endl;
	cout << &sayi1;
}
