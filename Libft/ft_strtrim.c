/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:38:27 by rofontai          #+#    #+#             */
/*   Updated: 2022/10/31 15:29:27 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, char const *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	i;
	size_t	first_str;
	char	*dest;

	i = 0;
	first_str = 0;
	len_s1 = ft_strlen(s1);
	while (s1[first_str] && (in_set(s1[first_str], set) != 0))
		first_str++;
	while ((len_s1 <= first_str) && in_set(s1[len_s1 - 1], set))
		len_s1--;
	dest = (char *)malloc(len_s1 - first_str + 1);
	if (!dest)
		return (0);
	while (first_str < len_s1)
	{
		dest[i] = s1[first_str];
		i++;
		first_str++;
	}
	dest[i] = '\0';
	return (dest);
}
