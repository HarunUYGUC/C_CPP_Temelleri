#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	char k1 = 'A';  // char veri tipi ' ' tek týrnak ile gösterilir. string veri tipi " " çift týrnak ile gösterilir.
	cout << k1;
}


#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	char k1 = 'Abla';  // Hatalý sonuç. char veri tipi birden fazla karakter alamaz.
	cout << k1;
}


#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	char k1 = 'A'; 
	cout << int(k1);
}


#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	char k1 = 65; 
	cout << k1;
}


#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	string metin = "Harun Uyguç";
	cout << metin;
}
