/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:25:11 by romainfonta       #+#    #+#             */
/*   Updated: 2022/10/21 16:47:19 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main (void)
{
  char a[150] = "Salut Les terriens";
  char b[150] = "Salut";
  unsigned int c = 3;
  printf("%d\n", ft_strncmp(a, b, c));

  char d[150] = "Salut Les terriens";
  char e[150] = "Salut";
  unsigned int f = 3;
  printf("%d\n", strncmp(d, e, f));
}