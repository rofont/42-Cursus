/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:12:45 by romainfonta       #+#    #+#             */
/*   Updated: 2022/11/08 18:45:45 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	len_n(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

// int main()
// {
// 	printf("%zu\n", len_n(-1548714523));
// 	return(0);
// }

/*FT_ITOA alloue de la memoire avec malloc et retourne une chaîne de caractères
représentant l’entier (n) reçu en argument.*/
char	*ft_itoa(int n)
{


}
