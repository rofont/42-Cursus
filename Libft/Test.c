/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:25:11 by romainfonta       #+#    #+#             */
/*   Updated: 2022/11/10 21:23:39 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include "libft.h"

/*ft_atoi
int main(void)
{
  char  *t = "123456789";
  char  *t1 = " -12345abc";
  char  *t2 = " \t --1245";

  printf("%d\n", atoi(t));
  printf("%d\n", ft_atoi(t));
  printf("\n");
  printf("%d\n", atoi(t1));
  printf("%d\n", ft_atoi(t1));
  printf("\n");
  printf("%d\n", atoi(t2));
  printf("%d\n", ft_atoi(t2));

  return(0);
}*/

/*ft_bzero
int main(void)
{
  char  *t = "HelloWorld";
  char  *t1 = "Hello All World";
  char  *t2 = "Pour 42 tout va bien";

  printf("%s\n", bzero(t, 5));
  printf("%s\n", ft_bzero(t, 5));
  printf("\n");
  printf("%s\n", bzero(t1, 0));
  printf("%s\n", ft_bzero(t1, 0));
  printf("\n");
  printf("%s\n", bzero(t2, 22));
  printf("%s\n", ft_bzero(t2, 22));

  return(0);
}*/

/*ft_isalnum
int main(void)
{
  int a = 'b';
  int b = 'F';
  int c = '\t';

  printf("%d\n", isalnum(a));
  printf("%d\n", ft_isalnum(a));
  printf("\n");
  printf("%d\n", isalnum(b));
  printf("%d\n", ft_isalnum(b));
  printf("\n");
  printf("%d\n", isalnum(c));
  printf("%d\n", ft_isalnum(c));

  return(0);
}*/

/*ft_isalpha
int main(void)
{
  int a = 'b';
  int b = '9';
  int c = '\t';

  printf("%d\n", isalpha(a));
  printf("%d\n", ft_isalpha(a));
  printf("\n");
  printf("%d\n", isalpha(b));
  printf("%d\n", ft_isalpha(b));
  printf("\n");
  printf("%d\n", isalpha(c));
  printf("%d\n", ft_isalpha(c));

  return(0);
}*/

/*ft_isascii
int main(void)
{
  int a = 'b';
  int b = '9';
  int c = 250;

  printf("%d\n", isascii(a));
  printf("%d\n", ft_isascii(a));
  printf("\n");
  printf("%d\n", isascii(b));
  printf("%d\n", ft_isascii(b));
  printf("\n");
  printf("%d\n", isascii(c));
  printf("%d\n", ft_isascii(c));

  return(0);
}*/

/*ft_isdigit
int main(void)
{
  int a = '5';
  int b = 'a';
  int c = 250;

  printf("%d\n", isdigit(a));
  printf("%d\n", ft_isdigit(a));
  printf("\n");
  printf("%d\n", isdigit(b));
  printf("%d\n", ft_isdigit(b));
  printf("\n");
  printf("%d\n", isdigit(c));
  printf("%d\n", ft_isdigit(c));

  return(0);
}*/

/*ft_substr
int main(void)
{
  char *t = "Hello World";
  char *t1 = "Par ici la monaie";
  char *t2 = "Keep calm and fast swim";

  printf("%s\n", ft_substr(t, 3, 15));
  printf("\n");
  printf("%s\n", ft_substr(t1, 5, 5));
  printf("\n");
  printf("%s\n", ft_substr(t2, 14, 11));

  return (0);
}*/

/*ft_putchar_fd
int main(void)
{
  char c = 'a';
  char c1 = '1';
  char c2 = ' ';

  return (0);
}*/

/*ft_strjoin
int main(void)
{
  char *t = "Hello World";
  char *t1 = "Par ici la monaie";
  char *t2 = "Keep calm and fast swim";

  printf("%s\n", ft_strjoin(t, t2));
  printf("\n");
  printf("%s\n", ft_strjoin(t1, t2));
  printf("\n");
  printf("%s\n", ft_strjoin(t, t1));

  return (0);
}*/

/*ft_strtrim
int main(void)
{
	printf("%s\n", ft_strtrim("abcqabc", "abc"));
	printf("%s\n", ft_strtrim("xavocadoxyz", "xyz"));
  printf("%s\n", ft_strtrim("", ""));
	return (0);
}*/

/*ft_split
int main(void)
{
    char **tab;
    unsigned int    i;
    i = 0;
    tab = ft_split("   lorem ipsum dolor sit amet,    consectetur adipiscing elit. Sed non risus. Suspendisse     ", ' ');
    if (!tab[0])
        printf("ok\n");
    while (tab[i] != NULL)
    {
        printf("%s\n", tab[i]);
        i++;
    }
	free((char **)tab);
    return (0);
}*/

/*ft_itoa
int main(void)
{
  int n = -2147483648;
  printf("%s\n", ft_itoa(n));
  return (0);
}*/

/*test structure
int main(void)
{
  t_list *lst = NULL;
  while (lst)
  {

    printf("%d\n", lst->content);
    lst = lst->next;
  }
  return (0);
}*/
