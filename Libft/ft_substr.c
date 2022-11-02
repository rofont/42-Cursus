/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:00:59 by romainfonta       #+#    #+#             */
/*   Updated: 2022/11/02 16:04:00 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*FT_SUBSTR alloue de la memoire avec malloc et retourne une chaîne de
caractères issue de la chaîne ’s’. Cette nouvelle chaîne commence à
l’index ’start’ et a pour taille maximale ’len’*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	size_t			i;
	unsigned int	len_s;

	i = 0;
	len_s = ft_strlen(s);
	if (start < len_s)
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
