#include <stdio.h>

int main()
{
	int a = 15;
	int* pt;

	printf("a de�i�keninin de�eri: %d \n", a);
	pt = &a;
	printf("pointer'�n de�eri (yani a de�i�keninin adresi): %p \n", pt);
	printf("pointer'�n adresi: %p \n", &pt);
	printf("pointer'�n i�aret etti�i adresteki de�er: %d", *pt);

	return 0;
}
