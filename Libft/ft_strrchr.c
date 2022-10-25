/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:18:58 by romainfonta       #+#    #+#             */
/*   Updated: 2022/10/25 14:35:48 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len_s;
	char	t;

	t = c;
	len_s = ft_strlen(s);
	while (s[len_s] != t)
	{
		if (len_s == 0)
			return (0);
		len_s--;
	}
	return ((char *)&s[len_s]);
}
