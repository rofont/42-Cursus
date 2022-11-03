/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:02:11 by rofontai          #+#    #+#             */
/*   Updated: 2022/11/03 12:05:39 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static size_t	count_word(char const *s, char c)
{
	size_t i;
	size_t w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] == c && (s[i + 1] != c) && s[i + 1])
			w++;
		i++;
	}
	return (w + 1);
}


// static void *ft_free(char **s)
// {
//     while (*s)
//         free(*s++);
//     free(s);
//     return (NULL);
// }


char	**ft_split(char const *s, char c)
{
	size_t nbw;
	char **split;
	size_t i;
	size_t start;
	size_t w;

	if (!s)
		return (0);
	w = 0;
	start = 0;
	i = 0;
	nbw = (count_word(s, c));
	split = malloc(sizeof(char **) * (nbw + 1));
	if (!split)
		return (0);
	while (*s && w < nbw)
	{
		while (s[i] != c)
			i++;
		if (s[i] == c && (s[i + 1] != c) && s[i + 1])
		{
			split[w] = ft_substr(s, start, i);
			start = i + 1;
			w++;

		}
		i++;
	}
	return (split);
}

int main(void)
{
    char **tab;
    unsigned int    i;
    i = 0;
    tab = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
    if (!tab[0])
        ft_putendl_fd("ok\n", 1);
    while (tab[i] != NULL)
    {
        ft_putendl_fd(tab[i], 1);
        i++;
    }
    return (0);
}
