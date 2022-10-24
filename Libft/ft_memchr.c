/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:19:36 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/24 16:43:54 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;
	char *temp = (char *)s;


	i = 0;
	while (temp[i] != '\0')
	{
		if (temp[i] == c && i < n)
			return (s);
		else
			i++;
	}
	return (0);
}
