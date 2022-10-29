/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:57:32 by romainfonta       #+#    #+#             */
/*   Updated: 2022/10/28 21:57:48 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The bzero() function writes n zeroed bytes to the string s.  If n is zero,
 bzero() does nothing.*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = (char *)s;
	while (i < n)
	{
		temp[i] = '\0';
		i++;
	}
}
