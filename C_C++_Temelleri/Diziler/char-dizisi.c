#include <stdio.h>

int main()
{
	char karakterDizisi[] = "Biliþim";
	
	printf("%s", karakterDizisi);
	
	return 0;
}


#include <stdio.h>

int main()
{
	char karakterDizisi[] = "Biliþim";

	printf("%c", karakterDizisi[0]);

	return 0;
}


#include <stdio.h>

int main()
{
	char karakterDizisi[] = "Biliþim";

	for (int i = 0; i < 7; i++)
		printf("%c \n", karakterDizisi[i]);

	return 0;
}


#include <stdio.h>

int main()
{
	char karakterDizisi[20];

	printf("Adýnýzý, soyadýnýzý giriniz: ");
	// scanf_s("%s", karakterDizisi);
	// hoca bu þekilde de veri alabiliriz ama boþluktan 
	// sonrasýný alamayýz dedi, bende ise (Visual Studio) hiçbir türlü bu þekilde veri almýyor.
	gets(karakterDizisi);
	printf("%s", karakterDizisi);

	return 0;
}


// Farklý farklý elemanlarý ayný dizide saklamak istiyorsak bu þekilde bir kullaným yapmalýyýz.
// char stringDizi[dizinin_eleman_sayýsý][bir_elemanýn_karakter_sayýsý] = { "Ali", "Mehmet", "Veli" }

#include <stdio.h>

int main()
{
	char stringDizi[3][15] = { "Ali", "Mehmet", "Veli" };

	printf("%s", stringDizi[0]);

	return 0;
}


#include <stdio.h>

int main()
{
	char stringDizi[3][15] = { "Ali", "Mehmet", "Veli" };

	printf("%c", stringDizi[0][0]);

	return 0;
}


#include <stdio.h>

int main()
{
	char stringDizi[3][15] = { "Ali", "Mehmet", "Veli" };

	for (int i = 0; i < 3; i++)
		printf("%s \n", stringDizi[i]);

	return 0;
}


#include <stdio.h>

int main()
{
	char stringDizi[3][15];

	for (int i = 0; i < 3; i++)
	{
		printf("Ýsim giriniz: ");
		gets(stringDizi[i]);
	}

	for (int i = 0; i < 3; i++)
		printf("%s \n", stringDizi[i]);

	return 0;
}
