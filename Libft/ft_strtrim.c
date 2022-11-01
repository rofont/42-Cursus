/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romainfontaine <romainfontaine@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:38:27 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/31 21:50:06 by romainfonta      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len_s1;
	char	*dest;

	i = 0;
	len_s1 = ft_strlen(s1);
	if (s1 != 0 && set != 0)
	{
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[len_s1 - 1] && ft_strchr(set, s1[len_s1 - 1]) && (len_s1 > i))
			len_s1--;
		dest = malloc(sizeof(char) * (len_s1 - i) + 1);
		if (!dest)
			return (0);
		ft_strlcpy(dest, &s1[i], len_s1 - i + 1);
		return (dest);
	}
	return (0);
}
