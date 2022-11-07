/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:02:11 by rofontai          #+#    #+#             */
/*   Updated: 2022/11/07 16:49:12 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_word(char const *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			w++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (w);
}

static char	*word_push(char const *s, size_t start, size_t len)
{
	char *dest;
	size_t	i;

	i = 0;
	dest = malloc(sizeof(char *) * len + 1);
	if (!dest)
		return (0);
	while (i < len && s[start + i])
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	size_t	w;
	size_t	i;
	size_t	start;
	char	**split;

	if (!s)
		return (0);
	split = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!split)
		return (0);
	w = 0;
	i = -1;
	start = -1;
	while (i++ <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			split[w++] = word_push(s, start, i);
			start = -1;
		}
	}
	split[w] = 0;
	return (split);
}
