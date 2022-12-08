/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rofontai <rofontai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 09:35:20 by rofontai          #+#    #+#             */
/*   Updated: 2022/12/08 11:55:03 by rofontai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_copy(int fd, char *str)
{
	char	*buff;
	int		byte;

	buff = malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (0);
	byte = 1;
	while (search_new_line(str, '\n') == 0 && byte != 0)
	{
		byte = read(fd, buff, BUFFER_SIZE);
		if (byte == -1)
		{
			free(buff);
			free(str);
			return (0);
		}
		// buff[byte] = '\0';
		str = join(str, buff);
	}
	free(buff);
	return (str);
}

char	*join(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
		if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		if (!s1)
			return (0);
	}
	dest = malloc(sizeof(char) * (lenstr(s1) + lenstr(s2)));
	if (!dest)
		return (0);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	free(s1);
	dest[i] = '\0';
	return (dest);
}

int	search_new_line(char *str, char c)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (0);
}

char	*extract_line(char *str)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	if (!str[i])
		return (0);
	len = search_new_line(str, '\n');
	dest = malloc(sizeof(char) * len + 2);
	if (!dest)
		return (0);
	while (str[i] && str[i] != '\n')
	{
		dest[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	free(str);
	return (dest);
}

char	*clear_temp(char *str)
{
	int		i;
	int		start;
	int		len;
	char	*dest;

	i = 0;
	if (!str || search_new_line(str, '\n') == 0)
		return (0);
	start = (search_new_line(str, '\n') + 1);
	len = (lenstr(str) - start);
	dest = malloc(sizeof(char) * len + 1);
	if (!dest)
		return (0);
	while (i <= len && str[start + i])
	{
		dest[i] = str[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
