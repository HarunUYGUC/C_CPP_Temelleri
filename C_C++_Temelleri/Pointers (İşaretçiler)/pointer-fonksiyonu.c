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
	char metin[] = "Biliþim Dünyasý";
	char* pr = ara(metin, 'm');
	
	if (pr)
		printf("%c karakteri %x adresinde bulundu.", *pr, pr);
	else
		printf("Karakteriniz bulunamadý.");

	return 0;
}
