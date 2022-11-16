#include "libftprintf.h"
#include <stdio.h>


int main()
{
	// int a;
	printf("%i", printf("La valeur est : %i ", -123456789));
	printf("\n");
	printf("%i", ft_printf("La valeur est : %i ", -123456789));
	printf("\n");
	return 0;
}
