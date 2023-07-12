/*
Hesaplama işlemlerinde farklı veri türleri kullanılabilir.Program derleme aşamasında küçük veri tipini büyük veri 
tipine otomatik olarak dönüştürür.Örneğin int bir değişken ile double bir değişken üzerinde matematiksel işlem 
yaptığınızda sonuç double olacaktır.

Bazı durumlarda da kendimiz işlem esnasında değişkenin tipini değiştirebiliriz fakat dikkat edilmesi gereken nokta, 
büyük veri tipinden küçük veri tipine dönüşüm yaparken veri kayıpları olabilir.

double > float > int > char

int ile int = int
int ile float = float
float ile double = double
int ile double = double
*/

#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	float b = 4;
	cout << a / b;
}


#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 4;
	cout << a / b;
}


#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 4;
	cout << float(a) / b;
}


#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	float b = 2.5;
	cout << a / b;
}


#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	float b = 2.5;
	cout << a / int(b);
}
