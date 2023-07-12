#include <stdio.h>

int main()
{
	int a = 15;
	int* pt;

	printf("a deðiþkeninin deðeri: %d \n", a);
	pt = &a;
	printf("pointer'ýn deðeri (yani a deðiþkeninin adresi): %p \n", pt);
	printf("pointer'ýn adresi: %p \n", &pt);
	printf("pointer'ýn iþaret ettiði adresteki deðer: %d", *pt);

	return 0;
}
