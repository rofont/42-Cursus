/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:02:11 by rofontai          #+#    #+#             */
/*   Updated: 2022/11/02 12:37:50 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	nb_s;
	size_t	x;
	size_t	len;
	char	**split;

	i = 0;
	nb_s = 0;
	x = 0;
	len = 0;
	while (s[i])
	{
		split[nb_s][x] = s[i];
		if (s[i] == c)
		{
			split[nb_s][x + 1] = '\0';
			len += ft_strlen(split[nb_s]);
			i++;
			nb_s++;
			x = 0;
		}
		else
			i++;
	}
	return (split);
}

/*tant que s et pas fini
	si c est rencontrer dans s de x
		alors mettre c et avant dans split case i-j
		calculer taille split i-j
		avancer i
		avancer x
		remettre a zero j
	sinon avancer x*/
