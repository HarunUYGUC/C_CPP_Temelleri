#include <stdio.h>

int main()
{
	char karakterDizisi[] = "Bili�im";
	
	printf("%s", karakterDizisi);
	
	return 0;
}


#include <stdio.h>

int main()
{
	char karakterDizisi[] = "Bili�im";

	printf("%c", karakterDizisi[0]);

	return 0;
}


#include <stdio.h>

int main()
{
	char karakterDizisi[] = "Bili�im";

	for (int i = 0; i < 7; i++)
		printf("%c \n", karakterDizisi[i]);

	return 0;
}


#include <stdio.h>

int main()
{
	char karakterDizisi[20];

	printf("Ad�n�z�, soyad�n�z� giriniz: ");
	// scanf_s("%s", karakterDizisi);
	// hoca bu �ekilde de veri alabiliriz ama bo�luktan 
	// sonras�n� alamay�z dedi, bende ise (Visual Studio) hi�bir t�rl� bu �ekilde veri alm�yor.
	gets(karakterDizisi);
	printf("%s", karakterDizisi);

	return 0;
}


// Farkl� farkl� elemanlar� ayn� dizide saklamak istiyorsak bu �ekilde bir kullan�m yapmal�y�z.
// char stringDizi[dizinin_eleman_say�s�][bir_eleman�n_karakter_say�s�] = { "Ali", "Mehmet", "Veli" }

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
		printf("�sim giriniz: ");
		gets(stringDizi[i]);
	}

	for (int i = 0; i < 3; i++)
		printf("%s \n", stringDizi[i]);

	return 0;
}
