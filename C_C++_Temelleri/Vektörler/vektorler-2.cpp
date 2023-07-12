#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	vector <int> vek1;

	vek1.push_back(10);

	cout << "Eleman sayýsý: " << vek1.size() << endl;
	cout << "Kapasite: " << vek1.capacity() << endl;
	
	vek1.push_back(10);

	cout << "Eleman sayýsý: " << vek1.size() << endl;
	cout << "Kapasite: " << vek1.capacity() << endl;

	return 0;
}


#include <iostream>
#include <vector>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish");
	vector <int> vek1;

	for (int i = 0; i < 64; i++)
	{
		vek1.push_back(10);

		cout << "Eleman sayýsý: " << vek1.size() << endl;
		cout << "Kapasite: " << vek1.capacity() << endl;
	}

	vek1.shrink_to_fit();

	cout << "Eleman sayýsý: " << vek1.size() << endl;
	cout << "Kapasite: " << vek1.capacity() << endl;

	return 0;
}
