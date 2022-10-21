/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:25:11 by romainfonta       #+#    #+#             */
/*   Updated: 2022/10/21 08:57:50 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

void *ft_memcpy(void *dest, void *src, size_t n);

int main (void)
{
  //char a[150] = "Salut Les terriens";
  //char c[150] = "Paul va bien"
  //int le = 4;
  //printf("%s\n", ft_memcpy(a, c, le));

  char b[150] = "Salut Les terriens";
  char d[] = "Paul";
  int len = 4;
  printf("%s\n", memccpy(b, d, len));
}