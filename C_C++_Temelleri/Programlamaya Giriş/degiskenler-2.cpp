#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	char k1 = 'A';  // char veri tipi ' ' tek t�rnak ile g�sterilir. string veri tipi " " �ift t�rnak ile g�sterilir.
	cout << k1;
}


#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	char k1 = 'Abla';  // Hatal� sonu�. char veri tipi birden fazla karakter alamaz.
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
	string metin = "Harun Uygu�";
	cout << metin;
}
