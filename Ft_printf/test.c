#include "libftprintf.h"
#include <stdio.h>


int main()
{
	// int a;
	printf("%i", printf("La valeur est : %u ", 1234567891));
	printf("\n");
	printf("%i", ft_printf("La valeur est : %u ", 12345678912));
	printf("\n");
	return 0;
}
