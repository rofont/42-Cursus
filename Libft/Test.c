/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:25:11 by romainfonta       #+#    #+#             */
/*   Updated: 2022/10/25 15:27:54 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int main (void)
{
  // char a[150] = "Salut Les terriens";
  // char b[150] = "Poule";
  // unsigned int c = 0;
  // printf("%zu\n",ft_strlcat(a, b, c));

  char d[150] = "Salut Les terriens";
  char e[150] = "Soule";
  unsigned int f = 1;
  printf("%d\n", memcmp(d, e, f));
}
