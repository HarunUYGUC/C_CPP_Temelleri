#include <stdio.h>

char* ara(char* p, char kr)
{
	while (*p != '\0')
	{
		if (*p == kr)
		{
			return p;
		}

		p++;
	}
}

int main()
{
	char metin[] = "Bili�im D�nyas�";
	char* pr = ara(metin, 'm');
	
	if (pr)
		printf("%c karakteri %x adresinde bulundu.", *pr, pr);
	else
		printf("Karakteriniz bulunamad�.");

	return 0;
}
