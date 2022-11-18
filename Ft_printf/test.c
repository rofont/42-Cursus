#include "ft_printf.h"
#include <stdio.h>


int main()
{
	// int a;
	printf("%i", printf("La valeur est : %d%dd%d = ", 1, 2, -3));
	printf("\n");
	printf("%i", ft_printf("La valeur est : %d%dd%d = ", 1, 2, -3));
	printf("\n");
	return 0;
}
