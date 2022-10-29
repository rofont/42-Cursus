/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:00:59 by romainfonta       #+#    #+#             */
/*   Updated: 2022/10/28 17:09:04 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	size_t			i;
	unsigned int	len_s;

	i = 0;
	len_s = ft_strlen(s);
	while (i < len && s[start + i])
		i++;
	dest = (char *)malloc(i + 1);
	if (!dest)
		return (0);
	if (start >= len_s)
	{
		dest[0] = '\0';
		return (dest);
	}
	i = 0;
	while (i < len && s[start + i])
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
