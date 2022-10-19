#include <ctype.h>
#include <stdio.h>

int ft_isprint(int c);

int main (void)
{
  int a = 59;
  printf("%d\n", ft_isprint(a));

  int b = 59;
  printf("%d\n", isprint(b));
  return (0);
}