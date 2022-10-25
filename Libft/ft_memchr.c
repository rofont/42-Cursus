/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:19:36 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/25 15:17:50 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*temp;

	temp = (char *)s;
	i = 0;
	while (i < n)
	{
		if (temp[i] == (char)c)
			return (&temp[i]);
		i++;
	}
	return (0);
}
