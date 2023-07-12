#include <iostream>
using namespace std;

int main()
{
	float sonuc;
	sonuc = 1 / 5;
	cout << sonuc;
}


#include <iostream>
using namespace std;

int main()
{
	float sonuc;
	sonuc = 1.0 / 5;
	cout << sonuc;
}


#include <iostream>
using namespace std;

int main()
{
	int sonuc;
	sonuc = 1.0 / 5;
	cout << sonuc;
}


#include <iostream>
using namespace std;

int main()
{
	double sonuc;
	sonuc = 1.0 / 5;
	cout << sonuc;
}


#include <iostream>
using namespace std;

int main()
{
	double sonuc;
	sonuc = 1.0 / 2.35;
	cout << sonuc;
}


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double sonuc;
	sonuc = 1.0 / 2.35;
	cout << setprecision(3) << sonuc;
}


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double sonuc;
	sonuc = 1.0 / 2;
	cout << fixed << setprecision(3) << sonuc;
}


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float sonuc, toplam;
	toplam = 0;
	sonuc = 1.0 / 81;

	for (int i = 0; i < 729; i++)
		toplam = toplam + sonuc;

	cout << setprecision(10) << toplam;
}


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double sonuc, toplam;
	toplam = 0;
	sonuc = 1.0 / 81;

	for (int i = 0; i < 729; i++)
		toplam = toplam + sonuc;

	cout << setprecision(10) << toplam;
}
