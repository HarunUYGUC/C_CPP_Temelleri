#include <iostream>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Turkish");
	float kisaKenar, uzunKenar, cevre, alan;

	cout << "Dikd�rtgenin k�sa kenar�n� giriniz: ";
	cin >> kisaKenar;
	
	cout << "Dikd�rtgenin uzun kenar�n� giriniz: ";
	cin >> uzunKenar;

	cevre = 2 * (kisaKenar + uzunKenar);
	alan = kisaKenar * uzunKenar;

	cout << "Dikd�rtgenin �evresi = " << cevre << endl;
	cout << "Dikd�rtgenin alan� = " << alan;
}


#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14

int main()
{
	float r, alan;

	cout << "�emberin yar��ap�n� giriniz: ";
	cin >> r;

	alan = PI * pow(r, 2);
	cout << "�emberin alan� = " << alan;
}
