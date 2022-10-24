/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:36:43 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/24 17:06:31 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	in;

	i = 0;
	in = 0;
	if (dstsize < 1)
		return (i);
	while (dst[i] != '\0' && i < (dstsize - 1))
		i++;
	while (src[in] != '\0')
	{
		dst[i] = src[in];
		in++;
		i++;
	}
	return (i);
}
