#include "ft_printf.h"
#include <stdio.h>


int main()
{
	char z;
	printf("%i", printf("La valeur est : %p et la valeur de %s = ", &z, "la liste de pointeur est"));
	printf("\n");
	printf("%i", ft_printf("La valeur est : %p et la valeur de %s = ", &z, "la liste de pointeur est"));
	printf("\n");
	return 0;
}
