#include <ctype.h>
#include <stdio.h>

int ft_isalnum (int c);

int main (void)
{
    int a = '5';

    printf("%d\n", ft_isalnum(a));

    int b = '5';
    printf("%d\n", isalnum(b));
    return (0);
}