/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 08:19:46 by rofontai          #+#    #+#             */
/*   Updated: 2022/11/25 11:05:00 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/*peut etre mixer avec strlen*/
int	find_new_line(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i + 1);
		i++;
	}
	return (-1);
}

char	*extraction_line(char *str, int len)
{
	char			*dest;
	int				i;
	unsigned int	len_s;

	i = 0;
	len_s = strlen(str);
	dest = malloc(sizeof(char) * len_s + 1);
	if (!dest)
		return (0);
	while (i < len && str[i])
	{
		dest[i] = str[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}