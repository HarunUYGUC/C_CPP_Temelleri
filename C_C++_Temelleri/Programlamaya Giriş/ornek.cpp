#include <iostream>
using namespace std;

int main()
{	
	setlocale(LC_ALL, "Turkish");
	float kisaKenar, uzunKenar, cevre, alan;

	cout << "Dikdörtgenin kýsa kenarýný giriniz: ";
	cin >> kisaKenar;
	
	cout << "Dikdörtgenin uzun kenarýný giriniz: ";
	cin >> uzunKenar;

	cevre = 2 * (kisaKenar + uzunKenar);
	alan = kisaKenar * uzunKenar;

	cout << "Dikdörtgenin çevresi = " << cevre << endl;
	cout << "Dikdörtgenin alaný = " << alan;
}


#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14

int main()
{
	float r, alan;

	cout << "Çemberin yarýçapýný giriniz: ";
	cin >> r;

	alan = PI * pow(r, 2);
	cout << "Çemberin alaný = " << alan;
}
