/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:25:11 by romainfonta       #+#    #+#             */
/*   Updated: 2022/10/24 16:38:07 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include "libft.h"

int main (void)
{
  char a[150] = "Salut Les terriens";
  char b[150] = "Poule";
  unsigned int c = 20;
  printf("%s\n",ft_memmove(a, b, c));

  char d[150] = "Salut Les terriens";
  int e = 15;
  unsigned int f = 20;
  printf("%s\n", memchr(d, e, f));
}
